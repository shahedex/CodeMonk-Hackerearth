#include<iostream>
using namespace std;

int main()
{
    int test, num, piv, start, range,opposite;
    string type;
    cin >> test;
    for(int i = 0; i<test;i++)
    {
        cin >> num;
        piv = num/12;
        if(num%12 != 0)
        {
            start = piv * 12 + 1;
        }
        else
        {
            start = (piv-1) *12 + 1;
        }
        //cout << "start: " << start << '\n';
        range = start+11;
        //cout << range << '\n';
        if(start+6 > num)
        {
            if(num == start || num == start+5)
            {
                type = "WS ";
                if(num == start)
                {
                    opposite = range;
                }
                else
                {
                    opposite = num+1;
                }
            }
            else if(num == start+1 || num == start+4)
            {
                type = "MS ";
                if(num == start+1)
                {
                    opposite = num+9;
                }
                else
                {
                    opposite = num+3;
                }
            }
            else
            {
                type = "AS ";
                if(num == start+2)
                {
                    opposite = num+7;
                }
                else
                {
                    opposite = num+5;
                }
            }
            cout << opposite << ' ' << type << '\n';   
        }
        else
        {
            if(num == start+6 || num == range)
            {
                
                type = "WS ";
                if(num == start+6)
                {
                    opposite = start+5;
                }
                else
                {
                    opposite = start;
                }
            }
            else if(num == start+7 || num == start+10)
            {
                type = "MS ";
                if(num == start+7)
                {
                    opposite = start+4;
                }
                else
                {
                    opposite = start+1;
                }
            }
            else
            {
                type = "AS ";
                if(num == start+8)
                {
                    opposite = start+3;   
                }
                else
                {
                    opposite = start+2;
                }
            }
            cout << opposite << ' ' << type << '\n';
        }
    }
    return 0;
}