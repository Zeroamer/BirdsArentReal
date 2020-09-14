#include <iostream>

using namespace std;

int main()
{
	bool birdsAreReal = false;

	printf("Are birds real? (Y/N): ");

	string userInput;
	cin >> userInput;

	if (userInput == "Y" || userInput == "y") {
		cout << "BIRDS AREN'T REAL! GOVERNMENT PROPAGANDA! WAKE UP SHEEPLE, THEY'RE DRONES!" << endl;
		cout << " " << endl;
		cout << "You're disgusting, bye." << endl;
		cout << " " << endl;
		exit;
	}

	if (userInput == "N" || userInput == "n") {
		cout << "You saw the light comrade, welcome aboard." << endl;
		cout << "You have unlocked the secret treasure... A big pile of Nothing!" << endl;
		cout << "But at least you have my respect... I must go now, Goodbye." << endl;
		cout << " " << endl;
		exit;
	}

	if (userInput != "Y" && userInput != "y" && userInput != "N" && userInput != "n")
	{
		cout << "What the fuck did you just fucking say to me, you little bitch?" << endl;
		cout << "I'll have you know I graduated top of my class in the Navy Seals, and I've been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills." << endl;
		cout << "[...]" << endl;

	}

}