#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string college;
	string stringAnswer;
	
	cout << "What is your age? ";
	cin >> age;

	if (age <= 12) {
		stringAnswer = "You are a minor";
	}
	else if (age > 13 && age <= 18) {
		stringAnswer = "You are stupid";
	}
	else if (age > 18 && age <= 25)
	{
		cout << "Did you go to college? Yes or No >>";
		cin >> college;
		if (college == "Yes")
		{
			stringAnswer = "Im Broke!";
		}
		else {
			stringAnswer = "I wish I went to college!";
		}
	}
	else if (age > 26 && age <= 30) {
		stringAnswer = "You finally got a real job";
	}
	else if (age > 31 && age <= 40) {
		stringAnswer = "You are fat and tired of working";
	}
	else if (age > 41 && age <= 50) {
		stringAnswer = "Can I just retire already?";
	}
	else if (age > 51 && age <= 75) {
		stringAnswer = "Finally retirement";
	}
	else if (age > 76) {
		stringAnswer = "Old fart";
	}
	cout << stringAnswer << endl;


	system("pause");
	return 0;
}