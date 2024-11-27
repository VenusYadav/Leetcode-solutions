class Solution {
public:
    queue<char>q;
    map<char, int>freq;
    char ans = '#';
    int firstUniqChar(string s) {
        for(auto ch: s)
        {
            freq[ch]++;
            
            q.push(ch);
            while(!q.empty())
            {
                if(freq[q.front()] > 1)
                   q.pop();

                else
                {
                     ans = q.front(); 
                     break;
                }   
            } 
            if(q.empty())
              ans = '#';
           
        }
        
        int index ;
        for(int i=0; i<s.length(); i++)
        {
            if(ans == s[i])
            {
                index = i;
                break;
            }
            else
              index = -1;   
        }
  
        return index ;
        
    }
};