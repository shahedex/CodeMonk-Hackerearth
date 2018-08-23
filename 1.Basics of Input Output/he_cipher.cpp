#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int i,j,s,x,t,k;
    cin >> str;
    cin >> j;
    for(i=0;i<str.size();i++)
    {
        s = (int) str[i];
        t = s;
        k = j;
        if(!((s>47 && s<58) || (s>64 && s<91) || (s>96 && s<123))) x=s;
        else
        {
                if(t>47 && t<58)
                {
                    while(k>10)
                    {
                        k -= 10;
                    }
                    if(k+t > 57) x = ((k+t) - 57)+47;
                    else x = k+t;
                }
                else if(t>64 && t<91)
                {
                    while(k>26)
                    {
                        k -= 26;
                    }
                    if(k+t > 90) x = ((k+t) - 90) + 64;
                    else x = k+t;
                }
                else if(t>96 && t<123)
                {
                    while(k>26)
                    {
                        k -= 26;
                    }
                    if(k+t > 122) x = ((k+t) - 122) + 96;
                    else x = k+t;
                }
        }
        cout << (char)x;
    }    
}

