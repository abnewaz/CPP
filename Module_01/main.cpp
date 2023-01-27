#include<iostream>
using namespace std;
int main()
{
    int x, y;
    //cin >> x;       // take input of single variable
    cin >> x >> y;      // multiple variable inout
    //cout << x;      // show output
    //string
    cout << x << " " << y << "\n";

    string s;
    cin >> s;
    cout << s << "\n";

    string s1 = "SubHanALLAH ";
    string s2 = "AlHamdulillah ";
    s1 = s1 + s2;
    cout << s1 << "\n"; 
    return 0;
}