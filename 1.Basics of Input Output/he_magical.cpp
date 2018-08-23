// Example program
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int main()
{
  int t,i,j,l,n,num,lowest=2000,val=0,sub=0;
  string str;
  cin >> t;
  int arr[12] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113 };
  for(i=0;i<t;i++)
  {
      cin >> l;
      cin >> str;
      for(j=0;j<str.size();j++)
      {
          int charval = int(str[j]);
          for(n=0;n<12;n++)
          {
              sub = abs(charval-arr[n]);
              if(sub<lowest) {
                  lowest = sub;
                  val = arr[n];
              }
          }
          cout << char(val);
          //cout << charval << ' ' << val << '\n';
          lowest = 2000;
        }
        cout << '\n';
  }
}