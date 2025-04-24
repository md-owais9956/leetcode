class Solution {
    public:
        const int MOD = 1e9 + 7;
        const int MAXN = 10001;
    
        vector<vector<int>> divisors;
        vector<vector<long long>> dp;
        vector<long long> factorial, invFactorial;
    
        long long modPow(long long x, long long n) {
            long long result = 1;
            while (n) {
                if (n % 2) result = result * x % MOD;
                x = x * x % MOD;
                n /= 2;
            }
            return result;
        }
    
        void precomputeFactorials(int n) {
            factorial.resize(n + 1);
            invFactorial.resize(n + 1);
    
            factorial[0] = 1;
            for (int i = 1; i <= n; i++)
                factorial[i] = factorial[i - 1] * i % MOD;
    
            for (int i = 0; i <= n; i++)
                invFactorial[i] = modPow(factorial[i], MOD - 2);
        }
    
        long long comb(int n, int k) {
            if (k < 0 || k > n) return 0;
            return factorial[n] * invFactorial[k] % MOD * invFactorial[n - k] % MOD;
        }
    
        int idealArrays(int n, int maxValue) {
           divisors.resize(maxValue + 1);
            for (int i = 1; i <= maxValue; i++) {
                for (int j = i * 2; j <= maxValue; j += i) {
                    divisors[j].push_back(i);
                }
            }
    
            precomputeFactorials(n + 14);
    
           dp.assign(maxValue + 1, vector<long long>(15, 0)); 
    
            for (int i = 1; i <= maxValue; i++) {
                dp[i][1] = 1;
            }
    
            for (int len = 2; len <= 14; len++) {
                for (int i = 1; i <= maxValue; i++) {
                    for (int d : divisors[i]) {
                        dp[i][len] = (dp[i][len] + dp[d][len - 1]) % MOD;
                    }
                }
            }
    
            long long result = 0;
            for (int i = 1; i <= maxValue; i++) {
                for (int len = 1; len <= 14; len++) {
                    result = (result + dp[i][len] * comb(n - 1, len - 1) % MOD) % MOD;
                }
            }
    
            return result;
        }
    };
    