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
            s+=c[i];
            pos.push_back(c[i]);
            f(i,s,c,t);
            pos.pop_back();
            s-=c[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        f(0,0,c,t);
        return ans;
    }
    vector<vector<int>>ans;
    vector<int>pos;
};
