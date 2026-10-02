class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum =0;
       int maxAltitude=0;
       for (int x : gain) {
    sum += x;
    maxAltitude = max(maxAltitude, sum);
}
return maxAltitude;
    }
};
