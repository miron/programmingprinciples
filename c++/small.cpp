#include "std_lib_facilities.h"
double convert(double num, string u)
{

        if(u=="m")
            num*=100;
        else if(u=="cm"){}
        else if(u=="in")
            num*=2.54;
        else if(u=="ft")
            num*=12*2.54;
        else 
            //cout << "Invalid unit or no unit given\n";
            return 0;
        return num;
}

int main()
{
    double number = 0;
    double smallest = 0;
    double greatest = 0;
    bool first = true;
    int total = 0;
    double sum =0;
    vector<double> numbers; 
    string unit ="";
    while(cin>>number>>unit ){
        number=convert(number, unit);
        //if(number==0)
         //   continue;
        if(first){
            if(number<=0){
                cout << "Try again, zero or negative length or invalid unit.\n";
                continue;
                }
            else{
                smallest=number;
                greatest=smallest;
                cout << smallest << " cm\n";
                first = false;
                }
        }
        else if(number<=0){
                cout << "Try again, zero or negative length or invalid unit.\n";
                continue;
                }
        else if (number<smallest){
            smallest=number;
            cout << smallest << " cm smallest so far\n";
            }
        else if(number>greatest){ 
            greatest=number;
            cout << greatest << " cm the greatest so far\n";
            }
        else 
            cout << number << " cm\n";
    ++total;
    numbers.push_back(number/100);
    sum+=number;
        }
    cout << "Smallest value: " << smallest << " cm\n" << "Largest value: " << greatest <<  " cm\n" << "Total values: " << total << '\n' << "Sum of values: " << sum/100 << " meters\n" << "The input values are:\n";
    sort(numbers);
    for (int i= 0;i<numbers.size();i++)
        cout << numbers[i] << " m\n";

}
