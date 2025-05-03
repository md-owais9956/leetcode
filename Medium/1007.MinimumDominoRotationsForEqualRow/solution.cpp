class Solution {
    public:
        int check(int x, vector<int>& A, vector<int>& B) {
            int rotationsA = 0, rotationsB = 0;
            int n = A.size();
            for (int i = 0; i < n; ++i) {
                if (A[i] != x && B[i] != x) return -1;
                if (A[i] != x) rotationsA++;
                if (B[i] != x) rotationsB++;
            }
            return min(rotationsA, rotationsB);
        }
    
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int rotations = check(tops[0], tops, bottoms);
            if (rotations != -1 || tops[0] == bottoms[0]) return rotations;
            return check(bottoms[0], tops, bottoms);
        }
    };