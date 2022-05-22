class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        vector<int>ans;
        int i=0;
        while(i<n.size())
        {
            if(n[i]!=i+1&&n[i]!=n[n[i]-1])
                swap(n[i],n[n[i]-1]);
            else
                i++;
        }
        for(int i=0;i<n.size();i++)
        {
            if(n[i]!=i+1)
                ans.push_back(n[i]);
        }
        return ans;
    }
};
