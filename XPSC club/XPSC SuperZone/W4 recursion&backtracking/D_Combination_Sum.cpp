class Solution {
public:
    vector<vector<int>>ans;
    void f(vector<int>&cndt, int trgt, int idx, vector<int>&v)
    {
        if(trgt==0)
        {
            ans.push_back(v);
            return;
        }
        if(trgt<0) return;
        for(int i=idx;i<cndt.size();i++)
        {
            v.push_back(cndt[i]);
            f(cndt,trgt-cndt[i],i,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        f(candidates,target,0,v);
        return ans;
    }
};