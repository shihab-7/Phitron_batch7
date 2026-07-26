class Solution {
public:
    set<vector<int>>s;
    void sub(vector<int>&nums, int idx,vector<int>&v)
    {
        if(idx==nums.size())
        {
            s.insert(v);
            return;
        }
        v.push_back(nums[idx]);
        sub(nums,idx+1,v);
        v.pop_back();
        sub(nums,idx+1,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        sub(nums,0,v);
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};