class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;

        long long value = 1;
        result.push_back(value);   // nC0

        for (int r = 1; r <= rowIndex; r++) {
            value = value * (rowIndex - r + 1) / r;
            result.push_back(value);
        }

        return result;
    }
};