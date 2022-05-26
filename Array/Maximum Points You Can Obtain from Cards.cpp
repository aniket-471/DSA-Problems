class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int l=cp.size();
        int suf[l];
        int pre[l];
        suf[0]=cp[0];
        pre[l-1]=cp[l-1];
        for(int i=1;i<l;i++)
            suf[i]=suf[i-1]+cp[i];
        for(int i=l-2;i>=0;i--)
            pre[i]=pre[i+1]+cp[i];
        int m=max(suf[k-1],pre[l-k]);
        for(int i=0,j=l-k+1;j<l;j++,i++)
        {
            m=max(m,suf[i]+pre[j]);
        }
        return m;
    }
};
