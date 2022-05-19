class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*int l=nums.size(),i=0;
        while(i<l)
        {
            if(nums[i]!=i+1)
            {
                int correct=nums[i]-1;
                if(nums[i]!=nums[correct])
                    swap(nums[i],nums[correct]);
                else
                    return nums[i];
            }
            else
                i++;
        }
        return 0;*/
        /*BINARY SEARCH*/
       /* int low=1,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cnt=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<=mid)
                    cnt++;
            }
            if(cnt<=mid)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;*/
    }
};
