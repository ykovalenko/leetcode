class Solution {
public:
    bool isX(const vector<int>& nums, const int X)
    {
        int counter = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
          if (nums[i] >= X)
            counter++;
        }
        return (counter > 0 && counter == X);
    }
    
    int specialArray(vector<int>& nums) {
        for (size_t i = nums.size(); i>0; i--)
        {
          if (isX(nums, i))
            return i;
        }
        return -1;
    }
};