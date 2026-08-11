class Solution {
public:

    long long fun(vector<int>& piles, int speed){
        long long hours = 0;
        for(int i = 0 ; i < piles.size() ; i++){
            hours = hours + piles[i]/ speed;
            if(piles[i] % speed != 0){
                hours++;
            }
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        sort(piles.begin(), piles.end());
        int high = piles[n - 1];
        int res = -1;
        while(low <= high){
            int guess = low + (high - low) / 2;
            long long hour = fun(piles, guess);
            if(hour > h){
                low = guess + 1;
            }
            else{
                res = guess;
                high = guess - 1;
            }
        }
        return res;
        
    }
};