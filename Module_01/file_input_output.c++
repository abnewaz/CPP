#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);       // it will create an output file with output
    string s;
    //cin >> s;     // it cannot take input after space.        :(
    getline(cin , s);       // it can take input with space.    :)
    cout << s << "\n";
    return 0;
}
