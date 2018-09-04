#include<iostream>
using namespace std;
int main()
{
    long long int n,x,y,num;
    cin >> n >> x >> y;
    long long int arr[n];
    bool no = false;
    for(long long int i=0;i<n;i++)
    {
        cin >> num;
        if(!(num>=x && num<=y)) no = true;
    }
    if(no==false) cout << "YES\n";
    else cout << "NO\n";
}