#include<bits/stdc++.h>
using namespace std;

class Person{   // class diclaration recursion type
public:
    string name;
    Person *father, *mother;
    Person()
    {
        // need to create this empty constructor. Because...
        //..."father = new Person" has no parameter. But it can...
        //...find only one constructor with three parameters below.
        father = NULL;
        mother = NULL;
    }
    Person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new Person;    //used "new" to allocate heap memory;
        father -> name = f_name;
        mother = new Person;
        mother -> name = m_name;
    }
    void print_info()
    {
        cout << "Name = " << name << "\n" << 
        "Fathers name = "<< father->name << "\n"     //to get pointer type data will...
        << "Mothers name = " << mother->name << "\n";     //... use "->" instead of ".";
    }
    //DESTRUCTOR:: is used to deallocate\free heap memory, which is allocated while...
                //...creates new for "CONSTRUCTOR"
    ~Person()
    {
        cout << "Called\n";
        if(father != NULL)
        delete father;
        if(mother != NULL)
        delete mother;
    }
};
int main()
{
    Person p("Anisa", "Abu Anisa", "Umm Anisa");
    /* //new object of Person class is "new Person";
    p.father = new Person; //take new Person to made father point it;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "B";   //since it is pointer, will use "->" instead of ".";
    p.mother->name = "C"; */
    p.print_info();
    return 0;
}

