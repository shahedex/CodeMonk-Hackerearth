#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
int main()
{
    int n,count=0;
    map<char,int> word;
    string s = "hackerearth";
    string in;
    for(int i=0;i<s.length();i++) word.insert(pair<char,int> (s[i],0));
    cin >> n >> in;
    for(int i=0;i<in.length();i++)
    {
        if(word.find(in[i]) != word.end()) word[in[i]]++;
    }
    while(word['h']>0 && word['a']>0 && word['c']>0 && word['k']>0 && word['e']>0 && word['r']>0 && word['t']>0)
    {
        word['h'] -= 2;
        word['a'] -= 2;
        word['c'] -= 1;
        word['k'] -= 1;
        word['e'] -= 2;
        word['r'] -= 2;
        word['t'] -= 1;
        if(word['h']<0 || word['a']<0 || word['c']<0 || word['k']<0 || word['e']<0 || word['r']<0 || word['t']<0) break;
        else count++;
    }
    // map<char,int> :: iterator it;
    // for(it=word.begin();it!=word.end();it++)
    // {
    //     //if(it->second < lowest) lowest = it->second;
    //     cout << it->first << "  " << it->second << '\n';
    // }
    cout << count << '\n';
}