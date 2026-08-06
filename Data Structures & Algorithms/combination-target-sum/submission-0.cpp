class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index, vector<int>& nums, int target, vector<int>& temp) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (target < 0)
            return;

        for (int i = index; i < nums.size(); i++) {

            temp.push_back(nums[i]);

            solve(i, nums, target - nums[i], temp);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<int> temp;

        solve(0, nums, target, temp);

        return ans;
    }
};