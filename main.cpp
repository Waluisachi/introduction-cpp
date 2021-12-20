#include <iostream>

using namespace std;

void celebrateBirthday( int* age);

int main()
{
    int luckyNumbers[5] = { 10 ,2, 9, 4, 8};

    int * luckyPointer = luckyNumbers;

    cout << "Pointing to address " << luckyPointer  <<  " value stored " << *luckyPointer<< endl;
    luckyPointer++;
    cout << "Pointing to address " << luckyPointer  <<  " value stored " << *luckyPointer<< endl;

    system("pause>0");
    return 0;
}



void celebrateBirthday( int* age) {
  (*  age)++;
    cout << "I am  celebrating my birthday at age" << *age <<endl;
}
