#include <iostream>

using namespace std;

class Car {
public:
    string Color;
    string Name;
    double Price;

};
int main(){
    Car myCar;
    myCar.Name = "Ford Camaro";
    myCar.Color = "Black";
    myCar.Price = 8000000;

    cout << "Color" <<  myCar.Color ;
    cout << "Name" <<  myCar.Name ;
    cout << "Price" <<  myCar.Price << " $" ;
    system("pause>0");
    return 0;
}




