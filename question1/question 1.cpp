#include <iostream>

using namespace std;

int main () {
	
	// two integer values from the user and calculate the sum, difference, product, and quotient using the appropriate operators.
	
	int number1;
	int number2;
	double sum;
	double difference;
	double product;
	double quotient;
	float result;
	
	cout << " Enter number1: ";
	cin >> number1;
	cout << " Enter number2: ";
	cin >> number2;
	
	result = number1 + number2;
	cout << " the sum of two numbers is: " << result << endl;
	
	cout << "\n Enter number1: ";
	cin >> number1;
	cout << " Enter number2: ";
	cin >> number2;
	
	result = number1 - number2;
	cout << " the difference of two numbers is: " << result << endl;
	 
	cout << "\n Enter number1: ";
	cin >> number1;
	cout << " Enter number2: ";
	cin >> number2;
	
	result = number1 * number2;
	cout << " the product of two numbers is: " << result << endl;
	
	cout << "\n Enter number1: ";
	cin >> number1;
	cout << " Enter number2: ";
	cin >> number2;
	
	result = number1 / number2;
	cout << " the quotient of two numbers is: " << result << endl;
	
	cout << "\n thanks for using fred calculator bye bye! ";
	
	return 0;
}