#include<iostream>
#include<string>
using namespace std;

int main()
{
    string inputs, outputs;
    cin >> inputs;
    for(int i=inputs.size()-1;i>=0;i--)
    {
        outputs += inputs[i];
    }
    if(inputs == outputs) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}