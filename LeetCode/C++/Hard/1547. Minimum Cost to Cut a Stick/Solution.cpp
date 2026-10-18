class Solution {
public:
    int fun(vector<int>& cuts, int i, int j){
        if(i > j) return 0;
        int res = INT_MAX;

        for(int k = i ; k <= j ; k++){
            int cost = cuts[j + 1] - cuts[i - 1];

            int r = cost + fun(cuts, i, k - 1) + fun(cuts, k + 1, j);
            res = min(res, r);
        }
        return res;
    }

    int minCost(int n, vector<int>& c) {
        vector<int> cuts;
        cuts.push_back(0);
        for(int i = 0 ; i < c.size() ; i++){
            cuts.push_back(c[i]);
        }
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        int s = cuts.size();
        return fun(cuts, 1, s - 2);
    }
};