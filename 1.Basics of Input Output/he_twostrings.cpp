#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int in;
    cin >> in;
    for(int i=0;i<in;i++)
    {
        string string1, string2;
        cin >> string1 >> string2;

        sort(string1.begin(), string1.end());
        sort(string2.begin(), string2.end());

        if(string1==string2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}