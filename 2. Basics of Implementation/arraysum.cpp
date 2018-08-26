#include<iostream>
using namespace std;
int main()
{
    long long int x,sum=0;
    cin >> x;
    long long int arr[x];
    while(x--)
    {
        cin >> arr[x];
        sum += arr[x];
    }
    cout << sum << '\n';
}