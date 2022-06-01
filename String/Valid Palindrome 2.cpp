class Solution {
public:
    bool f(int l,int r,string &s)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1,c=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {  
               return f(i+1,j,s)||f(i,j-1,s);
            }
             
            i++;
            j--;
            
           
        }
        return true;
    }
};
