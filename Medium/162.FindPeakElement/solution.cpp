class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int max=nums[0];
            int k = 0;
            int size = nums.size();
            for (int i = 0; i < size; i++){
                if(max<=nums[i]){
                    max=nums[i];
                    k = i;
    
                }
            }
            return k;
        }
    };