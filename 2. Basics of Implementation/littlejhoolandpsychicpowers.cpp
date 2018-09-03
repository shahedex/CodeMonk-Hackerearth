#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack<char> stk1;
    stack<char> stk2;
    int count0 = 0,count1 = 0;
    bool one=false, zero=false;
    for(int i=0;i<str.length();i++)
    {
        stk1.push(str[i]);
        stk2.push(str[i]);
    }
    while(!stk1.empty())
    {
        char ch = stk1.top();
        if(ch=='1'){
            count1++;
            stk1.pop();
        }
        else
        {
            stk1.pop();
            if(count1>=6) { one = true; break; }
            count1 = 0;
        }
        if(count1>=6) { one = true; break; }
    }
    while(!stk2.empty())
    {
        char ch = stk2.top();
        if(ch=='0'){
            count0++;
            stk2.pop();
        }
        else
        {
            stk2.pop();
            if(count0>=6) { zero = true; break; }
            count0 = 0;
        }
        if(count0>=6) { zero = true; break; }
    }
    if(one==true || zero==true) cout << "Sorry, sorry!" << endl;
    else cout << "Good luck!" << endl;
}