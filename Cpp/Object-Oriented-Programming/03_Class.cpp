#include <iostream>

using namespace std;

/*
typedef struct Student{
    int sid;
    string name;
    int fees;
}stu;
*/

class Student
{
    int sid, standard;
    string name;

public:
    int courses;
    int roomNumber;
    /*
    void setData(int, int, string, int, int){

    }
    or
    */
    void setData(int, int, string, int, int);
    void printData() const
    {
        cout << "ID: " << sid << endl;
        cout << "Name: " << name << endl;
        cout << "Standard: " << standard << endl;
        cout << "Course: " << courses << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

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
    Student s1;
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