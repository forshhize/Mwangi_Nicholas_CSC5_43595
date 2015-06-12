/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 10;17 AM
 * Purpose: Gradebook
 */

//System Libraries

#include <iostream>//I/O standard
#include <iomanip>
#include <string>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

char lettGrd (float score);

//Execution Begins Here!
 
int main(int argc, char**argv) {
    // Declare variables
    
    //String to hold student names
    
    string studentName[5];
    
    float testScr[5][4];
    
    char grades[5];
    
    float testAvg[5];
    
    //Prompt user for student name
    for (int i=0;i<5;i++)
    {
        cout<<"\n Enter "<<(i+1)<<" student "<<" name:";
        //provide the student name
        cin>> studentName [i];
        
        cout<<"Enter his or her 4 test scores:";
        for (int j=0;j<4;j++)
        {
            //provide the 4 test score
            cin>>testScr[i][j];
            
            while(testScr[i][j]> 100||testScr[i][j]  <0)
            {
                cout<<"\nTest score should be between 0 and 100" <<endl;
                cout<<"Enter test score: ";

               cin>>testScr[i][j];           
            }
        }
    }
    //finding average of 5 test score abd store in the array testAvg
    
    for(int i=0;i<5;i++)
    {
        testAvg[i]=0;
        for(int j=0;j<4;j++)
            testAvg[i] +=testScr[i][j];
        testAvg[i]/=4;
        
        grades [i] =lettGrd (testAvg [i]);
        
    }
    
    cout<<"\nStudent Name\t Average Score\t Letter Grade"<<endl;
    for(int i=0;i<5;i++)
    {
        cout.setf (ios::fixed,ios::floatfield);
        cout.precision(2);
        cout<< studentName[i]<<"\t\t"<<setprecision(2)
                <<testAvg[i]<<"\t\t"<<grades [i] <<endl;
                
        
    }
    
    return 0;
}

/* Return letter grade based on test score passed*/

char lettGrd (float score)
{
    if (score>=90 && score <=100)
        return'A';
    else if (score>=80 && score <=90)
        return'B';
    else if (score>=70 && score <=80)
        return'C';
    else if (score>=60 && score <=70)
        return'D';
    else
        return 'F';
}

