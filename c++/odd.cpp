#include "std_lib_facilities.h"

int main(){
    int a; 
    cout << "Input a number\n";
    cin >> a;
    if ( a%2 == false)
        cout << "The number you gave me is even\n";
    else 
        cout << "The number you gave me is odd\n";
}

