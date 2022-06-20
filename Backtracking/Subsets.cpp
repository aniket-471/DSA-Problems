class Solution {
public:
    void f(vector<int>&n,int ind)
    {
        ans.push_back(v);
        for(int i=ind;i<n.size();i++)
        {
            v.push_back(n[i]);
            f(n,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& n) {
        f(n,0);
        return ans;
    }
    vector<vector<int>>ans;
    vector<int>v;
};
