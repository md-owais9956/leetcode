class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int k;
            int n =nums.size();
            if(nums[0]>target){
                k=0;
            }
            if(nums[n-1]<target){
                    k=n;
                }else{
            for (int i = 0; i < nums.size(); i++){
                if(nums[i]==target){
                    k = i;
                    return k;
                }else if(nums[i]<target and nums[i+1]>target){
                    k = i+1;
                }
            }
            }
            return k;
        }
    };