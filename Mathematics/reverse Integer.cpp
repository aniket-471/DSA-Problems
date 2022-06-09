class Solution {
public:
    int reverse(int x) {
        long long int n=x,z=0;
        int f=0;
        if(x<0)
        {
            f=1;
            n=-n;
        }
        while(n>0)
        {
            z=z*10+n%10;
            n=n/10;
        }
        if(f==1)
            z=-z;
        if(z<(-pow(2,31))||z>(pow(2,31)-1))
            return 0;
        return z;
    }
};
