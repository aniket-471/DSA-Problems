class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int l=h.size();
        int ls[l],rs[l];
        stack<int>s;
        for(int i=0;i<l;i++)
        {
            while(!s.empty()&&h[s.top()]>=h[i])
                s.pop();
            if(!s.empty())
            {
                ls[i]=s.top()+1;
            }
            else
                ls[i]=0;
            s.push(i);
        }
        stack<int>s1;
        for(int i=l-1;i>=0;i--)
        {
            while(!s1.empty()&&h[s1.top()]>=h[i])
                s1.pop();
            if(!s1.empty())
            {
                rs[i]=s1.top()-1;
            }
            else
                rs[i]=l-1;
            s1.push(i);
        }
        int m=0;
        for(int i=0;i<l;i++)
        {
            m=max(m,(rs[i]-ls[i]+1)*h[i]);
        }
        return m;
    }
};
