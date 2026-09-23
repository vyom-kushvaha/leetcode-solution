class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        
        for (int i = 0; i < nums.size(); ++i) {
            // Get the index this value maps to (using absolute value because it might be flipped negative)
            int targetIndex = abs(nums[i]) - 1;
            
            // If the value at targetIndex is negative, it's a duplicate
            if (nums[targetIndex] < 0) {
                duplicates.push_back(abs(nums[i]));
            } else {
                // Otherwise, mark it as visited by negating it
                nums[targetIndex] = -nums[targetIndex];
            }
        }
        
        return duplicates;
    }
};
