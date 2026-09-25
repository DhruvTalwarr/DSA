class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int id = m + n;
        vector<int> v(id);
        int i = 0;
        int j = 0;
        int k = 0;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                v[k] = nums1[i];
                k++;
                i++;
            }
            else{
                v[k] = nums2[j];
                k++;
                j++;
            }
        }
        while(j < n){
            v[k] = nums2[j];
            k++;
            j++;
        }
        while(i < m){
            v[k] = nums1[i];
            k++;
            i++;
        }
        for(int w = 0 ; w < id ; w++){
            nums1[w] = v[w];
        }  
        // return nums1; 

    }
};