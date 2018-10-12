#include "std_lib_facilities.h"

int main(){
    string number = "";
    cout << "Write out a number from one to four\n";
    cin >> number; 
    if (number == "one")
        cout << "Number entered is 1\n";
    else if (number == "two")
        cout << "Number entered is 2\n";
    else if (number == "three")
        cout << "Number entered is 3\n";
    else if (number == "four")
        cout << "Number entered is 4\n";
    else 
        cout << "I am a stupid computer\n";
}
