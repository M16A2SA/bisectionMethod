#include <iostream>
#include <ctime>
#include <iomanip>
#include "methods.h"

using namespace std;

const long double e = 2.7182818284590452;


int main() {
	clock_t Begin, End;
	double dur;
	cout << setprecision(10);
	Begin = clock();

	cout << qpow(2, 128) << endl;

	End = clock();

	dur = double(End - Begin) / CLK_TCK;
	cout << "Runned for " << dur << endl;

	Begin = clock();

	cout << pow(2, 1023) << endl;

	End = clock();

	dur = double(End - Begin) / CLK_TCK;
	cout << "Runned for " << dur << endl;
	return 0;
}