class Solution {
public:
    vector<string>ans;
    void f(string dgts, string tmp, int idx,vector<string>&mp)
    {
        if(idx>=dgts.length())
        {
            ans.push_back(tmp);
            return;
        }
        int num= dgts[idx]-'0';
        string val= mp[num];
        for(int i=0;i<val.length();i++)
        {
            tmp.push_back(val[i]);
            f(dgts,tmp,idx+1,mp);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string tmp;
        f(digits,tmp,0,mp);
        return ans;
    }
};