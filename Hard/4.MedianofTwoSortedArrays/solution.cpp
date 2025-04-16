class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            double med;
            int n =  sizeof(nums1)/sizeof(nums1[0]);   
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    
            int a = nums1.size()/2;
    
            sort(nums1.begin(), nums1.end());
            if(nums1.size()%2 != 0){
                med = nums1[(a)];
            }else{
                float b=nums1[a-1]+nums1[a];
                med = b/2;
            }
            return med;
        }
    };