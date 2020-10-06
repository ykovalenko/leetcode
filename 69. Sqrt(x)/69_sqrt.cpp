class Solution {
public:
    int mySqrt(int target) {
        if (-1 == target)
            return -1;
            
        int L(0);
        int R(target);
        int answer(0);
        int mid;
        long long midx2;
        while (L <= R)
        {
            mid = L + (R-L) / 2;
            midx2 = (long long)mid*mid;
            if (target == midx2)
                return mid;
            if (midx2 > target)
            {
                R = mid-1;
            }
            else
            {
                L = mid+1;
                answer = mid;
            }
        }
        return answer;
    }
};