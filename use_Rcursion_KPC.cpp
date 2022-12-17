#include "bits/stdc++.h"
using namespace std;
string codes[] ={"+_", "?!", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
            //     0     1     2      3      4      5      6       7      8       9
vector <string> getKPC(string num){
    if(num.size()==0)
    {
        vector <string> baser;
        baser.push_back(" ");
        return baser;
    }
    char first = num[0];
    string charch = num.substr(1);
    string codeit = codes[first-'0'];
    vector <string> res = getKPC(charch);
    vector <string> mres; 
    
    for(int i=0;i<codeit.size();i++)
    {
        char chcode=codeit[i];
        for(string str:res)
        {
            mres.push_back(chcode + str);
        }
    }
    return mres;
}
int main()
{
    string num;
    cin>>num;
    vector <string> word = getKPC(num);
    for(int i=0;i<word.size();i++)
    {
        cout<<word[i];
    }
}