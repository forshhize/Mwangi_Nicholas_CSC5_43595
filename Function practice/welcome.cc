/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 24th 25, 2015, 10:45  PM
 *      Purpose: Determining gross pay for employees
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <string>
#include <cmath>

const float PI=3.14159;

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int getPosint (string msg)
    {
       int num =0;
        do
    {
        cout<< msg << endl;
        cin>>num; 
    } while (num<=0);
    
    return num;
    }
    
    float areaOfCircle(int r)
    
    { 
        return PI* pow(r,2);
    }
    float volOfSphere (int r)
    {
        return 4/3.0 * PI * pow(r,3);
    }
 
int main(int argc, char**argv) {
    
    int radius=getPosint ("enter a positive integer for the radius of a circle /sphere");
    
    float acircle=areaOfCircle (radius);
    
    float VSphere = volOfSphere (radius);
    
    cout << "The area of the circle that has a radius of " <<radius<< " is " << acircle << "."<< endl;
    
    cout << "The area of the sphere that has a radius of " <<radius<< " is " << VSphere << "."<< endl;
    
    return 0;
}
