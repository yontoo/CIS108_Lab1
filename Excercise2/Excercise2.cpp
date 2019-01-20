#include <iostream>

#include <string>

using namespace std;

int main()
{
	cout << "Enter your first name. " << endl;	//Output prompts user's first name
	string first_name;						//Create the first_name variable
	cin >> first_name;						//take inputed characters and read into first_name
	cout << "Enter your last name." << endl;	//Prompt user to input last name
	string last_name;						//Creates last_name variable
	cin >> last_name;						//reads inputed characters to last_name
	cout << "Enter your age." << endl;		//Prompt user to input age
	int age;								//Creates the variable "age" (integer)
	cin >> age;								//read inputed integer to variable "age"
	cout << "How confident are you in programmers in percentage (0-100)" << endl;		//Prompt the user to input their confidence in programmers
	int confidence;			//Creates the integer confidence
	cin >> confidence;		//read inputed integer to variable "confidence"
	cout << "Hello " << first_name << " " << last_name << ", nice to meet you!" << endl;		//Greet the user using their first and last name
	cout << "You might be " << age << " in human years, but in dog years you are " << age * 7 << "." << endl;		//Tell the user their age and their age in dog years by multiplying the integer "age" by 7
	double confidence_deci = static_cast<double>(confidence) / 100;				//Creates the double "confidence_deci" by converting the integer "confidence" into a double by using the operator static_cast and dividing it by 100. Otherwise "confidence_deci" is just 0 after the division.
	if (confidence_deci < 0.5)		//Checks to see if confidence_deci is less than 0.5
		cout << "I agree, programmers can't be trusted!" << endl;		//If it is true, then output "I agree, programmers can't be trusted!"
	else
		cout << "Writing good code takes hard work!" << endl;		//If the if statement is false, then output "Writing good code takes hard work!"
	return(0);		//End
}
