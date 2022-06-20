class Solution {
public:
    void f(vector<int>&n,int ind)
    {
        ans.push_back(v);
        for(int i=ind;i<n.size();i++)
        {
            if(i>ind&&n[i]==n[i-1])
                continue;
            v.push_back(n[i]);
            f(n,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& n) {
        sort(n.begin(),n.end());
        f(n,0);
        return ans;
    }
    vector<vector<int>>ans;
    vector<int>v;
};
