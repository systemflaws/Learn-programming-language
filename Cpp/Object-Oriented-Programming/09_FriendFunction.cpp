#include<iostream>

using namespace std;

/*
    Properties of friend function:
    1. Not in the scope of class
    2. Since, it is not in the scope of the class, it cannot be called from the object of the class. c1.friendfunction() INVALID
    3. Can be invoked without the help of any object
    4. Usually contains the objects as arguments
    5. Can be declared inside public or private section of the class
    6. It cannot access the members directly by their names and need objects_name.dataMember to access
*/

class ComplexNumber{
  int realPart;
  int imaginaryPart;
  public:
    void setData(int a, int b){
      realPart = a;
      imaginaryPart = b;
    }
    void getData()const{
      cout << "Complex Number is " << realPart << "+" << imaginaryPart << 'j' << endl;
    }
    /* Can Access my private data members.
    friend className functionName(arguments):
    */
    friend ComplexNumber sumComplex(ComplexNumber , ComplexNumber);
};

ComplexNumber sumComplex(ComplexNumber c1, ComplexNumber c2){
  ComplexNumber c3;
  /*
  c3.realPart = c1.realPart + c2.realPart;
  c3.imaginaryPart = c1.imaginaryPart + c2.imaginaryPart;
  Or */ 
  c3.setData(c1.realPart + c2.realPart, c1.imaginaryPart + c2.imaginaryPart);
  return c3;
}
int main(){
  ComplexNumber c1, c2;
  c1.setData(3, 4);
  c1.getData();
  c2.setData(5, 10);
  c2.getData();
  ComplexNumber c3 = sumComplex(c1, c2);
  c3.getData();
}