class Solution {
public:
    int fun(vector<int> &a, int n, int i, int k){
        if(i == n || k == 0) return 0;

        if(k == 2){
            int c1 = fun(a, n, i + 1, k - 1) - a[i];
            int c2 = fun(a, n, i + 1, k);
            return max(c1, c2);
        }  

        else{
            int c1 = fun(a, n, i + 1, k - 1) + a[i];
            int c2 = fun(a, n, i + 1, k);
            return max(c1, c2);
        }
    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int k = 2;

        int count = fun(prices, n, 0, k);
        return count;
    }
};