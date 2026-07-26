class Solution {

private:
    void f(vector<int> &nums, vector<int> &a, vector<vector<int>> &res, int frq[])
    {
        if(a.size()==nums.size())
        {
            res.push_back(a);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(!frq[i])
            {
                a.push_back(nums[i]);
                frq[i]=1;
                f(nums,a,res,frq);
                frq[i]=0;
                a.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>a;
        int frq[nums.size()];
        for(int i=0;i<nums.size();i++) frq[i]=0;

        f(nums,a,res,frq);
        return res;
    }
};