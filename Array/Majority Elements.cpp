class Solution {
public:
    int majorityElement(vector<int>& n) {
        int x=n[0],c=1;
        for(int i=1;i<n.size();i++)
        {
            if(n[i]==x)
                c++;
            else
            {
                c--;
                if(c==0)
                {
                    x=n[i];
                    c=1;
                }
            }
        }
        return x;
    }
};
