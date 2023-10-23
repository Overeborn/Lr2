#include <iostream> // include library input/output
#include <cmath> // include library base math operations
using namespace std; // icnlude namespace std 

int main() { // begin
	cout << "Integer 19" << endl;//start Integer 19

	int h, m, s, N;// enter variables 

	cout << "Enter a values of seconds passed: " << endl; 
	cout << ">>> ";                          // request the N 
	cin >> N;

	cout << "set time: " << endl; // request the values for timer 
	cout << "enter a values of hour (0-24): " << endl; // hours
	cout << ">>> ";
	cin >> h;
	cout << "enter a values of minute (0-60): " << endl; //minuts 
	cout << ">>> ";
	cin >> m;
	cout << "enter a values of second (0-60): " << endl;//seconds 
	cout << ">>> ";
	cin >> s;

	cout << "Time before passed second: " << endl; // output timer befor passed seconds 
	cout << ">>> " << h << ":" << m << ":" << s << endl;

	cout << '\n';
	
	h += N / 3600; // calculàtion of time 
	m += N / 60;  
	N = N % 60;
	s += N ;

	cout << "Time after passed second:" << endl; // output timer after passed seconds 
	cout << ">>> " << h << ":" << m << ":" << s << endl;

	cout << '\n';

	cout << "Boolean2 " << endl; // start Boolean 2

	int A; //enter variables 

	cout << "enter a value of A: " << endl; //request the A
	cout << ">>> ";
	cin >> A;

	if (A % 2 == 0) // conition "if"
	{
		cout << ">>> number shall be an even" << endl; // option 1
	}
	else 
	{
		cout << ">>> number shall not be an even" << endl; //option 2
	}

	cout << '\n';

	cout << "Math 28" << endl; //start Math 28

	double y;
	double x;

	double a;
	double b;  // enter the variables 
	double c;

	double a1;
	double b1;
	               
	double a2;
	double b2;

	double c1;
	double c2; // enter the variables 
	double c3;

	double x1;
	double x2;
	double x3;


	const double e = 2.71; // enter constant

	cout << "enter the value of X: " << endl; //request the X
	cout << ">>> " << endl;
	cin >> x;

	a = -2 * x; //calculated power of E 
	b = pow(e, a);//exponentiation E 
	c = sin(19 * (3.14 / 180)); // calculated sin 19°
	a1 = sin(2 * x + c); //calculated sin 
	b1 = pow(a1, 3);// exponentiation of expression
	
	x1 = b * b1; // calculated of first part

	a2 = fabs(x - 2 * sin(x)); //expression module

	b2 = fabs(4 - sqrt(a2)); //expression module with absolute value 

	c1 = sqrt(fabs(4 - b2));//absolute value with expression module 

	c2 = cbrt(c1); //calculating cube roots

	x2 = c2; //appropriation second part 

	c3 = 1 / 3 * tan(x) * log2(pow(x,3)); // calculated of third part 

	x3 = c3; //appropriation third part

	y = x1 / x2 + x3;// calculation all 

	cout << "Values of y: " << endl; // output values of y
	cout << ">>> " << y << endl;

    return 0; //output to OC
} // end
