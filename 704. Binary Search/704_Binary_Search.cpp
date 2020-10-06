class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int L = 0;
        int R = nums.size()-1;
        while (L <= R)
        {
            const int mid = L + (R - L) / 2;
            if (target == nums[mid])
                return mid;
            if (nums[mid] < target)
            {
                L = mid + 1;
            }
            else
            {
                R = mid - 1;
            }
        }
        return -1;
    }
};