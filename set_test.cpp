#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "The quick brown fox jumps over the lazy dog";
    set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
            s.insert(tolower(str[i]));
    }
    if (s.size() == 26)
        cout << "is Panagram ";
    else
        "Not Panagram";
}