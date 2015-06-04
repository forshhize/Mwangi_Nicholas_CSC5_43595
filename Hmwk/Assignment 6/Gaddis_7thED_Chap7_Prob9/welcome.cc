/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Driver Licence Exam
 */

//System Libraries

#include <iostream>//I/O standard



using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(int argc, char**argv) {
    int count, correct=0;
    const int size=20;
    char your_answers[size];
    
    //store the answers in array
    char answers [size]={ 'B','D','A','A','C','A','B','A','C','D',
                           'B','C','D','A','D','C','C','B','D','A'};
    // Get the answers from the student
    cout<< "Please enter the students answers. \n";
    for (count=0;count<=size-1; count++)
    {
        cin>>your_answers[count];
    }
    for (count=0; count<=size-1;count ++)
    {
        if (answers[count]==your_answers[count])
            correct+=1;
    }
    //Dispay test results
    if(correct>=15)
        cout<<"You passed the test. Congratulations."
                <<correct<<"pot of 20 correct."<<endl;
    else
        cout<<"You failed."
 <<endl;


return 0;
}
