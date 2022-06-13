class Solution {
public:
    int f(vector<int>& n, int k)
    {
        int l=n.size();
        int i=0,j=0,c=0,s=0;
        while(j<l)
        {
            if(n[j]%2==1)
            {
                c++;
               
            }
            while(i<=j&&c>k)
            {
                if(n[i]%2==1)
                    c--;
               
                i++;
            }
            
              s+=j-i; 
            j++;
        }
        return s;
    }
    int numberOfSubarrays(vector<int>& n, int k) {
        return f(n,k)-f(n,k-1);
    }
};
