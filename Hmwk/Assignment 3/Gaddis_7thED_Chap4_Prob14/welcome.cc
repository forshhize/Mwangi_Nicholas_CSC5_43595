/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 4 , 2015, 9:54 AM
 *      Purpose: Running the Race
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
    
    string   runner1,runner2,runner3;
    float time1,time2,time3;
    
    cout<< "What is the name of the first runner ? " << endl;
    cin>> runner1;
    cout << "How much time did you take to finish?" <<endl;
    cin>> time1;
    
    cout<< "What is the name of the second runner ? " << endl;
    cin>> runner2;
    cout << "How much time did you take to finish?" <<endl;
    cin>> time2;
    
    cout <<"what is the name of the third runner ?" << endl;
    cin>>runner3;
    cout << "How much time did you take to finish?" <<endl;
    cin>> time3;
    
    if (time1<time2&&time3)
        if (time2<time3)
    {
        cout<< "Runner 1 is the winner"<< endl;
        cout<< "Runner 2 is the second"<<endl;
        cout<< "Runner 3 is the third"<<endl;
    }
        
        
            if (time2<time1&&time3)
                if (time1<time3)
                {
        
    
        cout<< "Runner 2 is the winner"<< endl;
        cout<< "Runner 1 is the second"<<endl;
        cout<< "Runner 3 is the third"<<endl;
                }
    
    if (time3<time1&&time2)
        if (time2<time1){
            
        cout<< "Runner 3 is the winner"<< endl;
        cout<< "Runner 2 is the second"<<endl;
        cout<< "Runner 1 is the third"<<endl;
        }
        
                    
                    
   
    
    
            
    
    
    return 0;
}

