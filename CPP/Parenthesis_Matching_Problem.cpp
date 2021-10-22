#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n = s.size();

    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                return ans;
            }
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                return ans;
            }
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    string exp = "[3*{4+(5*2)-6}]";
    if (isValid(exp))
    {
        cout << "Parenthesis Matched" << endl;
    }
    else
    {
        cout << "Parenthesis Unmatched" << endl;
    }

    return 0;
}