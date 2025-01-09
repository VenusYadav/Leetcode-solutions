class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        vector<int>prefixSum(nums.size()) ;
        unordered_map<int, int> psFreq;
        prefixSum[0] = nums[0];
        // psFreq[prefixSum[0]] = 1;
        for(int i=1 ; i<nums.size(); i++)
        {
            prefixSum[i] = prefixSum[i-1] + nums[i];
            // psFreq[prefixSum[i]]++;
        }

       
        for(int j=0; j<prefixSum.size(); j++)
        {
             if(prefixSum[j] == k)
               count++;

             int val = prefixSum[j]-k ;  
             if(psFreq.find(val) != psFreq.end())
              count += psFreq[val] ;

              psFreq[prefixSum[j]]++; 
        }

        return count;
    }
};