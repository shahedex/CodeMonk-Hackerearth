#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int> digit;
    for(int i=0;i<10;i++)
    {
        digit.insert(pair<string,int> (to_string(i),0));
    }
    string s;
    cin >> s;
    // for(int i=0;i<s.length();i++)
    // {
    //     if(digit.find(s[i]) != digit.end()) digit[s[i]]++;
    //     else digit.insert(pair<int,int> (s[i],1));
    // }
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0') digit["0"]++;
        else if(s[i] == '1') digit["1"]++;
        else if(s[i] == '2') digit["2"]++;
        else if(s[i] == '3') digit["3"]++;
        else if(s[i] == '4') digit["4"]++;
        else if(s[i] == '5') digit["5"]++;
        else if(s[i] == '6') digit["6"]++;
        else if(s[i] == '7') digit["7"]++;
        else if(s[i] == '8') digit["8"]++;
        else if(s[i] == '9') digit["9"]++;
        
    }
    for(map<string,int>::iterator it=digit.begin();it!=digit.end();it++)
    {
        cout << it->first << " " << it->second << '\n';
    }
}