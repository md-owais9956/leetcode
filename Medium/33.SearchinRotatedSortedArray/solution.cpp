class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int num = -1;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i]==target){
                    num = i;
                    break;
                }
            }
            return num;
        }
    };