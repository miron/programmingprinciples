#include "std_lib_facilities.h"
int main(){
    constexpr double cm_per_inch = 2.54; //number of cm in an inch
    double length = 1; //length in inches or cm
    char unit = 0;
    cout<<"Enter length followed by unit (c or i)\n";
    cin >> length >> unit;
    if(unit=='i')
        cout<<length<<"in == "<<cm_per_inch*length<<"cm\n";
    else if(unit=='c')
        cout<<length<<"cm == "<<length/cm_per_inch<<"in\n";
    else
        cout<<"Nada rozumalem\n";


}
