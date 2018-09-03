#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool flag = false;
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(arr[i]-arr[i+1]>1){
                flag = true;
                cout << "NO" << endl;
                break;
            }
        }
    }
    if(flag == false) cout << "YES" << endl;
}