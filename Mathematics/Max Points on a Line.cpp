class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int l=p.size(),Ans=0;;
        for(int i=0;i<l;i++)
        {
            map<pair<int,int>,int>m;
            for(int j=0;j<l;j++)
            {
                if(i==j)
                    continue;
                int num=p[j][1]-p[i][1];
                int den=p[j][0]-p[i][0];
                int hcf=__gcd(num,den);
                num/=hcf;
                den/=hcf;
                m[{num,den}]++;
            }
            int ans=0;
            for(auto i:m)
            {
                ans=max(ans,i.second);
            }
            Ans=max(Ans,ans);
        }
        return Ans+1;
    }
};
