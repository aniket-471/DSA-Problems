class Solution {
public:
    void f(int ind,int s,vector<int>& c, int t)
    {
        if(s>t)
            return ;
        if(s==t)
        {
            ans.push_back(pos);
            return ;
        }
        for(int i=ind;i<c.size();i++)
        {
            if(i>ind&&c[i]==c[i-1])
                continue;
            s+=c[i];
            pos.push_back(c[i]);
            f(i+1,s,c,t);
            pos.pop_back();
            s-=c[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        f(0,0,c,t);
        return ans;
    }
     vector<vector<int>>ans;
    vector<int>pos;
};
