class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();

        for (int j = 0; j < n; j += 2 * k) {
            int i = j;
            int end = min(j + k, n) - 1;

            while (i < end) {
                char temp = s[i];
                s[i] = s[end];
                s[end] = temp;

                i++;
                end--;
            }
        }

        return s;
    }
};
