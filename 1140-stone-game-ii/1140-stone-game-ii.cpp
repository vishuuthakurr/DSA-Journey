class Solution {
public:

    int solve(vector<int>& piles, int i, int M, vector<vector<int>>& dp)
    {
        if(i >= piles.size())
        {
            return 0;
        }

        if(dp[i][M] != -1)
        {
            return dp[i][M];
        }

        int total = 0;

        // i se lekar end tak total stones
        for(int j = i; j < piles.size(); j++)
        {
            total += piles[j];
        }

        int best = 0;
        int sum = 0;

        // 1 se 2*M piles
        for(int X = 1; X <= 2*M; X++)
        {
            if(i + X > piles.size())
            {
                break;
            }

            sum += piles[i + X - 1];

            int newM = max(M, X);

            int opponent = solve(piles, i + X, newM, dp);

            int current = total - opponent;

            best = max(best, current);
        }

        dp[i][M] = best;

        return best;
    }

    int stoneGameII(vector<int>& piles)
    {
        int n = piles.size();

        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return solve(piles, 0, 1, dp);
    }
};