class Solution {
public:
    string decodeMessage(string key, string message) 
    {
        map<char,char>m;
        char ch = 97;
        for(int i=0; i<key.length();i++)
        {
            if(isalpha(key[i]) && m[key[i]]==0 )
            {
                m[key[i]]=ch++;
            }
              
        }
        string str;
        for(auto it: message)
        {
            if(isalpha(it))
             str.push_back(m[it]);  
            else
             str.push_back(' '); 
        }
        return str;
    }
};