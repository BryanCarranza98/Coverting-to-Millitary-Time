// Bryan Carranza
// This program will convert 12 hour format clock to a 24 hour format/ Millitary time. The program will convert AM and PM time settings. If the user enters a number too high, the program would not crash but catch the wrong input and inform the user the number was to high.


#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    
    int hourone;
    int min=0;
    int sec=0;
    int timeZone;
    int resultO = 0;
    int resultmin = 0;
    int resultSec =0;
    int resultT = 0;
    
    cout << "------WELCOME TO TIME CONVERTER------"<< endl;
    
    cout << "Please Select '1' for Pm OR '2' for Am: " ;
    cin >>timeZone;
    
    switch(timeZone)
    {
            
        case 1:
            
            cout << " Enter the hour :";
            cin >> hourone;
            
            cout << " Enter the Min :" ;
            cin >> min;
            
            cout << " Enter the Sec :" ;
            cin >> sec;
            
            
            if (hourone==12)
            {
                resultO=12;
            }
            else
                
                try{
                    if(hourone > 11)  // system checkig if the time entered is correct
                    {
                        throw hourone;
                    }
                    resultO= hourone+12; // doing the math if the numbers are correct
                }
            
            catch(int InvalidHR) // catching the wrong number
        {
            cout << " Number Too High NOT ALLOWED "<< InvalidHR << endl;
        }
            
            
            try{
                if(min > 60)
                {
                    throw min;
                }
                resultmin=min; // checking if use input correct number
            }
            
            catch(int InvalidMin) // cathcing the wrong number
        {
            cout << "Number Too High NOT ALLOWED "<< InvalidMin << endl;
        }
            
            try{
                if(sec > 60)
                {
                    throw sec;
                }
                resultSec=sec;
            }
            
            catch(int InvalidSec)
        {
            cout << "Number Too High NOT ALLOWED "<< InvalidSec << endl;
        }
            
            cout << "24 hour format Is: " <<  resultO << ":" << setfill('0') << setw(2 ) << resultmin << ":" << setfill('0') << setw(2 )<< resultSec << " PM " <<  endl;
            
            break;
            
            ///// choosing the AM process.
        case 2:
            // INPUTING THE NUMBERS
            cout << " Enter the hour :";
            cin >> hourone;
            
            
            cout << " Enter the Min :" ;
            cin >> min;
            
            
            cout << " Enter the SEC :" ;
            cin >> sec;
            
            
            if(hourone==12)
            {
                resultT= 0;
            }
            
            else
                try{
                    if(hourone >11) // CHECKING if the input are the correct numbers
                    {
                        throw hourone;
                    }
                    resultO= hourone;
                }
            
            catch(int InvalidHR) // catching if the number entered was too high
        {
            cout << "Sorry Invalid Number: "<< InvalidHR << endl;
        }
            
            
            try{
                if(min > 60)
                {
                    throw min;  // checking if the number entered was too high
                }
                resultmin=min;
            }
            
            catch(int InvalidMin) // catching the wrong number if its too high
        {
            cout << "Number Too High NOT ALLOWED "<< InvalidMin << endl;
        }
            
            
            try{
                if(sec > 60)
                {
                    throw sec;
                }
                resultSec=sec;
            }
            
            catch(int InvalidSec)
        {
            cout << "Number Too High NOT ALLOWED "<< InvalidSec << endl;
        }
            
            cout << "24 hour format Is: " << resultT << resultO << ":" << setfill('0') << setw(2 ) << resultmin << ":" << setfill('0') << setw(2 ) << resultSec << " AM " <<  endl;
            // Outputtig the results for 24hr format
            break;
            
    }
    
    
    
    
    
    return 0;
}

