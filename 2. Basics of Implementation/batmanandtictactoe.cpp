#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    bool res = false;
    cin >> n;
    while(n--)
    {
        char arr[4][4];
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                cin >> arr[i][j];
        
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(j+2<4)
                {
                    string s1 = string()+arr[i][j]+arr[i][j+1]+arr[i][j+2];
                    int xcount = count(s1.begin(),s1.end(),'x');
                    int dotcount = count(s1.begin(),s1.end(),'.');
                    if(xcount==2 && dotcount==1)
                    {
                        res = true;
                        break;
                    }
                }
                if(i+2<4)
                {
                    string s2 = string()+arr[i][j]+arr[i+1][j]+arr[i+2][j];
                    int xcount = count(s2.begin(),s2.end(),'x');
                    int dotcount = count(s2.begin(),s2.end(),'.');
                    if(xcount==2 && dotcount==1)
                    {
                        res = true;
                        break;
                    }
                }
                if(i+2<4 && j+2<4)
                {
                    string s3 = string()+arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2];
                    int xcount = count(s3.begin(),s3.end(),'x');
                    int dotcount = count(s3.begin(),s3.end(),'.');
                    if(xcount==2 && dotcount==1)
                    {
                        res = true;
                        break;
                    }
                }
                if(j>1 && i+2<4)
                {
                    string s4 = string()+arr[i][j]+arr[i+1][j-1]+arr[i+2][j-2];
                    int xcount = count(s4.begin(),s4.end(),'x');
                    int dotcount = count(s4.begin(),s4.end(),'.');
                    if(xcount==2 && dotcount==1)
                    {
                        res = true;
                        break;
                    }
                }
            }
            if(res==true) break;
        }
        if(res==true) cout << "YES\n";
        else cout << "NO\n";
        res = false;
    }
}