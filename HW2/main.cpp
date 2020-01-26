#include <iostream>
#include <cmath>
using namespace std;

int main()
{

double a,b,c;
double delta;
double x1,x2;
double real,imaginary;

cin >> a >> b >> c;


if ((b<0)&&(c>=0)) {
cout << a << "x^2 - " << -b << "x + " << c << " = 0" << endl;
}

else if ((b>=0)&&(c<0)) {
cout << a << "x^2 + " << b << "x - " << -c << " = 0" << endl;
}

else if ((b<0)&&(c<0)) {
cout << a << "x^2 - " << -b << "x - " << -c << " = 0" << endl;
}

else {
cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}

delta = pow(b,2)-4*a*c;

if ((delta>0) && (a==0) && (b!=0) && (c!=0)) {
	x1 = -c / b;
	cout << "x = " << x1 << endl;
}

else if ((a==0) && (b==0) && (c!=0)) {

	cout << "Unable to determine root(s).\n";
}

else if ((a==0) & (b==0) && (c==0)) {

	cout << "Unable to determine root(s).\n";
}

else if ((delta>0) && (a!=0) && (b!=0) && (c!=0)) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
	cout << "x = " << x2 << endl << "x = " << x1 << endl;
}

else if ((delta==0) && (a!=0) && (b!=0) && (c!=0)) {
	x1 = - b / (2 * a);
	cout << "x = " << x1 << endl;
}

else {
	real = -b/(2*a);
	
	if (a>0) {
		imaginary = (sqrt(-delta))/(2*a);
		cout << "x = " << real << " - " << imaginary << "i" << endl;
		cout << "x = " << real << " + " << imaginary << "i" << endl;
	}
	else {
		imaginary = -(sqrt(-delta))/(2*a);
		cout << "x = " << real << " + " << imaginary << "i" << endl;
		cout << "x = " << real << " - " << imaginary << "i" << endl;
	}
}
	
	
return 0;
}