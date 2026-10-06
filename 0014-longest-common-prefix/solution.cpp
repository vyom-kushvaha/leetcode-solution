class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        int minLen = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].size());
        }

        for (int col = 0; col < minLen; col++) {

            char current = strs[0][col];

            for (int row = 1; row < strs.size(); row++) {
                if (strs[row][col] != current) {
                    return result;
                }
            }

            result.push_back(current);
        }

        return result;
    }
};
