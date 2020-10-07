class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        std::unordered_map<short, short> m;
        std::vector<int> answers;
        auto nums_len = nums.size();
        short value;
        short complementary;
        for (auto i = 0; i < nums_len; i++)
        {
            value = nums[i];
            complementary = target - value;
            auto mapiter = m.find(value);
            if (mapiter != m.end())
            {
              answers.emplace_back(mapiter->second);
              answers.emplace_back(i);
              break;
            }
            else
            {
              m[complementary] = i;
            }
        }
        return answers;
    }
};