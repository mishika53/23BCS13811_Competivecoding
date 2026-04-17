#include <bits/stdc++.h>
using namespace std;

int maxSumAfterPartitioning(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int maxi = 0;
        
        // Try all subarrays ending at i
        for (int len = 1; len <= k && i - len >= 0; len++) {
            maxi = max(maxi, arr[i - len]);
            dp[i] = max(dp[i], dp[i - len] + maxi * len);
        }
    }

    return dp[n];
}

int main() {
    vector<int> arr = {1,15,7,9,2,5,10};
    int k = 3;
    cout << maxSumAfterPartitioning(arr, k); // Output: 84
}