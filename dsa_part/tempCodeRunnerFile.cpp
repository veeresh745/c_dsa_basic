   long result = 0;
    int n = developerSkill.size();
    vector<int> dp(n, 0);
    dp[0] = developerSkill[0];
    for (int i = 1; i < n; i++) {
        dp[i] = dp[i - 1] + developerSkill[i];
    }
    for (int i = 0; i < n; i++) {
        int j = i + k - 1;
        if (j >= n) {
            break;
        }
        result = max(result, dp[j] - dp[i]);
    }
    return result;