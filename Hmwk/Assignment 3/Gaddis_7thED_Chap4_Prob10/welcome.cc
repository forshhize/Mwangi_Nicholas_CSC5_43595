/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 4 , 2015, 9:54 AM
 *      Purpose: Software sales
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
    
    float package,nmbSold,tlCost1,tlCost2,tlCost3,tlCost4,quntity;
    
    
    
    package=99;
    
    //Ask how many units are sold
    
    cout<< "How many units were sold ?" <<endl;
    cin>> nmbSold;
    
    // Calculate total cost of the package
    tlCost1= (nmbSold *package)*0.8;
    tlCost2= (nmbSold *package)*0.7;
    tlCost3= (nmbSold *package)*0.6;
    tlCost4= (nmbSold *package)*0.5;
    
    
    cout<< fixed<< showpoint << setprecision(2);
    
    if(nmbSold >=10 && nmbSold<=19){
    
        cout<< " The total cost will have a 20% discount and the total purchase will be $ " << tlCost1<< endl;
    }
    else if (nmbSold >=20 && nmbSold<=49){
    
        cout<< " The total cost will have a 30% discount and the total purchase will be $ " << tlCost2<< endl;
    }
    else if (nmbSold >=50 && nmbSold<=90){
    
        cout<< " The total cost will have a 40% discount and the total purchase will be $ " << tlCost3<< endl;
    }
    
    else if (nmbSold >=100){
    
        cout<< " The total cost will have a 50% discount and the total purchase will be $ " << tlCost4<< endl;
    }
    else 
        cout<< "The number of units have to be greater than 0 and more than 10 for discount." <<endl;
        
        
    
    
    
    return 0;
}
