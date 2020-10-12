class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n)
    {
        // 1 2 3 0 0 0
        // 2 5 6

        // 5 6 0 0 0 0
        // 1 2 3 4 0 0

        int last_A = m - 1; // 3-1=2
        int last_B = n - 1; // 3-1=2
        int last_new = m + n - 1;
        while (last_A >= 0 && last_B >= 0)
        {
          if (A[last_A] > B[last_B])
            A[last_new--] = A[last_A--];
          else
            A[last_new--] = B[last_B--];
        }

        while (last_B >=0)
          A[last_new--] = B[last_B--];

        // 1. add all to v1
        /* int nums1_count = m;
        for (int i = 0; i < n; i++)
        {
          nums1[m + i] = nums2[i];
        }

        // 2. sort v1
        std::sort(nums1.begin(), nums1.end());
        */
    }
};