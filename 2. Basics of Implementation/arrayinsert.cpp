#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int x,y,f,n,q,e,sum,l;
    vector<int> arr;
    cin >> n >> q;
    while(n--)
    {
        cin >> e;
        arr.push_back(e);
    }
    while(q--)
    {  
        cin >> f >> x >> y;
        if(f==1)
        {
            arr[x] = y;
        }
        else if(f==2)
        {
            if(x>y || y>=arr.size()) cout << "-1" << '\n';
            else
            {
                sum = 0;
                for(l=x;l<=y;l++)
                {
                    sum += arr[l];
                }
                cout << sum << '\n';
            }
        }
    }
}