/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 4 , 2015, 9:54 AM
 *      Purpose: Book club points
 */

//System Libraries

#include <iostream>//I/O standard




using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    int books, book0,book1,book2,book3,book4;
    
    //points based on books rented
    
    book0=0;
    book1=5;
    book2=15;
    book3=30;
    book4=60;
     
    //Ask user for the number of books purchased
    
    cout<< "How many books have you purchased this month?" <<endl;
    cin>> books;
    
    if ( books==0 ){
        
        cout<< "There are no points awarded." << endl;
    }
    else if (books ==1){
        
        cout<< "The points awarded for that month are : " <<book1<< endl;
    }
    else if (books ==2){
        
        cout<< "The points awarded for that month are : " <<book2<< endl;
    }
    else if (books ==3){
        
        cout<< "The points awarded for that month are : " <<book3<< endl;
    }
    else if (books >=4){
        
        cout<< "The points awarded for that month are : " <<book4<< endl;
    }
    else
        cout<< "The number has to be more than 0." <<endl;
    
        
    
        
    
    
    
    return 0;
}
