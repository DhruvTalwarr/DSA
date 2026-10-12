class Solution {
public:
    bool sahi(int have[], int needed[]){
        for(int i = 0 ; i < 256 ; i++)
        {
            if(have[i] < needed[i]){
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        int needed[256] = {0};
        int have[256] = {0};
        int n = s.size();
        int low = 0;
        int high = 0;
        int res = INT_MAX;
        int start = 0;
        for (char c : t) {
            needed[(unsigned char)c]++;
        }

        

        for(high = 0 ; high < n ; high++){
                have[(unsigned char)s[high]]++;
                while(sahi(have, needed)){
                int len = high - low + 1;
                if(res > len){
                    res = len;
                    start = low;
                }
                
                have[(unsigned char)s[low]]--;
                low++;
            }
        }
        return (res == INT_MAX) ? "" : s.substr(start, res);
    
}
};