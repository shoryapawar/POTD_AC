class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<size(nums)-1;i++ ){
            for(int j=i+1;j<size(nums);++j){
                if(nums[i]>nums[j]){
                    int temp =nums[i];
                    nums[i]= nums[j];
                    nums[j] = temp;                }
            }
        }
    }
};