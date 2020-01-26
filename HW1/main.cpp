#include <iostream>
#include <string>
using namespace std;

int main()
{
	
//constant
	int current_year = 2018;

//define variables
	string first_name,last_name;
	int birth_year;
	double height_in_feet,height_in_inches,height_in_cm,growth_rate;
	
//ask users for input
	cin>> first_name;
	cin>> last_name;
	cin>> birth_year;
	cin>> height_in_feet;
	cin>> height_in_inches;

//Calculations
	int age = current_year - birth_year; 
	height_in_cm = 2.54 * height_in_inches + 12 * 2.54 * height_in_feet;
	growth_rate = (height_in_cm - 51)/ age;
	
	cout<<"First name: ";
	cout<<"Last name: ";
	cout<<"Birth year: ";
	cout<<"Height in feet (do not include inches): ";
	cout<<"Height in inches (do not include feet): "<<endl;
	cout<<"Hello " <<first_name <<" " <<last_name <<"." <<endl;
	cout<<"You are " <<age <<" years old in " <<current_year <<"." <<endl;
	cout<<"Your height is " <<height_in_cm <<" cm." <<endl;
	cout<<"You grew an average of " <<growth_rate <<" cm per year (assuming you were 51 cm at birth)." <<endl;

return 0;
}