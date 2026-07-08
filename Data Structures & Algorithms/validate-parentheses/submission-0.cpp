class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else {
            if(st.size() == 0)
            {
                return false; // nothing to match
            }
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '['))
            {
                st.pop(); // matched
            }
            else
            {
               return false; // mismatch
            }
        }
        }
        return st.size() == 0;
    }
};
