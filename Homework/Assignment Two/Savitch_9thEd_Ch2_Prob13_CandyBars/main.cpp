/* 
 * File:   main.cpp
 * Author: Juan Villalpando
 * Created on March 7,  2017, 12:07 AM
 * Purpose: Calculate # of Candy Bars
 */

//System Libraries
#include <iostream>//Input - Output Library (This is the specific namespace, prevents variable collision)
using namespace std; //This is the name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize Variables
    char sex;                  //M or F
    unsigned short ht, wt, age;//height(in), weight(lbs), age(yrs)
    unsigned char cdyCals= 230;//Candy bar calories
    float bmr;//Basic Metabolic Rate (calories)
    int nCdyBrs;//Number of candy bars we can eat
    
    //Input data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex(M/F), Wt(lbs), Ht(in), Age(yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //Map inputs to outputs or process the data
    bmr=(sex=='M')?
        66  + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt + 4.7f *ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    //Output the transformed data
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;
    
    //Exit Stage Right!
    return 0;
}

