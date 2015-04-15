/* 
 * File:   main.cpp
 * Author: Nicholas Mwangi
 * Created on April 14 2015, 9:18 AM
 * Purpose: Calculating the hotel occupancy of a hotel
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
    
    int noFlors; //Number of Floors
    int noRooms; //Number of Rooms
    int ttlRoms=0; //Total Number of Rooms
    int ocRooms; //OCuupied Rooms
    int ttlOcRm=0; //Total occupied Rooms
    float perRoms ;
    
    //Asking user for number of floors
    
    cout << "How many floors does the hotel have?"<< endl;
    cin>> noFlors;
    
    if(noFlors<1)
    {
        cout<< "Re-enter number of floors:" << endl;
                cin>>noFlors;
    }
    for (int i=0;i<noFlors;i++)
    {
        if (noFlors>=13)
            break;
        //Entering the number of rooms
        cout<<"Enter the number of rooms:" << endl;
        cin>>noRooms;
    }
    
    //Calculating the total number of rooms
    ttlRoms=ttlRoms+noRooms ;
    
    //Entering the number of rooms
    cout<< "Enter number of rooms occupied:"<< endl;
    cin>>ocRooms;
    
    //Calculating the total of occupied rooms
    ttlOcRm=ttlOcRm+ocRooms;
}

//outputting total rooms in Hotel
cout<<"Total number of rooms in hotel:" << ttlRoms <<endl;

//Outputting occupied total

cout<<"Occupied Rooms:"<<ttlOcRm << endl;

//Outputting unoccupied rooms
cout<< "Un-occupied Rooms:" << ttlRoms- ttlOcRm << endl;

//Calculating percentage
perRoms=(ttlORm/ttlRoms)*100;
cout<<"Percentage of occupied:"<< perRooms << endl;

    
    return 0;
}
