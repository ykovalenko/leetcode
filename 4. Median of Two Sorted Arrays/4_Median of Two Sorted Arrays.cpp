class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        // 1. merge
        vector<int> answers;
        int i = 0;
        int j = 0;
        int M = nums1.size();
        int N = nums2.size();
        while (i < M && j < N)
        {
            if (nums1[i] < nums2[j])
            {
                answers.emplace_back(nums1[i++]);
            }
            else
            {
                answers.emplace_back(nums2[j++]);
            }
        }

        while (i < M)
        {
            answers.emplace_back(nums1[i++]);
        }

        while (j < N)
        {
            answers.emplace_back(nums2[j++]);
        }
        
        // 2. find median
        if (0 != answers.size() % 2)
            return answers[answers.size() / 2];

        int mid = answers.size() / 2;
        return (double)(answers[mid-1])/2 + (double)(answers[mid])/2;
    }
};