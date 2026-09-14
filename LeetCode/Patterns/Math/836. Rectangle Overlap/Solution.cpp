class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool is_left = rec1[2] <= rec2[0];
        bool is_right = rec1[0] >= rec2[2];
        bool is_below = rec1[3] <= rec2[1];
        bool is_above = rec1[1] >= rec2[3];

        return !(is_left || is_right || is_below || is_above);
    }
};