#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<iterator>

#define e endl

using namespace std;
int main()
{
    long long int n,largest= -100000,lindex=0;
    cin >> n;
    long long int arr[n];
    map<long long int,long long int> nums;
    for(long long int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(nums.find(arr[i]) == nums.end()) nums.insert(pair<long long int,long long int>(arr[i],1));
        else nums[arr[i]]++;
    }
    map<long long int,long long int> :: iterator it;
    for(it=nums.begin();it!=nums.end();it++)
    {
        cout << it->first << "  " << it->second << e;
        if(largest<it->second)
        {
            largest = it->second;
            lindex = it->first;
        }
    }
    cout << lindex << e;
}