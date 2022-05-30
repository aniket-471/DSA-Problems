class Solution {
public:
    int f(vector<vector<int>>& b,int n,int m,int p,int q)
    {
        int x[8]={1,0,-1,0,1,-1,-1,1};
        int y[8]={0,1,0,-1,1,1,-1,-1};
        int c=0;
        for(int i=0;i<8;i++)
        {
            int ni=p+x[i];
            int ny=q+y[i];
            if(ni>=0&&ni<n&&ny>=0&&ny<m)
            {
                if(b[ni][ny]==1||b[ni][ny]==-1)
                    c++;
            }
        }
        return c;
    }
    void gameOfLife(vector<vector<int>>& b) {
        
        int n=b.size(),m=b[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int c=f(b,n,m,i,j);
                if(b[i][j]==0)
                {
                    
                    if(c==3)
                        b[i][j]=2;
                }
                else
                {
                    if(c==2||c==3)
                        b[i][j]=1;
                    else
                        b[i][j]=-1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(b[i][j]==-1)
                    b[i][j]=0;
            else if(b[i][j]==2)
                b[i][j]=1;
                
        }
    }
};
