class Solution {
public:
    int firstUniqChar(string s) {

        map<int, int> freq;
        queue<int>q;
        int ans;

        for(int i=0;i<s.length();i++)
        {
            freq[s[i] -'a']++ ;

            q.push(i);
            while(!q.empty())
            {
                if(freq[s[q.front()]-'a'] > 1)
                  q.pop();

                else
                {
                    ans = q.front(); 
                    break; 
                }
                  
            }

        }
        if(q.empty())
           return -1;
        else   
           return ans;
        
    }
};