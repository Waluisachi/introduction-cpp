#include <iostream>

using namespace std;

float sum(float a, float b );
void introduction(string name, int age= 0);

int main()
{
    cout << sum(2.8, 5) << endl;
    introduction("Phil", 23);
    introduction("Kenny");
    system("pause>0");
    return 0;
}

float sum(float a, float b) {
    return a + b;
}

void introduction(string name, int age) {
    cout << "My name is " << name << endl;
    cout << "I am " << age << "  years old. \n"<< endl;
}
