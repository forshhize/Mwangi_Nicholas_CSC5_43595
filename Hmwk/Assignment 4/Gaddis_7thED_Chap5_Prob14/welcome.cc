/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 9:18 AM
 * Purpose: Student line up
 */

//System Libraries

#include <iostream>//I/O standard
#include <string>




using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    string studenNames[25];
    
    string tempName;
    
    int n; //number of students
    
    //The number of students is validated by the do-while loop Students less
    than 1 or greater than 25 will noto be accepted as input
    
    do
    { cout<< "Enter the number of students in the class:" << endl;
    cin>> n;
    }
    while (n<0||n>25);
    
    //reading students names
    
    cout<< "Enter a student name"<<endl;
    cin >>studenNames
    
    
    
    
    
        
        
    
    
    
    
            
            
    
    
    
    return 0;
}
