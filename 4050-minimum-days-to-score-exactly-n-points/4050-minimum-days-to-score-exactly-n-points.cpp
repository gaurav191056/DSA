class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n + 1, 1000000000);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (long long k = 1; k * (k + 1) / 2 <= i; k++) {
                long long points = k * (k + 1) / 2;

                dp[i] = min(dp[i],dp[i - points] + (int)k + (i - points > 0));
                }
            }
            for (long long k = 1; k * (k + 1) / 2 <= n; k++) {
                if (k * (k + 1) / 2 == n) {
                    dp[n] = min(dp[n], (int)k);
                }
            }
        return dp[n];
    }
};