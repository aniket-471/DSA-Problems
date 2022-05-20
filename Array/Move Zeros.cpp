class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0,i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
                c++;
            else
            {
                nums[i]=nums[j];
                i++;
            }
        }
        for(int j=0;j<c;j++)
        {
            nums[i]=0;
            i++;
        }
        
    }
};
