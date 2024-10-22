class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int size = citations.size();
        int count =size;
        // int ans = 0;
        if(citations[0]>count)
        {
            return count;
        }
        for(int i = 0;i<size; i++)
        {
            if(citations[i]<count)
            {
                // ans = citations[i];
                count--;
            }
            else
               break;
        }
        return count;
        
    }
};