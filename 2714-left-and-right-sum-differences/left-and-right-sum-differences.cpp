class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int lsum = 0, rsum = 0;
        vector<int> ans(n);
        for (int i = 1; i < n; i++)
            rsum += nums[i];
        ans[0] = abs(rsum);
        for (int i = 1; i < n; i++) {
            lsum += nums[i - 1];
            rsum -= nums[i];
            ans[i] = abs(rsum - lsum);
        }
        return ans;
    }
};