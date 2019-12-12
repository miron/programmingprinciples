#include "std_lib_facilities.h"
int main(){
    constexpr double yen_in_dollar = 0.0089; 
    constexpr double euro_in_dollar = 1.17; 
    constexpr double pound_in_dollar = 1.31; 
    constexpr double epound_in_dollar = 0.056; 
    constexpr double yuan_in_dollar = 0.15; 
    constexpr double kroner_in_dollar = 0.12; 
    double ammount = 1; 
    char curr = 0;
    cout<<"Enter ammount followed by unit (y, e, p, c, k or g)\n";
    cin >> ammount >> curr;
    switch(curr)
    {
     case 'y':
        cout<<ammount<<"yen == "<<yen_in_dollar*ammount<<"$\n";
        break;
     case 'e':
        cout<<ammount<<"euro == "<<ammount*euro_in_dollar<<"$\n";
        break;
     case 'p':
        cout<<ammount<<"pound == "<<ammount*pound_in_dollar<<"$\n";
        break;
     case 'g':
        cout<<ammount<<"egyptian pound == "<<ammount*epound_in_dollar<<"$\n";
        break;
     case 'c':
        cout<<ammount<<"yuan == "<<ammount*yuan_in_dollar<<"$\n";
        break;
     case 'k':
        cout<<ammount<<"kroner == "<<ammount*kroner_in_dollar<<"$\n";
        break;
     default:
        cout<<"Nada rozumalem\n";
        break;
     } 


}
