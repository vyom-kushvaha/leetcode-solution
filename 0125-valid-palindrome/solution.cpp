class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

for (int i = 0; i < s.size(); i++) {
    if (isalnum(s[i])) {
        temp.push_back(tolower(s[i]));
    }
}
int j=temp.size()-1;
for (int i =0;i<temp.size()/2;i++){
    if(temp[i] != temp[j])
    return false;
    j--;
}
return true ;
    }
};
