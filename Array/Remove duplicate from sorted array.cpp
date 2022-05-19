class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,i=0,c=1,l=nums.size();
        for(int j=1;j<l;j++)
        {
            if(nums[j]!=nums[j-1])
            {
                c++;
                i++;
                nums[i]=nums[j];
            }
        }
        return c;
    }
};
