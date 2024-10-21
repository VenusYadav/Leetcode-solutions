class Solution {
public:

    int helper(int i, int buy, int count,  vector<vector<vector<int>>> &dpvec, vector<int>&prices)
    {
         int tk=0, nt = 0; 
        if(i>=prices.size())
          return 0; 
        if(count == 2)
          return 0;

        if(dpvec[i][buy][count] != -1) 
          return dpvec[i][buy][count];

        if(buy )
        {
            tk = helper(i+1, 0, count, dpvec, prices)-prices[i];
        }
        else
           tk = helper(i+1, 1, count+1, dpvec, prices)+prices[i];
         
        nt = helper(i+1, buy, count, dpvec, prices);

        dpvec[i][buy][count]= max(tk, nt);
        return dpvec[i][buy][count] ;
            
    }
    int maxProfit(vector<int>& prices) {
       vector<vector<vector<int>>>dpvec(prices.size(), vector<vector<int>>(2, vector<int>(2,-1)));
       int ans = helper(0, 1,0, dpvec, prices); 
       return ans;
    }
};