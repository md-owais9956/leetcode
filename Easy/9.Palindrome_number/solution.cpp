class Solution {
    public:
        bool isPalindrome(auto x) {
            if(x<0){
                return false;
            }else{
                long rev = 0;
                auto y = x;
                while(x>0){
                    rev = rev*10 + x % 10;
                    x/=10;
                };
                if (rev == y){
                    return true;
                };
            }
    return 0;
        }
    };