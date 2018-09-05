#include<iostream>
#include<string>
using namespace std;
#define e endl
int main()
{
    string str;
    cin >> str;
    long long int val,l=str.length(),sum=0;
    for(int i=0;i<l;i++)
    {
        sum += str[i]-'a'+1;
    }
    cout << sum << e;
}