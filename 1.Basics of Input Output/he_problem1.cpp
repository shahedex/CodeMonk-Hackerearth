#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,i,n,sum;
    string num;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> num;
        while(num.length() != 1)
        {
            sum = 0;
            for(x=0;x<num.length();x++)
            {
                sum += (int)num[x] - '0';
            }
            num = to_string(sum);
        }
        cout << num << '\n';
    }
}