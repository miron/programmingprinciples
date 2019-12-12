#include "std_lib_facilities.h"
int main()
{
    int square, grains=1, grains_prev=1;
    for(int i=1; i<65; ++i){
       grains+=i*2; 
       cout << "Grains: " << grains << " Field: " << i << endl;
       if(grains>=1000) cout << "For at least 1000 grains " << i << "fields are needed\n";
       if(grains>=1000000) cout << "For at least 1,000,000 grains " << i << "fields are needed\n";
       if(grains>=1000000000) cout << "For at least 1,000,000,000  grains " << i << "fields are needed\n";

    }
}
        /*how many squares needed for 1000 grains of rice
          1000000
          1000000000 */

