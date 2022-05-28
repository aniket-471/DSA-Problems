class Solution {
public:
    bool canJump(vector<int>& n) {
        
       int l=n.size();
           int t=l-1;
        for(int i=l-2;i>=0;i--)
        {
            if((i+n[i])>=t)
                t=i;
        }
     if(t==0)
         return true;
    return false;
    }
};
