// https://www.youtube.com/watch?v=cnT1oW5_ePM&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=4


#include<iostream>
using namespace std;

int main()
{
	int a; // declaration
	a = 12; // initialisation 

	cout << "size of int " << sizeof(a) << '\n';

	float b;
	cout << "size of float: " << sizeof(b) << '\n';

	char c;
	cout << "size of char is: " << sizeof(c) << '\n';


	bool d;
	cout << "size of bool is: " << sizeof(d) << endl;


	short int si;
	long int li;
	cout << "size of short int: " << sizeof(si) << endl;
	cout << "size of long int: " << sizeof(li) << endl;

	return 0;
}
