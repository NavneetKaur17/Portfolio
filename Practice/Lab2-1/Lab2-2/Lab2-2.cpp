#include <iostream>
// Lab 2 part 2
// Name : Navneet Kaur
// Date : September 28, 2022

using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cin >> num1;
	cin >> num2;
	
	
	
	num3 = num1 + num2;
	cout << num1 << " + " << num2 << " = " << num3 << endl;

	num3 = num1 - num2;
	cout << num1 << " - " << num2 << " = " << num3 << endl;

	num3 = num1 * num2;
	cout << num1 << " * " << num2 << " = " << num3 << endl;

	num3 = num1 / num2;
	cout << num1 << " / " << num2 << " = " << num3 << endl;

	num3 = num1 % num2;
    cout << num1 << " % " << num2 << " = " << num3 << endl;
	
	return 0;
}