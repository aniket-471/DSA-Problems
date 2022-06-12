class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
        int i=0,j=0,l=s.size(),ma=0;
        while(j<l)
        {
            m[s[j]]++;
            while(i<=j&&m[s[j]]>1)
            {
                
                    m[s[i]]--;
                i++;
            }
            ma=max(ma,j-i+1);
            j++;
        }
        return ma;
    }
};
