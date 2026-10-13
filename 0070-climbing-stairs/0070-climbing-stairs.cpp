class Solution {
public:
    int climbStairs(int n) {
        if (n <= 5)
            return (n == 0) ? 1 : (n == 1) ? 1 : (n == 2) ? 2 : (n == 3) ? 3 : (n == 4) ? 5 : 8;

        return climbStairs(n-1) + climbStairs(n-2);
    }
};