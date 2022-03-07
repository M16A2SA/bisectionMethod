#include <iostream>
#include <iomanip>
#include "methods.h"

using namespace std;




int main() {
	cout << "function is y=log(x)" << endl;
	cout << "it's zero point is: " << bisection(0, 2, 0.01);
	return 0;
}