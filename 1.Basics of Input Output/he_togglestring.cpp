#include<iostream>
#include<string>
#include<locale>
using namespace std;

int main()
{
    string str;
    locale loc;
    cin >> str;
    for(int i=0;i<str.size();i++)
    {
        if(isupper(str[i],loc)) str[i] = tolower(str[i],loc);
        else str[i] = toupper(str[i],loc);
    }
    cout << str << '\n';
}