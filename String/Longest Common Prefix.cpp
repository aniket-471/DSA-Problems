class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans=s[0];
        for(int i=1;i<s.size();i++)
        {
            string temp="";
            int j=0;
            while(j<min(ans.size(),s[i].size()))
            {
                if(ans[j]==s[i][j])
                    temp+=ans[j];
                else
                    break;
                j++;
            }
            ans=temp;
        }
        return ans;
    }
};















