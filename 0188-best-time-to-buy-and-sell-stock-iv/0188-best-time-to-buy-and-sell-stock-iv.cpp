class Solution {
public:
    int helper(int k, int i, int buy,int count, vector<vector<vector<int>>>&dpvec, vector<int>&prices)
    {
        int action = 0, notaction = 0;
        if(i>=prices.size())
          return 0;
        if(count==k)
          return 0;

        if(dpvec[i][buy][count] != -1)
          return dpvec[i][buy][count];  

        if(buy) 
           action = helper(k, i+1, 0, count, dpvec, prices) - prices[i];
        else
           action = helper(k, i+1, 1, count+1, dpvec, prices) + prices[i];

        notaction = helper(k, i+1, buy, count, dpvec, prices);

        dpvec[i][buy][count] = max(action, notaction);   
        return dpvec[i][buy][count];
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dpvec(prices.size(), vector<vector<int>>(2, vector<int>(k,-1)));
        int answer = helper(k,0, 1,0, dpvec, prices);
        return answer;
        
    }
};