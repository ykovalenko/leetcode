class Solution {
private:
    bool isArithmeticSequence(const vector<int>& v, const int64_t diff, const size_t idx)
    {
        if (idx+1 > v.size()-1) return false;
        if (diff == (int64_t)v[idx+1] - v[idx]) return true;
        return false;
    }
        
public:
    int numberOfArithmeticSlices(vector<int>& v) {
        if (v.size() < 3) return 0;
        
        int number_of_arithmetic_slices = 0;
        int count = 0;
        int64_t diff = v[1] - v[0];
        for (int k = 1; k < v.size(); k++)
        {
            if (isArithmeticSequence(v, diff, k))
                count++;
            else
            {
                if (count > 0)
                    number_of_arithmetic_slices += (count * (count + 1)) / 2;
                
                if (k+1 <= v.size()-1)
                    diff = v[k+1] - v[k]; 
                count = 0;
            }
        }
        return number_of_arithmetic_slices;
    }
};