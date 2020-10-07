class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        bool bMoveToRight;
        int L = 0;
        int R = nums.size() - 1;
        int mid;
        while (L <= R)
        {
          mid = L + (R - L) / 2;
          if (nums[mid] == target)
            return mid;

          if (nums[mid] <= nums[R])
          {
            if (target > nums[mid] && target <= nums[R])
              bMoveToRight = true;
            else
              bMoveToRight = false;
          }
          else
          {
            if (target >= nums[L] && target < nums[mid])
              bMoveToRight = false;
            else
              bMoveToRight = true;
          }

          if (bMoveToRight)
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