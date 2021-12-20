#include <iostream>

using namespace std;

int main()
{

 /* While loop */
    int counter = 1;
    cout << " While Loop" << endl;
      while(counter <= 10) {
        cout << counter << endl;
        counter++;
     }
 /* Do While Loop*/
    cout << "Do While Loop" << endl;
    int doWhileCounter = 1;
     do {
        cout << "The counter is: " << doWhileCounter << endl;
        doWhileCounter++;
     } while(doWhileCounter <= 10);

     /*For  Loop */
     cout << "For Loop" << endl;
     string animals[5] = {  "Dog", "Cat", "Cow", "Bee", "Wolf" };

     for(int i= 0; i < 5; i++){
        cout << animals[i] << endl;
     }

    system("pause>0");
    return 0;
}
