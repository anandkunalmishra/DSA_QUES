#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isRegular(string str)
{
    ll n = str.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            st.push(str[i]);
        else
        {
            if (st.empty())
                return false;
            else
            {
                char c = st.top();
                st.pop();
                if (c == '(')
                    continue;
                else
                    return false;
            }
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}
bool isPalindrome(string str)
{
    ll n = str.size();
    deque<char> q;
    for (ll i = 0; i < n; i++)
    {
        q.push_back(str[i]);
    }
    for (ll i = 0; i <= n / 2; i++)
    {
        char c = str.front();
        char d = str.back();
        q.pop_front();
        q.pop_back();
        if (c != d)
            return false;
        else
            continue;
    }
    if (q.empty())
        return true;
    else
        return false;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (isRegular(str))
            cout << "1 ";
        else
            cout << "0 ";
        if (isPalindrome(str))
            cout << "1 ";
        else
            cout << "0 ";

        cout << endl;
    }

    return 0;
}