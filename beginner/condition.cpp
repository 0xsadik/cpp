// #include<iostream>
// using namespace std;

// int main()
// {
// 	// #ifndef TORIKUS
// 	// 	freopen("input.txt", "r", stdin);
// 	// 	freopen("output.txt", "w", stdout);
// 	// #endif

// 	// ------------------------------------


// 	int savings;
// 	cin >> savings;
// 	// if(savings > 5000) {
// 	// 	cout << "He will date Neha!" << endl;
// 	// }
// 	// else {
// 	// 	cout << "He will date Rashmi!" << endl;
// 	// }
	

// 	if(savings > 5000) {
// 		cout << "He will date Neha!" << endl;
// 	}
// 	else if(savings > 2000) {
// 		cout << "He will date Rashmi!" << endl;
// 	}
// 	else {
// 		cout << "He will go with his friends!";
// 	}
	


// }






#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	// cin >> a >> b >> c;
	a = 10;
	b = 17;
	c = 15;

	if (a > b) {
		if (a > c) {
			cout << a << endl;
		}
		else {
			cout << c << endl;
		}
	}
	else {
		if (b > c) {
			cout << b << endl;
		}
		else {
			cout << c << endl;
		}
	}
}