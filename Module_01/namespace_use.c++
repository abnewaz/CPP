#include<bits/stdc++.h>
using namespace std;  //== "namespace std{cout}", cout will...
                    //...not work without this line; 
int x = 5, y, z;    //global variable;
int func(int a, int b)  //function;
{
    return a+b;
}
/* namespace Info{
    int x = 10;  //this variable is named as global variable;
} */
namespace Info{
    int x= 10, y= 5;
    int func(int a, int b)
    {
        return a*b;
    }
}
//using namespace Info;
int main()
{
    //std :: cout << x << "\n"; // if don't use "using namespace std";
    //cout << x << "\n";  //print global variable;
    //cout << Info :: x << "\n"; //accessing variable named == global variable;
    int a = 4, b = 5;
    int x = func(a,b);
    cout << x << "\n";
    int y = Info :: func(a,b);
    cout << y << "\n";
    return 0;
}