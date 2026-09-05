import gradio
import pandas as pd
import numpy as np
import pickle

with open('best_GBR_model.pkl', 'rb') as f:
    best_model = pickle.load(f)

def insurance_cost_predictor(age, sex, bmi, children, smoker, region):

    # recontruct the engineered features
    is_parent = 1 if children >0 else 0

    if bmi < 18.5:
        bmi_category = 'Underweight'
    elif 18.5<= bmi < 25:
        bmi_category = 'Normal'
    elif 25 <= bmi < 30:
        bmi_category = 'Overweight'
    else:
        bmi_category = 'Obese'


    input_df = pd.DataFrame({
        'age': [age],
        'bmi': [bmi],
        'children': [children],
        'is_parent': [is_parent],
        'sex': [sex],
        'smoker': [smoker],
        'region': [region],
        'bmi_category': [bmi_category]
    })

    log_pred = best_model.predict(input_df)[0]
    actual_pred = np.expm1(log_pred)

    return f"$ {actual_pred:.2f}"


app = gradio.Interface(
    fn=insurance_cost_predictor,
    inputs=[
        gradio.Number(label="Age (Years)", value=30),
        gradio.Dropdown(choices=["male", "female"], label="Sex", value="male"),
        gradio.Number(label="BMI", value=25.0),
        gradio.Number(label="Number of Children", value=0),
        gradio.Dropdown(choices=["yes", "no"], label="Smoker", value="no"),
        gradio.Dropdown(choices=["northeast", "northwest", "southeast", "southwest"], label="Region", value="northeast"),
    ],
    outputs=gradio.Textbox(label="Predicted Insurance Cost"),
    title="Medical Insurance Predictor",
    description="This app predicts the medical insurance cost based on user inputs such as age, sex, BMI, number of children, smoking status, and region. The prediction is made using a Gradient Boosting Regressor model."
)

app.launch()