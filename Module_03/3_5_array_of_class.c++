#include<bits/stdc++.h>
using namespace std;   
class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    Student()   //empty constructor
    {

    }
    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age; 
    }
    void print_info()
    {
        cout << name << " " << std_id << " " << age << "\n";
    }
};
int main()
{
    cout << "ARRAY OF CLASS:: \n";
    Student s[10];  //empty constructor must use for array;
    for(int i=0; i<10; i++)
    {
        s[i] = Student("A", i, 20);
    }
    for(int i=0; i<10; i++)
    {
        s[i].print_info();
    }
    return 0;
}