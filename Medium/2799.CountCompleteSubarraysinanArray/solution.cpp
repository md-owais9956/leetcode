class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
            int n = nums.size();
            unordered_set<int> uniqueSet(nums.begin(), nums.end());
            int targetDistinct = uniqueSet.size();
            int result = 0;
    
            for (int i = 0; i < n; ++i) {
                unordered_map<int, int> freq;
                int distinct = 0;
    
                for (int j = i; j < n; ++j) {
                    if (freq[nums[j]] == 0) distinct++;
                    freq[nums[j]]++;
    
                    if (distinct == targetDistinct) result++;
                }
            }
    
            return result;
        }
    };
    