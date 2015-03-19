/* 
 File:   main.cpp
 * Author: Nicholas Mwangi
 * Purpose:paycheck-Ternary
 *
 * Created on March 16, 2015, 8:11 AM
 */
//System Libraries
#include <iostream>

#include <iomanip>//Formatting
#include <fstream>//I/O File

using namespace std;

//User Libraries

//Global Constants

//Function Types

//Execution starts here!

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    ofstream output;//output the results in a file
    float hrsWkd;//Hours Worked (Hrs)
    float payRate;//Pay Rate ($'s/hr)
    float oRate;//multiplicative factor of payrate
    float oTime;//Where overtime begins (hr)
    float payChk;//Gross pay($'s)
    //open the file
    output.open("payroll.dat");
    //prompt the user for inputs
    cout<<"How many hours this week did you work?" <<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payrate;
    //calculate the paycheck
    if(hrsWkd<oTime)
        payRate*hrsWkd;
}else{
        payRate*(hrsWkd+hrsWkd+(oRate-1)*(hrsWkd-oTime);
    //output the results on your screen
    cout<<fixed<<setprecision (2) <<showpoint;
    cout<<"Hours worked="hrsWkd<<"(hrs)"<<endl;
    cout<<"PayRate=$"<<PayRate<<"(hrs)"<<endl];
    cout<<"Over time rate="<<oRate<<endl;
    cout<<"Overtime bgins at"<<oTime<<"(hrs)"<<endl;
    cout<<"Gross pay =$"<<payChk<<endl;
            
         
            
           
    //close he file
    output.close();
    
    

    return 0;

