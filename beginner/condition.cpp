#include<iostream>
using namespace std;

int main()
{
	#ifndef TORIKUS
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	// ------------------------------------


	int savings;
	cin >> savings;

	if(savings > 5000) {
		cout << "He will date Neha!" << endl;
	}
	else {
		cout << "He will date Rashmi!" << endl;
	}

}