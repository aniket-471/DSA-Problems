/*using set*/
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& n) {
        int j=0,s=0,m=0,i=0;
        unordered_set<int>st;
        while(j<n.size())
        {
            while(st.find(n[j])!=st.end())
            {
                s=s-n[i];
                st.erase(n[i]);
                i++;
            }
            s+=n[j];
            st.insert(n[j]);
            m=max(s,m);
            j++;
        }
        return m;
    }
};
/*using map*/
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& n) {
       int l=n.size();
        int s=0,m=0,i=0,j=0;
        map<int,int>mp;
        while(j<l)
        {
            mp[n[j]]++;
            s+=n[j];
            while(i<=j&&mp[n[j]]>1)
            {
                s-=n[i];
                if(mp[n[i]]==1)
                mp.erase(n[i]);
                else
                    mp[n[i]]--;
                i++;
            }
            m=max(m,s);
            j++;
        }
        return m;
    }
};
