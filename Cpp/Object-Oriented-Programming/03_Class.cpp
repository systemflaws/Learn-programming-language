#include <iostream>

using namespace std;

/* Struct method
Here, we have shorten the struct Student to stu using typedef symbolic name.
typedef struct Student{
    int sid;
    string name;
    int fees;
}stu;
*/

class Student
{
    // By default all the data member and functions are private.
    int sid, standard;
    string name;

public: // To access outside the class.
    int courses;
    int roomNumber;

    /* Can declare and define here like this
    void setData(int, int, string, int, int){
    }
    or
    */

    void setData(int, int, string, int, int); // Or declare like this and define outside the class using scope resolution operator.
    void printData() const // Here we are not changing anything. So, we make our function const(constant).
    {
        cout << "ID: " << sid << endl;
        cout << "Name: " << name << endl;
        cout << "Standard: " << standard << endl;
        cout << "Course: " << courses << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

/*
To define class data function outside the class we declare like this:
returnType ClassName:: functionName(arguments){
}
*/

void Student::setData(int id, int standard, string name, int courses, int roomNumber)
{
    sid = id;
    this->standard = standard;
    this->name = name;
    this->courses = courses;
    this->roomNumber = roomNumber;
    return;
}

int main()
{
    Student s1; // Object created of type Student dataType.
    s1.setData(1, 1, "arun", 10, 3); 
    s1.printData();
    s1.courses = 3;
    s1.roomNumber = 10;
    s1.printData();
    /*
    // But this is not allowed private members cannot be accessed from outside.
    s1.name = "kab";
    s1.sid = 3;
    s1.standard = 2;
    */
    return 0;
}