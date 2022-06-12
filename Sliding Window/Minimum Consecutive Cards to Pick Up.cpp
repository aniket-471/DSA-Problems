class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
      int i=0,j=0,m=INT_MAX;
        set<int>s;
        while(j<c.size())
        {
            while(s.find(c[j])!=s.end())
            {
                m=min(m,j-i+1);
                s.erase(c[i]);
                i++; 
            }
            s.insert(c[j]);
            j++;
        }
        if(m==INT_MAX)
            return -1;
        return m;
    }
};
