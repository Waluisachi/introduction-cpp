#include <iostream>

using namespace std;

void celebrateBirthday( int* age);

int main()
{
    int myAge = 23;
    cout << "Before function age " << myAge << endl;
    celebrateBirthday(&myAge);
    cout << "After function age " << myAge << endl;
    system("pause>0");
    return 0;
}



void celebrateBirthday( int* age) {
  (*  age)++;
    cout << "I am  celebrating my birthday at age" << *age <<endl;
}
