class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        int len = str.length();

        for(int i=0; i<len; i++)
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                s.push(str[i]);
            }
            else
            {
                if(s.empty())
                {
                    return false;
                }
                else if(str[i] == ')' && s.top() == '(' || 
                str[i] == '}' && s.top() == '{' ||
                str[i] == ']' && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};