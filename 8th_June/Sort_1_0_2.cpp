class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0,low=0,high=nums.size()-1,tmp=0;
        
        while(mid<=high){
            if(nums[mid]==0){
                tmp = nums[low];
                nums[low]=nums[mid];
                nums[mid]=tmp;
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                tmp = nums[mid];
                nums[mid]=nums[high];
                nums[high]=tmp;
                high--;
            }
        }
    }
};