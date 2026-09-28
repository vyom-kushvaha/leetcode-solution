class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        int j = 0;
        int k = n;

        for (int i = 0; i < n; i++) {
            result.push_back(nums[j]);
            result.push_back(nums[k]);

            j++;
            k++;
        }

        return result;
    }
};