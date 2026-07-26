class Solution {
public:
    vector<vector<int>>ans;
    void bktrc(int idx, vector<int>&cndt, int trgt, vector<int>&v)
    {
        if(trgt==0)
        {
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<cndt.size();i++)
        {
            if(cndt[i]>trgt) break;
            if(!(i>idx && cndt[i]==cndt[i-1]))
            {
                v.push_back(cndt[i]);
                bktrc(i+1,cndt,trgt-cndt[i],v);
                v.pop_back();
            } 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        bktrc(0,candidates,target,v);
        return ans;
    }
};