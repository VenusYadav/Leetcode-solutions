class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<char, int>mw2;
        unordered_map<char, int>mw1;
        vector<string> res;        

        for(auto chh : words2)
        {
            unordered_map<char, int> temp;
            for (char c : chh) {
                temp[c]++;
            }
            for (auto& [ch, count] : temp) {
                mw2[ch] = max(mw2[ch], count);  
              }
        }

        for(auto ch: words1)
        {
            mw1.clear(); 
            for(int i=0; i<ch.size(); i++)
            {
                mw1[ch[i]]++;
            }
            bool valid=true;
            for(auto ch2: mw2)
            {
                if(ch2.second > mw1[ch2.first])
                {
                        valid=false;
                        break;
                }   

            }
            if(valid)
                  res.push_back(ch);
    
        }

      return res;

    }
};