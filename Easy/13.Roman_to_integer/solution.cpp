class Solution {
    public:
       
    
    int romanToInt(string str) {
        int num = 0;
    
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'I') {
                if (i + 1 < str.length() && (str[i+1] == 'V' || str[i+1] == 'X')) {
                    num -= 1;  
                } else {
                    num += 1;
                }
            } else if (str[i] == 'V') {
                num += 5;
            } else if (str[i] == 'X') {
                if (i + 1 < str.length() && (str[i+1] == 'L' || str[i+1] == 'C')) {
                    num -= 10; 
                } else {
                    num += 10;
                }
            } else if (str[i] == 'L') {
                num += 50;
            } else if (str[i] == 'C') {
                if (i + 1 < str.length() && (str[i+1] == 'D' || str[i+1] == 'M')) {
                    num -= 100; 
                } else {
                    num += 100;
                }
            } else if (str[i] == 'D') {
                num += 500;
            } else if (str[i] == 'M') {
                num += 1000;
            }
        }
    
        return num;
    }
    
    
    
        
    };