class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return ""; 
            
            string opt;
            string s = strs[0];  
            
            for (int i = 0; i < s.size(); i++) {
                char ch = s[i];  
                for (int j = 1; j < strs.size(); j++) {
                    if (i >= strs[j].size() || strs[j][i] != ch) {
                        return opt; 
                    }
                }
                opt.push_back(ch);
            }
            return opt;
        }
    };
    