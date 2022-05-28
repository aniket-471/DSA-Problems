class Solution {
public:
    int jump(vector<int>& n) {
        int l=n.size();
        int cr=0,mr=0,j=0;
        for(int i=0;i<l-1;i++)
        {
            mr=max(mr,i+n[i]);
            if(i==cr)
            {
                j++;
                cr=mr;
            }
        }
        return j;
    }
};
