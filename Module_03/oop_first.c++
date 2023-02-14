#include<bits/stdc++.h>
using namespace std;

class Student{      // class diclaration;
    public:     // access type;
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_info()   //function inside a class
    {
        cout << name << "\n" << std_id << "\n" << age << "\n" 
        << fathers_name << "\n" << mothers_name << "\n";
    }
};

class Rectangle{    // class diclaration
    public:
    int width, height;
    Student s;      //object(from a class) inside another class;
    int cal_area()
    {
        return height * width;
    }
    int cal_perimeter()
    {
        return 2*(height + width);
    }
};

class Person{   // class diclaration recursion type
public:
    string name;
//creates two object of this class and made them member of this class;
    Person *father, *mother; //recursion; used pointer for that(to prevent infinity recursive);
    void print_info()
    {
        cout << "Name = " << name << "\n" << 
        "Fathers name = "<< father->name << "\n"     //to get pointer type data will...
        << "Mothers name = " << mother->name << "\n";     //... use "->" instead of ".";
    }

};
int main()
{
    Student s;  // creare person type object.
    s.name = "Anisa";
    s.std_id = 011111022;
    s.age = 13;
    s.fathers_name = "Abu Anisa";
    s.mothers_name = "Umm Anisa";
    s.print_info();
    cout << "\n";

    Student s1;
    s1.name = "Nahida";
    s1.std_id = 011111022;
    s1.age = 13;
    s1.fathers_name = "Abu Nahida";
    s1.mothers_name = "Umm Nahida";
    s1.print_info();

    cout << "\n";
    Rectangle r, r1; 
    r.height = 4;
    r.width = 8;
    cout << r.cal_area() << "\n";
    cout << r.cal_perimeter() << "\n";
    // went to r class -> access s(Student) data type -> accessing name info:
    r.s.name = "Anisa";
    r.s.print_info();
    cout << "\n";
    r1.height = 3;
    r1.width = 9;
    cout << r1.cal_area() << "\n";
    cout << r1.cal_perimeter() << "\n";

    cout << "\n";
    Person p;
    //new object of Person class is "new Person";
    p.father = new Person; //take new Person to made father point it;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "B";   //since it is pointer, will use "->" instead of ".";
    p.mother->name = "C";
    p.print_info();

    return 0;
}