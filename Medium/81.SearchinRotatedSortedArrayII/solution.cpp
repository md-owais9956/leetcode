class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            bool k = false;
            for(int i = 0; i < nums.size(); i++){
    
                if(target == nums[i]){
                    k= true;
                    break;
                }
            }
            return k;
        }
    };