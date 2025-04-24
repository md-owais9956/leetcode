class Solution {
    public:
        int countLargestGroup(int n) {
            unordered_map<int, int> digitSumGroups;
    
            for (int i = 1; i <= n; ++i) {
                int sum = 0, num = i;
                while (num > 0) {
                    sum += num % 10;
                    num /= 10;
                }
                digitSumGroups[sum]++;
            }
    
            int maxSize = 0, count = 0;
            for (auto& [key, val] : digitSumGroups) {
                if (val > maxSize) {
                    maxSize = val;
                    count = 1;
                } else if (val == maxSize) {
                    count++;
                }
            }
    
            return count;
        }
    };
    