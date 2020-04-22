//----------------------------------------------------------
	//  Class: CMPSC 121
	//  Project #5
	//  Due Date: 03/18/20
	/* Brief Project Description:
	This program calculates the balance of a savings account.
	It asks the user to input the annual interest rate, the starting balance
	and also the amount of month the account have been open for.
	The program continues to ask the user the amount of deposits
	and withdrawals each month the account is opened for.
	At the end it displays the ending balance, total deposits,
	total withdrawal and total interest accumulated.
	However the program terminate immediately at anytime the balance
	reaches a negative number.
	*/
	//----------------------------------------------------------

#include <iostream>
#include<iomanip>

using namespace std;

int main() {

	int monthAccOpened;							//holds the months account has been opened for.
	double sBal, annualInR, monthlyInR;			//holds the start balance, annual and monthly interest rates.
	double endBal = 0;							//hold end balance after each month
	
	//user inputs
	cout << "How many months has the account opened for: ";
	cin >> monthAccOpened;

	cout << "What is the starting balance of your saving account?: $";
	cin >> sBal;

	cout << "What is the annual interest rate?(eg.0.03): ";
	cin >> annualInR;

	//monthly interest rate calculation
	monthlyInR = annualInR / 12;

	double withdrawn, deposit;				//endBal holds the end balance after every month.
	double totalWithdrawn = 0, totalDeposit = 0, totalInterest = 0;
				


		//loop to ask your the amount deposited and withdrawn
	for (int i = 1; i <= monthAccOpened; i++)
	{
		//user inputs for deposit and withdraw
		cout << "Month " << i << endl;
		cout << "\tEnter amount deposit for this month: $";
		cin >> deposit;

		//while loop for making sure deposit is a positive number
		while (deposit < 0) {
			cout << "Enter a positive number!" << endl;
			cout << "\tEnter amount deposit for this month: $";
			cin >> deposit;
		}

		cout << "\tEnter amount withdrawn for this month: $";
		cin >> withdrawn;

		//while loop for making sure withdrawn amount is a positive number
		while (withdrawn < 0)
		{
			cout << "Enter a positive number!" << endl;
			cout << "\tEnter amount withdrawn for this month: $";
			cin >> withdrawn;
		}

		
			//accumulates deposits and withdrawals
			totalDeposit += deposit;
			totalWithdrawn += withdrawn;

			//end balance and interest calculation.
			endBal = sBal + totalDeposit - totalWithdrawn;
			totalInterest += (endBal * monthlyInR);   
		
			// this terminates the for loop when the balance reach a negative number
		if (endBal<0)  
		{
			break;
		}

		
	}
	

	
	
		//if the balance reach a negative number the program displays this.
	if (endBal < 0) {
		cout << endl;
		cout << "Your account is closed due to low balance." << endl;
	}
	// or else it displays the ending balance, total deposits and withdrawal made and the total amount of interest.
	else
	{	//set a fixed precision for output
		cout <<left<< fixed << setprecision(2) ;
		cout << endl << "Ending balance: " << setw(19) << "$"  << (endBal + totalInterest) << endl;
		cout << "Total amount of deposits:" << setw(11) << "$"  << totalDeposit << endl;
		cout << "Total amount of withdrawals:" << setw(8) << "$"  << totalWithdrawn << endl;
		cout << "Total amount of interest earned:" << setw(5) << "$"  << totalInterest << endl;

	}


	return 0;
}
