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
		cout << "You recieved an A";
	}
	else if (grade >= 80 and grade <= 89) {
		cout << "You recieved a B";
	}
	else if (grade >= 70 and grade <= 79) {
		cout << "You recieved a C";
	}
	else if (grade >= 60 and grade <= 69) {
		cout << "You recieved a D";
	}
	else {
		cout << "You recieved an F";
	}
}