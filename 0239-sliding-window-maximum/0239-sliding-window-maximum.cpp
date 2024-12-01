class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

      vector<int> v ;
      deque<int>dq;
     
      for(int i=0; i<k; i++)
      {
         int element = nums[i];
         while(!dq.empty() && element > nums[dq.back()])
         {
            dq.pop_back();
         }
         dq.push_back(i);
      }
      
      for(int i=k; i<nums.size(); i++)
      {
         v.push_back(nums[dq.front()]);

          // removal
          ///out of range
          if(i-dq.front()>=k)
            dq.pop_front();

          /// chotte element pop kardo
          int element = nums[i];
          while(!dq.empty() && element > nums[dq.back()])
         {
            dq.pop_back();
         }


          // addition
           dq.push_back(i);
         
      }
      // last window ka answer store karo
      v.push_back(nums[dq.front()]);

      return v;
  
    }
};