class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1,c=0;
        string s="";
        while(i>=0||j>=0)
        {
            int x,y; 
            if(i<0)
                x=0;
            else
                x=a[i]-'0';
            if(j<0)
                y=0;
            else
                y=b[j]-'0';
            int z=x+y+c;
            if(z==3)
            {
                c=1;
                s=char(1+'0')+s;
            }
            else if(z==2)
            {
                c=1;
                s=char(0+'0')+s;
            }
            else if(z==1)
            {
                c=0;
                s=char(1+'0')+s;
            }
            else
            {
                c=0;
                s=char(0+'0')+s;
            }
            i--;
            j--;
        }
        if(c==1)
            s=char(1+'0')+s;
        return s;
    }
};
