#include<iostream>

using namespace std;

class Employee{
  /*
  int count; // Always intialize
  */
  static int count; // Initialise once and value is zero
  int Eid;
  int salary;
  public:
    void setData(){
      cout << "Enter the Employee id: " << endl;
      cin >> Eid;
      count++;
      cout << "Enter the Employee salary: " << endl;
      cin >> salary;
    }

    void getData()const{
      cout << "Employee ID: " << Eid << " salary "  << salary << endl;
      cout << "Employee Count : " << count << endl;
    }

    static void getCount(){
      /*
      Only static variable and functions can be used in here.
      Using not static variable and function will throw an error.
      */
      cout << "Count : " << count << endl;
    }
};

int Employee:: count; // Manadatory for the static variable
int main(){
  Employee a, b,c;
  a.setData();
  a.getData();
  /* To use static
  Classname:: functionsName;
  */
  Employee::getCount(); // To use static functions
  b.setData();
  b.getData();
  Employee::getCount();
  c.setData();
  c.getData();
  Employee::getCount();
  return 0;
}