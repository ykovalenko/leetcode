class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    
    int reverse(int _x)
    {
        int X(_x);
        int answer(0);
        while (X != 0)
        {
            int rest = X % 10; // 3   // 2
            X /= 10;          // 12  // 1

            if (answer > INT_MAX / 10 || (answer == INT_MAX / 10 && rest > 7))
                return 0;
            if (answer < INT_MIN / 10 || (answer == INT_MIN / 10 && rest < -8))
                return 0;

            answer = answer * 10 + rest;
        }

        return answer;
        
    }
};