class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_val = INT_MAX;
        bool has_even = false;
        bool has_odd = false;

        for (int x : nums1) {
            min_val = std::min(min_val, x);
            if (x % 2 == 0) {
                has_even = true;
            } else {
                has_odd = true;
            }
        }

        if (!has_even || !has_odd) {
            return true;
        }
        return (min_val % 2 != 0);
    }
};