class Solution {
public:

    void mapping(string &s)
    {
        map<char,char>m;
        char ch =97;
        for(auto it: s)
        {
            if(m[it]==0)
                m[it]=ch++;         
        }
        
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            s[i]= m[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> ans;
        mapping(pattern);
        for(int i=0;i<words.size();i++)
        {
            string tempstr = words[i];
            string s = words[i];
            mapping(s);   
        
            if(s==pattern)
            {
            ans.push_back(tempstr);
            }
        }
        return ans;
    }
};