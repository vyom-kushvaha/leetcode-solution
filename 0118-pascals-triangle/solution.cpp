class Solution {
public:

    int nCr(int n, int r) {
        if (r > n || r < 0)
            return 0;

        if (r == 0 || r == n)
            return 1;

        if (r > n - r)
            r = n - r;

        int result = 1;

        for (int i = 1; i <= r; ++i) {
            result *= (n - r + i);
            result /= i;
        }

        return result;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {

            vector<int> row;

            for (int j = 0; j <= i; j++) {
                row.push_back(nCr(i, j));
            }

            ans.push_back(row);
        }

        return ans;
    }
};
