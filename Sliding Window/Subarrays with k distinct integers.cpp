class Solution {
public:
    int f(vector<int>& n,int k)
    {
        int l=n.size();
        
        map<int,int>m;
        int c=0;
        int i=0,j=0;
        while(j<l)
        {
            m[n[j]]++;
            while(i<=j&&m.size()>k)
            {
                if(m[n[i]]==1)
                    m.erase(n[i]);
                else
                    m[n[i]]--;
                i++;
            }
            c+=(j-i+1);
            j++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& n, int k) {
        
        return f(n,k)-f(n,k-1);
    }
};
