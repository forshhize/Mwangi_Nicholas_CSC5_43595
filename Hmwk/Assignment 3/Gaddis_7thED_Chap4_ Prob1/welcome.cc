/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 *      Purpose: Minimum and Maximum
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
    
    float nmber1,nmber2;
   
    //Prompt the user for inputs
    
    cout<< "Enter the first number?"<<endl;
    cin>> nmber1;
    
    cout<< "Enter the second number?"<<endl;
    cin>> nmber2;
    
    if (nmber1 > nmber2)
        cout<< "The first number is greater than  "<< nmber2 << endl;
    else if (nmber2 > nmber1)
        cout<< "The second number is greater than  "<< nmber1 << endl;
    else  
        cout<< "nmber1=nmber2" <<endl;
    
    return 0;
}
