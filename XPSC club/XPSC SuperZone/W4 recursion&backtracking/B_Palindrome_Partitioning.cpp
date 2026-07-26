class Solution {

private:
    bool isPalindrome(string s,int l,int r)
    {
        while(l<=r)
        {
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    void f(int idx,vector<vector<string>>&ans,vector<string>&tmp,string s,int n)
    {
        if(idx==n)
        {
            ans.push_back(tmp);
            return;
        }
        for(int i=idx;i<n;i++)
        {
            if(isPalindrome(s,idx,i))
            {
                tmp.push_back(s.substr(idx,i-idx+1));
                f(i+1,ans,tmp,s,n);
                tmp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {

        vector<vector<string>>ans;
        vector<string>tmp;
        int n=s.size();
        f(0,ans,tmp,s,n);
        return ans;

        
    }
};