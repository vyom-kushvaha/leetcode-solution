class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum = 0;

        // 1st traversal: total sum
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int lsum = 0;
        int rsum = sum;

        // 2nd traversal
        for (int i = 0; i < nums.size(); i++) {

            // Current element ko right sum se hatao
            rsum -= nums[i];

            // Pivot check
            if (lsum == rsum) {
                return i;
            }

            // Current element ko left sum me add karo
            lsum += nums[i];
        }

        return -1;
    }
};