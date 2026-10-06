class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int idx;

        while(low <= high){
            int guess = low + (high - low) / 2;

            if(nums[guess] > nums[n - 1]){
                low = guess + 1;
            }
            else{
                idx = guess;
                high = guess - 1;
            }
        }

        int low1 = 0;
        int high1 = idx - 1;
        // int ans1 = -1;
        while(low1 <= high1){
            int guess = low1 + (high1 - low1) / 2;

            if(nums[guess] == target){
                return guess;
            }
            else if(nums[guess] < target){
                low1 = guess + 1; 
            }
            else{
                high1 = guess - 1;
            }
        }
        int low2 = idx;
        int high2 = n - 1;
        // int ans1 = -1;
        while(low2 <= high2){
            int guess = low2 + (high2 - low2) / 2;

            if(nums[guess] == target){
                return guess;
            }
            else if(nums[guess] < target){
                low2 = guess + 1; 
            }
            else{
                high2 = guess - 1;
            }
        }

        return -1;

    }
};