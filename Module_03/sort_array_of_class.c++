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
        cout << name << " " << std_id << " " << age << " "
        << fathers_name << " " << mothers_name << "\n";
    }
    /* bool operator < (Student s)
    {
        return std_id < s.std_id;
    } */
};
//need it to use sort function::
bool comp(Student a, Student b) 
{
    //when a<b
    /*if(a.std_id == b.std_id)
        return a.age < b.age; */
    return a.std_id < b.std_id;
}
int main()
{
    cout << "Sort ARRAY OF CLASS:: \n";
    vector <Student> a;
    for(int i=0; i<10; i++)
    {
        a.push_back(Student("A", 20-i, 20));
    }
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }
    cout << "After sorting:: \n";    
    //sort(a.begin(),a.end());
    sort(a.begin(),a.end(),comp);
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }
    return 0;



