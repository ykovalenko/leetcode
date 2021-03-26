class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        vector<std::string> v(n);
        for (int i = 1; i <= n; i++)
        {
            if (0 == i % 15)
                v[i-1] = ("FizzBuzz");
            else
            if (0 == i % 3)
                v[i-1] = ("Fizz");
            else
            if (0 == i % 5)
                v[i-1] = ("Buzz");
            else
                v[i-1] = (std::to_string(i));
        }
        return v;
    }
};