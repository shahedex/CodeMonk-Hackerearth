#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    long long int n,largest=-1000000,num;
    bool first = false;
    stack<int> st;
    stack<char>op;
    cin >> n;
    while(n--)
    {
        int sum = 0;
        string str;
        cin >> str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='+' || str[i]=='-') op.push(str[i]);
            else st.push(str[i]-48);
        }
        while(!st.empty())
        {
            char opr;
            if(!op.empty()) { opr = op.top(); op.pop();}
            else opr = '+';
            int n1;
            if(opr == '+') n1 = st.top();
            else n1 = -1*st.top();
            st.pop();
            sum += n1;
        }
        if(sum>largest)
        {
            largest = sum;
        }
    }
    cout << largest << endl;
}