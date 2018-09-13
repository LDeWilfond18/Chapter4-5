#include <iostream>
#include <string>

using namespace std;

int isocelesTriangle() {




	return 0;
}
int equilateralTriangle() {





	return 0;
}
int rightTriangle() {

	int chooseOption;

	cout << "What are you solving for? ";
	cout << "Parameter - 1\nMissing side - 2";
	cin >> chooseOption;

	if (chooseOption == 1) {

	}
	else if (chooseOption == 2) {

	}
	else
		cout << "Not an option";
	return 0;
}
int main() {

	int chooseTriangle;

	cout << "Welcome to the triangle calculator" << endl;
	cout << "What type of triangle are you trying to solve for? " << endl;
	cout << "1 - Right Triangle\n2 - Isoceles\n3 - Equilateral";
	cin >> chooseTriangle;


	do {
		if (chooseTriangle == 1) {
			rightTriangle();
		}
		else if (chooseTriangle == 2) {
			isocelesTriangle();
		}
		else if (chooseTriangle == 3) {
			equilateralTriangle();
		}
		else
			cout << "That is not an option";
	} while (chooseTriangle != 4);

	system("pause");
	return 0;
}