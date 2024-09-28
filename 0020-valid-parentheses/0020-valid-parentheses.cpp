class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.length();
        if(size %2 != 0)  return false;
        else {
         for( int i=0 ; i<size; i++)
         {
           if(s[i] == '(' || s[i] == '{' || s[i] == '[')
           {
              st.push(s[i]);
           }
           else
           {
             if (st.empty()) {
                return false;  // No matching opening bracket
               }

            if((st.top() == '(' && s[i] == ')') || 
             (st.top() == '{' && s[i] == '}') ||
             (st.top() == '[' && s[i] == ']') )
             {
                st.pop();
             }
            else return false; 
            
            }
         }
        }

        if(st.empty()) return true;
        else return false ;

    }
};