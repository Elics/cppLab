

#include <iostream>
#include <iomanip>

using namespace std;

//function protocol
float sumcal(float);

int main() {

	float i;
	cout << "\ti" << setw(13) << "\tm(i)" << endl;  // to display the title
	float sum;

	//for loop to calculate up to 20
	for (i = 1;i <= 20; i++)
	{ 	
		sum = sumcal(i);
		cout  << "\t" << static_cast <int>(i) << setw(12) 
			<<"\t" << sum << endl;
	}
	return 0;
}

// sumcal function for calculating the sum of the numbers.
float sumcal(float i)
{
	static float sum = 0;
	float cal;
	cal = i / (i + 1);
	sum += cal;
	
	return sum;
}
