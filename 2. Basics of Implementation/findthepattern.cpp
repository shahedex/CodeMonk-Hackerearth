#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << *max_element(arr,arr+n) + *min_element(arr,arr+n) << endl;
}