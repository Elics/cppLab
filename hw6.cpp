//----------------------------------------------------------

	//  Class: CMPSC 121, Section
	//  Project #6
	//  Due Date: 03/25/20
	/*  Brief Project Description: This project asks user to input time in a 24-hour format 
and then return the time in 12-hour format. It continue to ask the user if he/she want to continue
if yes the user should input 'Y' or 'y' for Yes.
*/
	//----------------------------------------------------------


#include <iostream>
#include <string>
using namespace std;

//functions prototypes
 void input(int&, char&, int&);
 void output(int, char, int, char&);
 

int main() {
	//variables
	int hour, min;
	char c;
	char response ;

	//do loop  to let the user input repeatedly
	do
	{
		//input function call
		input(hour, c, min);
			// asking user to continue or not.
			cout << "Enter Y or y to continue, anything else quit: ";
			cin >> response;
			cout << endl;
		
		
	} while (response == 'Y' || response == 'y');

	return 0;	
}


//input funtion is a void function that takes user inputs
void input(int& hour, char& c, int&min)
{
	char amOrPm;
	cout << "Enter 24-hour time in the format HH:MM (eg. 20:40): ";
	cin >> hour >> c >> min;

	//while loop to catch hour and minutes errors 
	while (hour < 0 || hour >23 || min < 0 || min > 60)
	{
		cout << "Error.... Please Enter 24-hour time in the format HH:MM (eg. 20:40): ";
		cin >> hour >> c >> min;

	}

	//output function call
	output(hour, c, min, amOrPm);
}

//conversion function - value returning function
int conversion( int conHour, char &amOrPm)
{
	int remainder;				//to store remainder of the calculation

	//if statement to determine the time
	if (conHour > 12 )
	{
		amOrPm = 'P';			//assigning reference variable with char P
		
		remainder = conHour % 12;		//calculation for remainder hours
		
		return remainder;

	}

	else if (conHour == 12)
	{
		amOrPm = 'P';
		
		remainder = conHour;

		return remainder;

	}

	else if (conHour == 0)
	{
		amOrPm = 'A';
		remainder = 12;

		return remainder;

	}
	else
	{
		amOrPm = 'A';
		return conHour;
	}
	
}


//output function is a void function

void output( int hr,char c, int min,  char &amOrPm)
{
	string aOp;
	int con = conversion(hr, amOrPm);
	
	// if statement for assigning amOrpm with pm or am
	if(amOrPm =='P')
	{ 
		aOp = "PM";
	}
	else
	{
		aOp = "AM";
	}

	//output for time
	cout << " Time in 12-hr format: " << con << c <<min 
		<< aOp << endl;
	
}
