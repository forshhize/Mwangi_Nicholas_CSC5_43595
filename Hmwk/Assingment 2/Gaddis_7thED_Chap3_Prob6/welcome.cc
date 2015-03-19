/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 7:08 PM
 *      Purpose: To calculate the number of widgets stacked on a pallet
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
    
    unsigned short pallWgt; //Pallet weight by it self
    unsigned short widAmt; // number of widgets on the pallet
    unsigned short totlWgt; //total weight of pallet with widgets on
    float widWght; //weight of the widget
    
    widWght=9.2;
    
    //Prompt the user for inputs
    
    cout<< "How much does the pallet weigh by itself ?"<< endl;
    cin>> pallWgt;
    cout<< "How much does the pallet weigh with widgets on it?"<<endl;
    cin>> totlWgt;
  
    //calculate the number of widgets on each pallet
    
    widAmt = (totlWgt-pallWgt)/widWght;
    
    cout<< "The number of widgets in each pallet is " << widAmt<< endl;
    
    
  
    return 0;
}
