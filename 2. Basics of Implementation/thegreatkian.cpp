#include<iostream>
using namespace std;
int main()
{
    long long int n,x,sum1=0,sum2=0,sum3=0;
    cin >> n;
    long long int array[n];
    for(int i=0;i<n;i++)
    {
        cin >> x;
        array[i]=x;
    }
    for(int i=0;i<n;i+=3) sum1+=array[i];
    for(int i=1;i<n;i+=3) sum2+=array[i];
    for(int i=2;i<n;i+=3) sum3+=array[i];
    
    cout << sum1 << " " << sum2 << " " << sum3 << endl;
}