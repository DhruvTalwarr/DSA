class Solution {
public:

    int fun(int i, int n){
        if(i == n) return 1;
        if(i > n) return 0;

        int a1 = fun(i + 1, n);
        int a2 = fun(i + 2, n);

        return a1 + a2;
    }

    int climbStairs(int n) {
        int count = fun(0, n);
        return count;
    }
};