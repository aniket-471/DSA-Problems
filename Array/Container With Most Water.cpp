class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=height.size(),i=0,j,m=0;
        j=l-1;
        while(i<j)
        {
            m=max(m,(j-i)*min(height[i],height[j]));
            if(height[i]<=height[j])
                i++;
            else
                j--;
        }
        return m;
    }
};
