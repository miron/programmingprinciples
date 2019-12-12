#include "std_lib_facilities.h"
int main()
{
    cout << "Input miles to convert to kilometers:\n";
    double miles = 0;
    cin >> miles;
    cout << miles << " miles equal " << miles*1.609 << " kilometers.\n";
}
