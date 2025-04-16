class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int i;
            
           if(nums.size()==1){
            return nums[0];
           }
           if(nums[nums.size()-1] > nums[nums.size()-2]){
            return nums[nums.size()-1];
           }else{
            for( i = 0; i < nums.size()-1; i=i+2){
                if(i%2==0){
                    if(nums[i]==nums[i+1]){
                        continue;
                    }else{
                        return nums[i];
                    }
                }
            }if(i==nums.size()-2){
                return nums[i+1];
            }
            }return 0;
        }
    };