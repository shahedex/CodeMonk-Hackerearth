#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int,greater<int> > nums;
    long long int x,y,i,n;
    cin >> x >> y;
    for(i=0;i<2*x;i++)
    {
        cin >> n;
        nums.insert(n);
    }
    cout << nums.size() << '\n';
    set<int,greater<int> > :: iterator it;
    for(it=nums.begin();it!=nums.end();++it) cout << *it << " ";
    cout << endl;
}