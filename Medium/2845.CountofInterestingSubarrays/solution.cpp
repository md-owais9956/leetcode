class Solution {
    public:
        long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
            unordered_map<int, long long> countMap;
            countMap[0] = 1;  
            long long result = 0;
            int prefixCount = 0;
    
            for (int num : nums) {
                if (num % modulo == k) {
                    prefixCount++;
                }
    
                int modVal = ((prefixCount - k) % modulo + modulo) % modulo;
                if (countMap.find(modVal) != countMap.end()) {
                    result += countMap[modVal];
                }
    
                countMap[prefixCount % modulo]++;
            }
    
            return result;
        }
    };
    