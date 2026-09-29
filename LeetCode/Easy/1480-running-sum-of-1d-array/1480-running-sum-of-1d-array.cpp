class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i, sum = 0;

        for (i = 0; i < nums.size(); i++) {
            nums[i] += sum;
            sum = nums[i];
        }

        return nums;
    }
};