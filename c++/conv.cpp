#include "std_lib_facilities.h"
int main(){
    constexpr double yen_in_dollar = 0.0089; 
    constexpr double euro_in_dollar = 1.17; 
    constexpr double pound_in_dollar = 1.31; 
    constexpr double epound_in_dollar = 0.056; 
    double ammount = 1; 
    string curr = "";
    cout<<"Enter ammount followed by unit (y, e, p or ep)\n";
    cin >> ammount >> curr;
    if(curr=="y")
        cout<<ammount<<"yen == "<<yen_in_dollar*ammount<<"$\n";
    else if(curr=="e")
        cout<<ammount<<"euro == "<<ammount*euro_in_dollar<<"$\n";
    else if(curr=="p")
        cout<<ammount<<"pound == "<<ammount*pound_in_dollar<<"$\n";
    else if(curr=="ep")
        cout<<ammount<<"egyptian pound == "<<ammount*epound_in_dollar<<"$\n";
    else
        cout<<"Nada rozumalem\n";


}
