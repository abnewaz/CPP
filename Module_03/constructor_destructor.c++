#include<bits/stdc++.h>
using namespace std;
// PRIVATE ::   
class Student{      // class diclaration;
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
// CONSTRUCTOR:: function without return type with few parameter,...
//...it will set veriable of the class:
    Student(string name, int id, int ag, string f_name, string m_name)
    {
        this->name = name;  //class member name and parameter name is same...
            //...so need to use "this->" to understand both are different;
        std_id = id;
        age = ag; 
        fathers_name = f_name;
        mothers_name = m_name;
    }
// CONSTRUCTOR_OVERLOOK:: 
Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

Student()
{

}
public:     // access type;
    void print_info()   //function inside a class
    {
        cout << name << "\n" << std_id << "\n" << age << "\n" 
        << fathers_name << "\n" << mothers_name << "\n";
    }
    void setInformation(string s, int id, int ag)
    {
        name =s;
        std_id = id;
        age = ag;
    }
    //DESTRUCTOR::
    ~Student()
    {
        cout << "Called ";
        print_info();
    }

};
int main()
{
    cout << "Accessing CONSTRUCTOR:: \n";
    Student s("Zaman", 10, 20, "Abu Zaman", "Umm Zaman");
    s.print_info();

    cout << "\nAccessing CONSTRUCTOR OVERLOOK:: \n";
    Student s1("Abid", 100, 200);
    s1.print_info();

    Student s2;
    return 0;
}
