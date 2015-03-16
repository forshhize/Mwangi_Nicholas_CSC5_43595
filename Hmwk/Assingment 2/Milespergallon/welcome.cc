/*
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 16, 2015, 9:44 AM
 *      Purpose: Miles Per gallon
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
    ofstream out;//Output the results in a file
    
    float miles; //miles driven in a full tank
    float mileage;// miles driven per gallon of gas
    float gas;//Number of gallons the car can hold
    
    //Open the file
    out.open ("milage.dat");
    
    //Prompt the user for inputs
    cout<< "How many gallons of gas can the car hold?"<<endl;
    cin>> gas;
    cout<< "How many miles can the car drive with a full tank?"<<endl;
    cin>> miles;
    
    //calculate miles driven per gallon of gas
    
    mileage = miles/gas;
    cout<<setprecision(2)<<fixed;
    cout<<"Number of miles driven per gallon of gas is "<< mileage<<endl;
    
    //Close the file
    out.close();
    //Output the results to the file
            
    
   
    
    
    
    
    
    
    return 0;
}