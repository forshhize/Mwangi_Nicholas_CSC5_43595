/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on March 25, 2015, 11:27  AM
 *      Purpose: Area of a rectangle
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
    
    float length1,width1,length2,width2,area1,area2;
    
    //What is the length and width of rectangle 1
    
    cout<< "What is the length of rectangle 1 ?" <<endl;
    cin >> length1;
    cout<< "What is the width of rectangle 1 ?" << endl;
    cin>> width1;
    
    // what is the area of rectangle 1
    
    area1= length1*width1;
    
    cout<< "The area of rectangle 1 is " << area1 << "."<<endl;
    
   //What is the length and width of rectangle 2
    
    cout<< "What is the length of rectangle 2 ?" <<endl;
    cin >> length2;
    cout<< "What is the width of rectangle 2 ?" <<endl;
    cin>> width2;
    
    area2= length2*width2;
    
    cout<< "The area of rectangle 2 is " << area2 << "."<<endl; 
    
    //tell the user which rectangle has a greater area or if they are the same.
    
    if (area1>area2)
        
        cout<< "Rectangle 1 has a bigger area than rectangle 2"<< "."<<endl;
    
    else if (area2 >area1)
        cout<<"Rectangle 2 has a bigger area than rectangle 1" << "."<<endl;
    
    else 
            cout<< "Rectangle 1 area is the same as rectangle 2 area" << "."<<endl;
        
    
    
    return 0;
}
