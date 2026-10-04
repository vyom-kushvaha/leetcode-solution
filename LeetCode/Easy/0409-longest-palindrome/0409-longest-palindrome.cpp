class Solution {
public:
    int longestPalindrome(string s) {
        int sum = 0;
int oddFlag = 0;

int freq[128] = {0};

for (int i = 0; i < s.size(); i++) {
    freq[s[i]]++;
}

for (int i = 0; i < 128; i++) {

    if (freq[i] % 2 == 0) {
        sum += freq[i];
    }
    else {
        sum += freq[i] - 1;
        oddFlag = 1;
    }
}

return sum + oddFlag;
    }
};