//----------------------------------------------------------
	
	//  Brief Project Description
	/*
		This program asks the user to enter the number of students
		surveyed and input the number of the movies watched into a dynamic
		array. The program then finds the average of the movies watched.
	*/
	//----------------------------------------------------------


#include <iostream>

using namespace std;

double averageCal() {
	
int *survey =nullptr;					//stores dynamic allocation of array
	int numStudent;							//stores the number of students
	double total = 0, average;						//store the total number of movies watched and average variable.

	//user input
	cout << "Enter the number of students surveyed: ";
	cin >> numStudent;

		// while loop to validate the inputs
while (numStudent < 1) {
		cout << "The number of students surveyed must be greater than zero." << endl;
		cout << "Enter the number of student surveyed: ";
		cin >> numStudent;
			}
	//dynamic allocation of array
	survey = new int[numStudent];
		
	
	cout << "Enter the number of movies watched by each student." << endl;
	// for loop to get the number of movie watched
	for(int i = 0; i < numStudent; i++)
	{
		cout << "Student " <<(i +1) <<":";
		cin >> survey[i];
		// input validation
		while (survey[i] < 0) {
			cout << "The number of movies watched by students must not be negative" <<endl;
			cout << "Student " << (i + 1) << ":";
			cin >> survey[i];
		}



		total += survey[i];				//accumulate total number of movies watched
	}
	//average calculation
	average = total / numStudent;

	return average;
	
	delete[] survey;			//delete the memory allocation of the dynamic array
}

int main()
{
	cout << "This program finds the average number of movies watched by surveyed students." << endl;

	
	
	cout << "The average number of movies watched by students are "<<averageCal()<< " movies" <<endl;

	
	 
	return 0;
}