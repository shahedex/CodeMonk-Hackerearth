// #include<iostream>
// #include<string>
// #include<algorithm>
// // #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int input,deletable;
//     string string1, string2, string_intersection;
//     cin >> input;
//     for(int i=0;i<input;i++)
//     {
//         cin >> string1 >> string2;

//         std::sort(string1.begin(), string2.end());
//         std::sort(string2.begin(), string2.end());
        
//         set_intersection(string1.begin(), string1.end(), string2.begin(), string2.end(), back_inserter(string_intersection));
//         cout << string_intersection;
//         deletable = (string1.size()+string2.size()) - string_intersection.size()*2;
//         cout << deletable << '\n';
//     }
// }

#include <iostream>
 #include <string>
#include <algorithm>
using namespace std;
int main()
{
    int deletable, in;
    cin >> in;
    for(int i=0;i<in;i++)
    {
    string string1;
    string string2;
    cin >> string1;
    cin >> string2;
    string string_intersection;
 
    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());
 
 
    set_intersection(string1.begin(), string1.end(), string2.begin(), string2.end(), back_inserter(string_intersection));
    
    deletable = (string1.size()+string2.size()) - string_intersection.size()*2;
        cout << deletable << '\n';
    
    }
}