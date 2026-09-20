class Solution {
public:
    int reverseDegree(string s) {
        long long degree = 0;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            int rev = 26 - (s[i] - 'a');
            int idx = i + 1;
            degree += (long long)rev * idx;
    
        }
        return degree;
    }

};