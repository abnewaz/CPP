#include<bits/stdc++.h>
using namespace std;
/* 
vector:
vector <int> a;
insert: a.push_back();
a.insert(a.begin() + 0, 100);
a.erase(a.begin() + 5);
a.pop_back();
a.resize(10);
 */
int main()
{
    vector <int> a;
    for (int i = 0; i < 10; i++)
    {
        //cout << "Before push " << a.size() << "\n";
        a.push_back(i);
        //cout << "After push " << a.size() << "\n";
    }
    cout << "Insert 100 at 0th position and size did not changed::\n";
    //To insert in any position and size did not changed:
    //                 (Position) (Value)
    a.insert(a.begin() +   0,      100);
    for (int i = 0; i < 10; i++)  //value would be inserted atbegning
    {
        cout << a[i] << "\n";
    }

    cout << "Insert 100 at 1st position::\n";
    //To insert in any position:
    //                 (Position) (Value)
    a.insert(a.begin() +   3,      100);
    //for (int i = 0; i < 10; i++) //Array size would be same but new value...
                                   //...will insert at the begining position...
                                    //...but last value will be deleted
    for (int i = 0; i < a.size(); i++)  //value would be inserted at begning
    {
        cout << a[i] << "\n";
    }
    a.erase(a.begin()+5);    // to delete a degit
    cout << "After deletion the value of 5th position:\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\n"; 
    }
    a.pop_back();    // to delete last degit
    cout << "After deletion of last degit:\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\n"; 
    }

cout << "resize vector and reduced size::\n";
    vector<int>s = {1,2,3,4,5};
    s.resize(3);   // take 10 array and make all of them 0;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << "\n"; 
    }
    /*
    size = 0;
    [0,0,0,0,0,0,0,0,0,0]
    size =10;

    size =5;
    a = [1,2,3,4,5]
    a.resize(3);
    a = [1,2,3]
    */

    return 0;
}