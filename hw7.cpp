
//----------------------------------------------------------
	//  Class: CMPSC 121, Section
	//  Project # 7
	//  Due Date: April 15, 2020
	/*  Brief Project Description: 
			This program calculates the total score
			of a dive. It asks user to input a score between 0 and 10 and store
			the input in an array. It also takes the degree of difficulty of the dive.
			The program then remove the highest and lowest score, then add the rest and multiply by the 
			level of difficulty and finally multiplies the total with 0.6 to get the final score.
	*/
	//----------------------------------------------------------

#include <iostream>

using namespace std;

int main()
{	
	const int SCORES = 7 ;			//it is a constant number for the array.
	float score[SCORES];			//array declaration with 7 elements.
	float diveDiffi;				//this holds the degree of difficult for the dive.
	

	
	cout << "Diving Score Calculation." << endl;
	cout << "----------------------------" << endl;
	cout << "Enter the degree of difficulty for the dive."
		<<"It must be from 1.2 to 3.8 points (eg. 2.3): ";		//user input for difficulty.
	cin >> diveDiffi;

	//while loop to ensure the input is within the range of 1.2 to 3.8.
	while (diveDiffi < 1.2 || diveDiffi >3.8) {
		cout << "The number is out of range. Enter a number from 1.2 to 3.8: ";
		cin >> diveDiffi;
	}

	float highestNum, lowestNum;				//holds the highest and the lowest number
	//highestNum = score[0];
	//lowestNum = score[0];

	cout << "Enter a score between 0 and 10 for each judge." <<endl;
	//user input.
	for (int row = 0; row < SCORES; row++)
	{	
		//highestNum = score[0];
		//lowestNum = score[0];
		 cout << "Enter judge " << row + 1 << " score: ";
		cin >> score[row];

		//while loop to ensure the scores entered are in the range of 0-10. 
		while (score[row] <= 0 || score[row] >=10)
		{
			cout << "Enter a score between 0 and 10." << endl;
			cout << "Enter the judge " << row + 1 << " score: ";
			cin >> score[row];
		} 
	}

	//this for loop determines the highest score.
	highestNum = score[0];
	for (int det = 0;det < SCORES; det++) 
	{
		if (score[det] > highestNum)
		{
			highestNum = score[det];
		}
	}

	// another for loop to determine the lowest score.
		lowestNum = score[0];
		for (int det1 = 0; det1 < SCORES; det1++)
		{
			if (score[det1] < lowestNum)
			{
				lowestNum = score[det1];
			}
		}

		const float MULTIPLIER = 0.6;			//holds the multiplier that determines the total score of the diver.
	float sum =0, remainSum, totalScore;			// initialize sum as accumulator and remainSum to hold thetotal after highest and lowest were removed.		
	
	//for loop to find total sum of scores
	for(float s : score)
	{
		sum += s;
	}

	remainSum = sum - highestNum - lowestNum;		//calculation for removing the highest and the lowest score

	//total score
	totalScore = remainSum * diveDiffi * MULTIPLIER;

	//output of overall total
	cout << "The overall score of the dive is " << totalScore << endl;

	return 0;
}

