class Solution {
public:
    string reverseWords(string s) {
       /* int l=s.size(),j=0,i=0;
        string res="";
      while(i<l&&s[i]==' ')
          i++;
        j=i;
        while(j<l)
        {
            if(s[j]==' ')
            {
                res=' '+s.substr(i,j-i)+res;
                while(s[j]==' ')
                    j++;
                i=j;
            }
            else
                j++;
        }
        if(s[l-1]!=' ')
        {
            res=s.substr(i,j-i)+res;
        }
        else
        res.erase(res.begin());
        return res;*/
        /*using stringstream*/
        string ans,word;
        stringstream ss(s);
        while(ss>>word)
        {
            ans=word+' '+ans;
        }
        ans.pop_back();
        return ans;
    }
};
