#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;



int main() {
	double itemOne;
	double itemTwo;
	double itemThree;
	double itemFour;
	double itemFive;
	double subTotal;
	double salesTax;
	double total;

	itemOne = 15.95;
	itemTwo = 24.95;
	itemThree = 6.95;
	itemFour = 12.95;
	itemFive = 3.95;
	subTotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
	salesTax = subTotal * 0.07;
	total = subTotal + salesTax;
	cout << "Price of item 1 = " << itemOne << endl;
	cout << "Price of item 2 = " << itemTwo << endl;
	cout << "Price of item 3 = " << itemThree << endl;
	cout << "Price of item 4 = " << itemFour << endl;
	cout << "Price of item 5 = " << itemFive << endl;
	cout << "Subtotal =" << subTotal << endl;
	cout << "Sales Tax= " << salesTax << endl;
	cout << "Total =" << total << endl;
	
	system("pause");
}


