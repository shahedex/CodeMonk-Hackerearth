#include<iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        for(int i=1;i<=size;i++)
        {
            for(int k=size;k>i;k--) cout << " ";
            for(int j=1;j<i*2;j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}