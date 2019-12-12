#include "std_lib_facilities.h"
int main()
{
   vector<double> distance;
   double dist;
   double smallest;
   double greatest;
   bool first=true;
        cout << "Input the disctances between two cities in km on a route: \n";
        while(cin>>dist)
        {
        if(first){
            smallest=dist;
            greatest=dist;
            first=false;
            }
        else if(dist<smallest)
            smallest=dist;
        else if(dist>greatest)
            greatest=dist;
        distance.push_back(dist);
        }
   double  sum;
   for(int i=0; i<distance.size(); ++i)
   sum+=distance[i];
   cout << "The total route is "<< sum << " km in length.\nSmallest distance between cities: " << smallest << "km.\nGreatest distance between cities: "<<greatest<<"km.\nMean distance between cities: " << sum/distance.size()<<'\n';


    //mean
}
