class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=s.size(),i=0,j=0,ans=0,maxf=0;
        map<char,int>m;
        while(j<l)
        {
            m[s[j]]++;
            maxf=max(maxf,m[s[j]]);
            if(j-i+1-maxf>k)
            {
                m[s[i]]--;
                i++;
            }
            else
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};
