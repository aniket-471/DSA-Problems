class Solution {
public:
    string minWindow(string s, string t) {
       map<char,int>ss,pat;
        for(int i=0;i<t.size();i++)
            pat[t[i]]++;
        int l=0,r=0,count=0,need=pat.size(),mn=INT_MAX;
        string res="";
        while(r<s.size())
        {
            ss[s[r]]++;
            if(pat.count(s[r])&&pat[s[r]]==ss[s[r]])
                count++;
            while(count==need)
            {
                if((r-l+1)<mn)
                {
                    mn=r-l+1;
                    res=s.substr(l,r-l+1);
                }
                ss[s[l]]--;
                if(pat.count(s[l])&&ss[s[l]]<pat[s[l]])
                    count--;
                l++;
            }
            r++;
        }
        return res;
    }
};
