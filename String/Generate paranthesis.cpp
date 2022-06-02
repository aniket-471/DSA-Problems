class Solution {
public:
    vector<string>ans;
    void f(string cur,int score,int n)
    {
        if(score<0)
            return;
        if(s.size()>2*n)
            return;
        if(s.size()==2*n&&score==0)
        {
            ans.push_back(s);
            return;
        }
        f(s+'(',score+1,n);
        f(s+')',score-1,n);
    }
    vector<string> generateParenthesis(int n) {
        f("",0,n);
        return ans;
    }
};
