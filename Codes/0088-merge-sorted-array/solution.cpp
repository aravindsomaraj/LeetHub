class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=m+n-1;i>=0;i--)
        {
            cout << i;
            if(m>=1 && n>=1 && nums1[m-1]>nums2[n-1] || (m>=1 && n==0))
                nums1[i]=nums1[m---1];
            else
                nums1[i]=nums2[n---1];
            cout << " " << nums1[i] << endl;
        }
    }
};
