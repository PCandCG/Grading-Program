#include <iostream>
using namespace std;

int main() {
	int grade;
	cout << "Please enter grade: ";
	cin >> grade;
	if (grade == 100) {
		cout << "Well done! A perfect score";
	}
	else if (grade >= 90 and grade <= 100) {
		cout << "You recieved an A" << endl;
	}
	else if (grade >= 80 and grade <= 89) {
		cout << "You recieved a B" << endl;
	}
	else if (grade >= 70 and grade <= 79) {
		cout << "You recieved a C" << endl;
	}
	else if (grade >= 60 and grade <= 69) {
		cout << "You recieved a D" << endl;
	}
	else {
		cout << "You recieved an F" << endl;
	}
	system("PAUSE");
}
