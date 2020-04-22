
#include <iostream>
#include<iomanip>

using namespace std;

//function prototype
double sumcal(double);

int main()
{
	int i;
	cout << "\ti" << setw(14) << "m(i)" << endl;

	for (i = 1; i <= 20; i++)
	{
		

		double sum = sumcal(i);
		cout << "\t" << (static_cast <int>(i))<< setw(12)  << sum << endl;
		
}
	
	return 0;
}


// sum calculation function
double sumcal(double i)
{
	
		static double sum = 0.0;
		double cal;
		
		cal = static_cast <double>(i) / (i + 1);
		sum =sum + cal;

	return sum;	
}

