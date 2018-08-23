#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int answer=1;
    int arraysize, i, demo;
    cin >> arraysize;
    //int arr[arraysize];
    for(i=0;i<arraysize;i++)
    {
        cin >> demo;
        answer = (answer*demo)%((int)pow(10,9)+7);
    }
    cout << answer << '\n';
}