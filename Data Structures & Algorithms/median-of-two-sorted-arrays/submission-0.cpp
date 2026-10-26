class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int n1=nums1.size();
        int n2=nums2.size();
        vector<int> merge(n1+n2);
        int i=0,j=0,k=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<=nums2[j])
            {
                merge[k++]=nums1[i];
                i++;
            }
            else
            {
                merge[k++]=nums2[j];
                j++;
            }
        }
        while(i<n1)
        {
            merge[k++]=nums1[i];
            i++;
        }
        while(j<n2)
        {
            merge[k++]=nums2[j];
            j++;
        }
        int m=merge.size();
        if(m%2!=0)
        {
            int low=0,high=m-1;
            int mid=(low+high)/2;
            return merge[mid];
        }
        else
        {
            return (merge[(m/2)-1]+ merge[m/2])/2.0;
        }
    }
};
