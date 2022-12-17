#include <bits/stdc++.h>
using namespace std;
bool isValid(string str)
{
    stack<int> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            st.push(str[i]);
        }
        if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (st.empty())
                return false;
            char temp = st.top();
            st.pop();
            if (((temp == '(') && (str[i] == ')')) || ((temp == '{') && (str[i] == '}')) || ((temp == '[') && (str[i] == ']')))
            {
                continue;
            }
            else
                return false;
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    cin >> str;
    if (isValid(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}