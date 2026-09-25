class Solution {
private:
    int solve(int i, int amount, vector<int>& coins) {

        if (i == 0) {
            if (amount % coins[0] == 0) return amount / coins[0];
            return 1e9; 
        }


        int notTake = solve(i - 1, amount, coins);

      
        int take = 1e9;
        if (coins[i] <= amount) {
            take = 1 + solve(i, amount - coins[i], coins);
        }

        return min(take, notTake);
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int ans = solve(n - 1, amount, coins);
        
        return ans >= 1e9 ? -1 : ans;
    }
};