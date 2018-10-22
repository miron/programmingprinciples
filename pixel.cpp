#include "std_lib_facilities.h"
#include <math.h>       /* pow */
double loss(double pixel, double premium){
    double result=pixel*premium-(pixel*premium-pixel)*0.75-pixel;
    return result;
}

int main(){
    double pixel = 0.05;
    double newpixel;
    double buyover;
    double premium = 1.35;
    double totalloss;
    cout << "how many times do you bought over your pixel?\n";
    cin >> buyover;
    newpixel=pixel*pow(premium,buyover);
    
    for(int i=0; i<buyover; ++i){
        totalloss+=loss(pixel*pow(premium,i), premium);
    }
    cout << "Your pixel costs now " << newpixel*premium  << " EOS and you loose " <<  loss(newpixel/premium, premium) << " EOS\n";
    cout << "Your total loss equals " << totalloss+pixel << " EOS\n";

}

// And if you wonder about the 1.62% going to the pot: the pot is 25%, so 100% of contract proceeds is 4 times as much, which are 25% of the increase in pixel prise, so 100% are again 4 times as much which is the 35% on top of what the previous owner payed. So to get the price of the pixel which has to be bought, which is 135%, you have to multiply by 135% and divide by 35%. So 4*4*135/35=61.714 
