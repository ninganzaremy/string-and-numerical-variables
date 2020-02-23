/* Homework 2: string and numerical variables by Ninganza_Remy @ Feb 7, 2020 */
#include<iostream>
#include <string>
using namespace std;

int main() {
    /* code */
    
    cout<<"---------------Part 1 : string variable practice-----------------------"<<endl;
    cout<<endl;

    //Step 1) Declare string variables to store a first name, last name, and full name. Step 2) print message asking user to enter a first name
    string firstName, lastName, fullName;

    //Step 2) print message asking user to enter a first name
    cout<<"Enter a first name: ";

     //Step 3) collect information from keyboard and store it in variable
    getline(cin,firstName);

     //Step 4) print message asking user to enter a last name
    cout<<"Enter a last name: ";

     //Step 5) collect information from keyboard and store it in variable
    getline(cin,lastName);

     //Step 6) In a string variable for full name, concatenate the first name and last name
    fullName = firstName + lastName;

     //Step 7) print the first letter of the first name and last name, and the full name
    cout<<"The initials are : " <<firstName[0]<< " , " <<lastName[0]<<" = " << fullName <<endl;

     //Step 8) print the length of the full name.
    cout<< "The length of the fullName is: " << fullName.length()<<endl;
    cout<< endl;cout<< endl;cout<< endl;





     cout<<"----------------------Part 2: numerical variable practice-------------"<<endl;
     cout<<endl;

     //Step 1) declare variables. Also declare a constant for gravity with value 9.8
     const double Gravity = 9.8;
     double  distance, mass1, mass2, gravitational_force;

     //Step 2) print message asking user to enter mass 1
    cout<<"Enter mass 1 in grams: ";

     //Step 3) collect information from keyboard and store it in variable.
    cin>> mass1;

     //Step 4) print message asking user to enter mass 2.
    cout<< "Enter mass 2 in grams: ";

     //Step 5) collect information from keyboard and store it in variable.
    cin>>mass2;

     //Step 6) print message asking user to enter the distance between the two objects.
    cout<< "Enter the distance between the two objects in meters: ";

     // Step 7) collect information from keyboard and store it in variable.
    cin>>distance;

    // Step 8) calculate the gravitational force.
    gravitational_force =(Gravity * mass1 * mass2)/(distance * distance);

     //Step 9) display result
    cout<<"The gravitational force is: "<< gravitational_force<< " Newtons."<<endl;

    return 0;
}
