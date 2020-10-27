class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int origSize = nums.size();
        for (int i=origSize-1; i>=0; i--)
        {
            if (nums[i] == val)
            {
                if (i != nums.size()-1)
                {
                    nums[i] = nums[nums.size()-1];
                    
                }
                nums.pop_back();
            }
        }
        return nums.size();
    }
};