/* #include <iostream>
    // use this header file to use ofstream and ifstream:
#include <fstream>  
 */
// to use all the header file together without remembering any specific one when required:
// replace all the header with (only one header)...
 #include <bits/stdc++.h>     //(pros:this header will include all the header of c++
                                // cons: includes all things. so needs more time to compile)
using namespace std;
int main()
{
    //  ofstream = Output file stream
    //  ifstream = Input file stream
    // show output in a txt file and take input from code: (code -> txt)
    ofstream of;
    of.open("1.txt");
    of << "Bismillah ...\n";

    ofstream of2;    
    of2.open("2.txt");    
    of2 << "AlHamdulillah ...\n";
    
    // take input from txt file and show it on commend prompt: (txt -> cmd)
    ifstream ifs;
    ifs.open("0.txt");
    int w, x;
    double y, z;
    ifs >> w >> x >> y >> z; // get input from txt file
    cout << w << " " << x << " " << y << " " << z << "\n";

    // if we open any file, it should close later:
    ifs.close(); 
    of.close();
    of2.close();

    double p = 3.4444444;
    cout << setprecision(2) << fixed << p;  // to print only two digits after decimal 
    return 0;
}