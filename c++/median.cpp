#include "std_lib_facilities.h"
int main()
{
    vector<double> temps;
    for(double temp;cin>>temp;)
        temps.push_back(temp);
    sort(temps);
    //cout << temps.size()/2 << temps.size()%2 << '\n';
    if(temps.size()%2==true)
    cout << "Median temp: " << temps[temps.size()/2] << '\n';
    else {
    double smaller = temps[temps.size()/2-1];
    double bigger = temps[temps.size()/2];
    double truemedian = (smaller+bigger)/2;
    cout << "Median temp: " << truemedian << '\n';
    }
    
}
