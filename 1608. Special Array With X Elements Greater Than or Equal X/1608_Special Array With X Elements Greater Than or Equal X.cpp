class Solution {
public:
    int specialArray(vector<int>& nums) {
        int minvalue = 0;
        int numValuesGreaterZero = 0;
        for (const auto& iter: nums)
        {
          if (iter > 0)
          {
            numValuesGreaterZero++;
            if (0 == minvalue || iter < minvalue)
              minvalue = iter;
          }
          else
            continue;
        }
        if (0 == minvalue || 0 == numValuesGreaterZero)
          return -1;

        if (numValuesGreaterZero <= minvalue)
          return numValuesGreaterZero;
        else
          return -1;
    }
};