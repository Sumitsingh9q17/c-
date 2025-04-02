class Solution {
    public:
      vector<int> subsetSums(vector<int>& arr) {
          // code here

            vector<int> result;
            int n = arr.size();
            int sum = 0;
            for(int i = 0; i < n; i++)
            {
                sum += arr[i];
            }

            vector<int> dp(sum + 1, 0);
            dp[0] = 1;
            for(int i = 0; i < n; i++)
            {
                for(int j = sum; j >= arr[i]; j--)
                {
                    dp[j] += dp[j - arr[i]];
                }
            }
            for(int i = 0; i <= sum; i++)
            {
                if(dp[i] > 0)
                {
                    result.push_back(i);
                }
            }
            return result;
            
      }
  };