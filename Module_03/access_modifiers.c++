#include<bits/stdc++.h>
using namespace std;
// PRIVATE ::   
class Student{      // class diclaration;
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
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
};

//PROTECTE :: INHERITANCE :user, admin

class User
{
protected:  // it would be accessible to those class who inherited it;
    string name;
    int age;
};
class Admin: User   //it means, Admin class inherits User class
{
private:
    string designation;
public:
    void Set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print()
    {
        cout << name<< "\n" << age << "\n" << designation << "\n";
    }
};

int main()
{
    cout << "Accessing PRIVATE variable:: \n";
    Student s;
    s.setInformation("A", 10, 20);
    s.print_info();


//PROTECTE :: INHERITANCE :user, admin
    cout << "Accessing PROTECTE variable:: \n";
    Admin ad;
    ad.Set("A", 10, "D");
    ad.print();


    return 0;
}