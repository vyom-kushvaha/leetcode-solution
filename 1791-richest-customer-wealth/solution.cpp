class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i=0;
        int j=0;
        int sum =0, maxcount=0;
        for(i=0; i<accounts.size(); i++)
        {
            for(j=0; j<accounts[i].size(); j++)
        {
            sum+=accounts[i][j];
        }
        maxcount= max(sum, maxcount);
        sum = 0;
        }
        return maxcount;
    }
};
