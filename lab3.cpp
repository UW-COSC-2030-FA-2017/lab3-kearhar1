//Kole Earhart
//Lab 3

#include <iostream>

using namespace std;



void sumShort(short n);

void sumLong(long n);

void factorial(long n);

void factorialDouble(long n);

void strange(long sum);

int main()

{
    //At n=256, a negative number is shown, which means that it overflows at that point.

	short a(254), b(255), c(256);

	sumShort(a);

	sumShort(b);

	sumShort(c);

    //Overflow occurs at n = 65536.

	long d(65534), e(65535), f(65536);

	sumLong(d);

	sumLong(e);

	sumLong(f);

    //At n=35, the sum comes back as infinite. This signifies that an overflow occured at n= 35.

	long g(33), h(34), i(35);

	factorial(g);

	factorial(h);

	factorial(i);

    //overflow occurs at n = 171 for the factorial using a double.

	long j(169), k(170), l(171);

	factorialDouble(j);

	factorialDouble(k);

	factorialDouble(l);



	strange(32);


    // It should stop at 4.4 but when a float is used it prints out 4.4.
    // When a double is used then it stops before 4.4.

	for (double i = 3.4; i < 4.4; i +=0.2) {

		cout << "i = " << i << endl;

	}

	return 0;

}


void sumShort(int short n) {

int short sum = 0;




	for (int short i = 0; i <= n; i++) {

		sum = sum + i;

	}


	cout << "The sum of shorts from 0 to " << n << " is:" << sum << endl;

}


void sumLong(int long n) {



	int long sum = 0;

	for (int long i = 0; i <= n; i++) {

		sum = sum + i;

	}

	cout << "The sum of longs from 0 to " << n << " is:" << sum << endl;

}





void factorial(long n) {



	float x = 1;

	for (long i = n; i > 0; i--) {

		x *= i;

	}

	cout << "The factorial of " << n << " is: " << x << endl;
}

void factorialDouble(long n) {



	double x = 1;

	for (long i = n; i > 0; i--) {

		x *= i;

	}

	cout << "The factorial of " << n << " when stored as a double is: " << x << endl;

}



void strange(long sum) {

	long x(0), y(0);

	for (long i = sum; i > 0; i--) {

		x = 1 / i;

		y += x;

	}

	cout << "The the sum of 0 to 1/" << sum << " is: " << y << endl;

	y -= 1.0;

	cout << "The sum - 1.0 is " << y << endl;

}


