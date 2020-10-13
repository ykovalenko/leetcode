class Solution
{
public:
  Solution()
  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  }

  vector<int> searchRange(vector<int>& nums, int target)
  {
    int N = nums.size();
    int L = 0;
    int R = N - 1;
    int first = -1;
    int last = -1;
    int first_greater = -1;
    int last_greater = -1;
    // vector<int> answers(2);
    while (L <= R)
    {
      int mid = L + (R - L) / 2;
      if (nums[mid] == target)
      {
        if (last_greater == -1)
          last_greater = R;
        if (first_greater == -1)
          first_greater = mid;

        first = mid;
        last = mid;
        R = mid - 1;
      }
      else
      if (nums[mid] > target)
      {
        R = mid - 1;
        // last_greater = R;
      }
      else // nums[mid] < target
      {
        L = mid + 1;
      }
    }
    if (first == -1)
      return { -1, -1 };

    L = first_greater; // is equal == target
    R = last_greater;
    while (L <= R)
    {
      int mid = L + (R - L) / 2;
      if (nums[mid] > target)
      {
        R = mid - 1;
      }
      else
      {
        last = mid;
        L = mid + 1;
      }
    }

    return {first, last};
  }
};