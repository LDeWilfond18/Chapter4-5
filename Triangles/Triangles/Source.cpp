#include <iostream>
#include <string>

using namespace std;

int isocelesTriangle() {
	int area;
	int base;
	int height;
	int perimeter;
	cout << "What is your height? ";
	cin >> height;
	cout << "What is your base? ";
	cin >> base;
	area = base * height / 2;
	perimeter = 2 * area + base;
	cout << "Your area is " << area << " Your perimeter is " << perimeter;

	return 0;
}
int equilateralTriangle() {
	int side;
	double area;
	double perimeter;
	cout << "What is the length of your side? ";
	cin >> side;
	area = sqrt(3) / 4 * (side * side);
	perimeter = side + side + side;

	cout << "Your area is " << area << " Your perimeter is " << perimeter;

	return 0;
}
int rightTriangleHypotenuse() {
	double adjacent;
	double opposite;
	double c;
	double result;

	cout << "What is your adjacent length? ";
	cin >> adjacent;
	cout << "What is your Opposite length? ";
	cin >> opposite;

	c = adjacent * adjacent + opposite * opposite;
	result = sqrt(c);
	cout << "The Hypotenuse is " << result;

	return 0;
}
int rightTriangleSide() {
	double side;
	double hypo;
	double missingSide;
	double result;

	cout << "Enter your hypotenuse ";
	cin >> hypo;
	cout << "Enter your other side ";
	cin >> side;

	missingSide = hypo * hypo + side * side;
	result = sqrt(missingSide);
	cout << "Your missing side is " << result;
	return 0;
}
int rightTriangle() {

	int chooseOption;

	cout << "What are you solving for? ";
	cout << "Find Hypotenuse - 1 \nMissing side - 2 ";
	cin >> chooseOption;

	if (chooseOption == 1) {
		rightTriangleHypotenuse();
	}
	else if (chooseOption == 2) {
		rightTriangleSide();
	}
	/*else if (chooseOption == 3) {
		main();
	}*/
	else
		cout << "Not an option ";
	return 0;
}


int main() {

	double chooseTriangle;

	cout << "Welcome to the triangle calculator" << endl;
	cout << "What type of triangle are you trying to solve for? " << endl;
	do {
		cout << "\n";
	cout << "1 - Right Triangle\n2 - Isoceles\n3 - Equilateral ";
	cin >> chooseTriangle;


	
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