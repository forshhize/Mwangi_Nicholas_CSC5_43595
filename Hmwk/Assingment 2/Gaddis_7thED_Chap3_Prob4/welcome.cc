/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 18, 2015, 11:27  AM
 *      Purpose: Average Rainfall
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    string month1,month2,month3;
    
   
    
    float mnRain1,mnRain2,mnRain3,inch1,inch2,inch3;
    
    float average,inches;
    
    cout<< "What is the first month of rainfall ?" <<month1<< endl;
    cin>>month1;
    cout<< "How many inches of rain fell that month ?" << mnRain1<< endl;
    cin>> inch1;
    
    cout<<"What is the second month of rainfall ?" <<  month2<< endl;
    cin>>month2;
    cout<< "How many inches of rain fell that month  ?" << mnRain2<< endl;
    cin>>inch2;
    
    cout<< "What is the third month of rainfall ?" << month3<<endl;
    cin>>month3;
    cout<< "How many inches of rain fell that month  ?" << mnRain3<< endl;
    cin>>inch3;
    
    average=(inch1+inch2+inch3)/3;
    
    cout<< "The average rainfall for " << month1<< "," << month2<< " and " << month3<< " is " ;
    cout<< average<< " inches" << endl;
            
    
    
    
    
    return 0;
}

