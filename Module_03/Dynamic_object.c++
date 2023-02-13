#include<bits/stdc++.h>
using namespace std;   
class Student{      // class diclaration;
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age; 
    }
    void print_info()   //function inside a class
    {
        cout << name << "\n" << std_id << "\n" << age << "\n" 
        << fathers_name << "\n" << mothers_name << "\n";
    }
};
int main()
{
    cout << "DYNAMIC_OBJECT:: \n";
    Student *s = new Student("Zaman", 10, 20);
    //s->print_info();    //used "->" sign for pointer
    (*s).print_info(); // == "s->print_info();"
    return 0;
}
