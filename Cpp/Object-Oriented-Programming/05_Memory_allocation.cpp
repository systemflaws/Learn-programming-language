#include <iostream>

using namespace std;

class Product
{
    int productPrice[10]; // Memory Allocation

public:
    void setItemPrice();
    void displayItemPrice()const;
};

void Product:: setItemPrice(){
    cout << "Enter the Item Id : " << endl;
    int itemID;
    cin >> itemID;
    cout << "Enter the Price of Item: " << endl;
    cin >> productPrice[itemID];
}

void Product:: displayItemPrice() const{
    for(int i = 0; i < 10; i++){
        cout << "Price of the Item of having ItemId " << i << " is ";
        cout << productPrice[i];
        cout << endl; 
    }
}

int main(){
    Product camera;
    camera.setItemPrice();
    camera.setItemPrice();
    camera.displayItemPrice();
    return 0;
}