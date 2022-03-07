#include <iostream>
#pragma once
using namespace std;
typedef long long ll;

ll qpow(int a, int n) {
	if (n == 0) {
		return 1;
	}
	else if(n % 2 == 1) {
		return qpow(a, n - 1) * a;
	}
	else {
		ll temp = qpow(a, n / 2);
		return temp * temp;
	}
}


long double function(long double x) {
	long double y = x;
	return y;
}

//a for left, b for right, c for middle, delta for allowed delta
long double bisection(long double a, long double b, long double delta) {
	long double c;
	do {
		c = (a + b) / 2;
		if (::function(a) * ::function(c) < 0) {
			b = c;
			if (abs(a - b) < delta) {
				return a;
			}
			else continue;
		}

		else {
			if (::function(c) == 0) {
				a = c;
				return a;
			}
			else {
				a = c;
				if (abs(a - b) < delta) {
					return a;
				}
				else continue;
			}
		}
	} while (1);
}