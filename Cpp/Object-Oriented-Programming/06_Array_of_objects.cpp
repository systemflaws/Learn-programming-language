#include<iostream>

using namespace std;

class Employee{
  int Eid;
  int salary;
public:
  void setDetails(){
    cout << "Enter the Eid: " << endl;
    cin >> Eid;
    cout << "Enter the salary: " << endl;
    cin >> salary;
  }
  void getDetails()const;
};

void Employee:: getDetails() const{
  cout << "Employee id : " << Eid << " Salary " << salary << endl; 
}

int main(){
  Employee emp[10]; // Array of Employee type
  emp[0].setDetails();
  emp[0].getDetails();
  emp[1].setDetails();
  emp[1].getDetails();
  return 0;
}