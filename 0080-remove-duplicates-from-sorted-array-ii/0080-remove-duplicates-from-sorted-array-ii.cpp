class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int pos = 0;
         int res=0;
         int j=1;
         int i=0;
         int count = 1;
        if(nums.size()==1)
          return 1;
        while(i<nums.size() && j<nums.size())
        {
           if(nums[i]==nums[j])
           {
                count++;
                if(count>2)
                   j++;
                else
                {
                    res++;
                    pos++;
                    nums[pos] = nums[j];
                    i++;
                    j++;
                }
           }
           else{
              count = 1;
              res++;
              pos++;
              nums[pos]= nums[j];
              i=j;
              j=j+1;
           }

        }
        return res+1;
    }
};