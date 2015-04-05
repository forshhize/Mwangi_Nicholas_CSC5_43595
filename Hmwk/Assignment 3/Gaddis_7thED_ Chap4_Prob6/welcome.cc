/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 25, 2015, 11:27  AM
 *      Purpose: Calculate objects mass and display the weight
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    float mass,weight,newtons ;
    
    cout << "What is the mass of the object in kilograms ? " << endl;
    cin >> mass;
    
    weight = mass * 9.8 ;
    
    cout<< "The weight of the object is " << weight << "."<< endl;
    
    if ( weight > 1000)
        cout<< "The weight is too heavy" << "."<< endl;
    
    if (weight <10)
        cout<< "The weight is too light" << "." <<endl;
    
    

    return 0;
}
