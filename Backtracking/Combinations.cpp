class Solution {
public:
    void f(int n,int k,int ind)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return ;
        }
        for(int i=ind;i<n;i++)
        {
            v.push_back(i+1);
            f(n,k,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        f(n,k,0);
        return ans;
    }
    vector<vector<int>>ans;
    vector<int>v;
};
