class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            int n = nums.size();
            int maxElement = *max_element(nums.begin(), nums.end());
            long long res = 0;
            int count = 0; 
            int left = 0;
    
            for (int right = 0; right < n; ++right) {
                if (nums[right] == maxElement) {
                    count++;
                }
    
                
                while (count >= k) {
                    if (nums[left] == maxElement) {
                        count--;
                    }
                    left++;
                }
    
                
                res += left;
            }
    
            return res;
        }
    };
    