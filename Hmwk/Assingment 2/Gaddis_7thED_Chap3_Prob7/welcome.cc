   
  /* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 * Purpose: How many calories
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    unsigned short cookbag; //number of cookies in a bag
    unsigned short srving1; //number of calories per serving
    unsigned short eaten; //number of cookies eaten
    
    float srvings; //number of servings in a bag
    float caloris; //calories consumed
    float temp1; //number of servings in a bag * calories per serving
    
    cookbag = 40;
    srvings = 10;
    srving1 = 300;
    
    temp1 = srving1*srvings;
    
    cout<< "How many cookies did you eat ?" << endl;
    cin>> eaten;
    
    //calculate total calories consumed 
    
     caloris = temp1/cookbag * eaten;
    
    cout<< "Total calories consumed are  " << caloris << endl;
    
   
    
    
    return 0;
}
