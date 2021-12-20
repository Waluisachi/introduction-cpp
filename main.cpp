#include <iostream>

using namespace std;
  enum EyeColor { Blue, Green, Brown, Grey, Others};

int main()
{
    EyeColor eyecolor = Brown;

    switch(99){
        case Blue: cout <<  "10% of people have blue eyes."; break;
        case Brown: cout <<  "80% of people have Brown eyes."; break;
        case Green: cout <<  "3% of people have Green eyes."; break;
        case Grey: cout <<  "1% of people have grey eyes."; break;
        case Others: cout <<  "6% of people have some other eyes."; break;
        default: cout   << "Not a valid eye color.";
    }
    system("pause>0");
    return 0;
}
