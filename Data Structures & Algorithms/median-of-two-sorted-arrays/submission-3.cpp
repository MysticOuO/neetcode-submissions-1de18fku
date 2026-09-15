class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int l2 = nums2.size();
        int i = 0;
        int j = 0;
        int mid1 = 0;
        int mid2 = 0;

        for(int count = 0; count < (l1 + l2) / 2 + 1; count++) {
            mid2 = mid1;
            if(i < l1 && j < l2) {
                if(nums1[i] > nums2[j]) {
                    mid1 = nums2[j];
                    ++j;
                }
                else {
                    mid1 = nums1[i];
                    ++i;
                }
            }

            else if(i < l1) {
                mid1 = nums1[i];
                ++i;
            }

            else {
                mid1 = nums2[j];
                ++j;
            }
        }

        if((l1 + l2) % 2 == 1) 
            return (double) mid1;
        else
            return (mid1 + mid2) / 2.0;
    }
};
