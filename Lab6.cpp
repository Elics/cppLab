
//Lab #6


#include <iostream>

using namespace std;

//prototypes
int small(int, int, int);
void big(int, int, int);

int main() {
    int numb1, numb2, numb3;

    //user inputs
    cout << "Enter three numbers: ";
    cin >> numb1 >> numb2 >> numb3;

    //output display
   cout << "The smallest number is: " << small(numb1, numb2, numb3) << endl;
   
   // it calls big function
   big(numb1, numb2, numb3);

	return 0;
}

//small function definition
//small a value returning function
 int small(int num1, int num2, int num3) {
     if (num1 < num2 && num1 < num3)
        {
             return num1;
        }

     else if (num2 < num1 && num2 < num3)
     {
         return num2;
     }

     else
     {
         return num3;
     }
}


// big function definition
 //big as a void funtion
 void big(int n1, int n2, int n3) {
     if (n1 > n2 && n1 > n3)
     {
         cout << "The largest number is: " << n1 << endl;
     }

     else if (n2 > n1 && n2 > n3)
     {
         cout << "The largest number is: " << n2 << endl;
     }

     else
     {
      cout << "The largest number is: " << n3 << endl;   
     }

 }
 