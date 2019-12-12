#include "std_lib_facilities.h"

int main(){
    string operation = ""; 
    double operand1, operand2;
    cout << "Give me one operator and two operands:\n";
    cin >> operation >> operand1 >> operand2;
    if (operation=="+")
        cout << operand1 << " + " << operand2 << " = " << operand1+operand2 << "\n";
    if (operation=="plus")
        cout << operand1 << " + " << operand2 << " = " << operand1+operand2 << "\n";
    if (operation=="-")
        cout << operand1 << " - " << operand2 << " = " << operand1-operand2 << "\n";
    if (operation=="minus")
        cout << operand1 << " - " << operand2 << " = " << operand1-operand2 << "\n";
    if (operation=="*")
        cout << operand1 << " * " << operand2 << " = " << operand1*operand2 << "\n";
    if (operation=="mul")
        cout << operand1 << " * " << operand2 << " = " << operand1*operand2 << "\n";
    if (operation=="/")
        cout << operand1 << " / " << operand2 << " = " << operand1/operand2 << "\n";
    if (operation=="div")
        cout << operand1 << " / " << operand2 << " = " << operand1/operand2 << "\n";
}
