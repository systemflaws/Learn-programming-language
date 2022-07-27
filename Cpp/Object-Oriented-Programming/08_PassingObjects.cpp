#include<iostream>

using namespace std;

class ComplexNumber{
  int realNumber;
  int imaginaryNumber;
  public:
    void setData(int a, int b){
      this->realNumber = a;
      this->imaginaryNumber = b;
    }

    void getData() const{
      cout << "Complex Number is " << realNumber << "+" << imaginaryNumber << 'j' << endl;
    }

    void setDatabyObject(ComplexNumber c1, ComplexNumber c2){
      this-> realNumber = c1.realNumber + c2.realNumber;
      this-> imaginaryNumber = c1.imaginaryNumber + c2.imaginaryNumber;
    }

};

int main(){
  ComplexNumber c1, c2;
  c1.setData(3, 4);
  c1.getData();
  c2.setData(5, 10);
  c2.getData();
  ComplexNumber c3;
  c3.setDatabyObject(c1, c2); // Passing object in the parameters.
  c3.getData();
  return 0;
}