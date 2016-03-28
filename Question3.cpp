///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Bongani Ngobese
// Student No:214513896
// Date: 28/03/2016
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
	friend bool operator >(Fraction &a,Fraction &b)
	{
		if (a.num /a.denom >b.num /b.denom)           //check whether fraction ais greater than fraction 2
		{
			return true;
		}
		return false;
	};
	

private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom<< endl; };
	Fraction add(int a, Fraction b)
	{
		b.num = a*denom + num;
		b.denom = denom;
		return b;
	};
	Fraction add(Fraction a, int b)
	{
		a.num = b*denom + num;                

		a.denom = denom;
		return a;
	};

};

int main()
{
	Fraction one(1, 2);
	one = one.add(one, 1);
	one.print();
	Fraction two(3, 2);
	two = two.add(1, two);
	two.print();


	if (one > two)
	{
		cout << "Fraction 1 is > than Fraction 2" << endl;
	}
	else
	{
		cout << "Fraction 2 is > Fraction 1" << endl;
	}

}