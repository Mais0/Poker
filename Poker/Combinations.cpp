#include "Dependies.cpp"

void issuingCards(string first, string second, string third, string &combination) {

}

bool checkNumberCard(string first) {
	if (isdigit(first[1])) {
		return true;
	}
	else {
		return false;
	}
}

void checkFiveNumbers(int& numberFirst, int& numberSecond, int& numberThird, int &numberFourth, int& numberFifth, string first, string second, string third, string fourth, string fifth) {
	if (checkNumberCard(first)) {
		string numberStringF{ first[0],first[1] };
		numberFirst = stoi(numberStringF);
	}
	if (!checkNumberCard(first)) {
		string numberStringF{ first[0] };
		numberFirst = stoi(numberStringF);
	}
	if (checkNumberCard(second)) {
		string numberStringS{ second[0], second[1] };
		numberSecond = stoi(numberStringS);
	}
	if (!checkNumberCard(second)) {
		string numberStringS{ second[0] };
		numberSecond = stoi(numberStringS);
	}
	if (checkNumberCard(third)) {
		string numberStringT{ second[0], second[1] };
		numberThird = stoi(numberStringT);
	}
	if (!checkNumberCard(third)) {
		string numberStringT{ second[0] };
		numberThird = stoi(numberStringT);
	}
	if (checkNumberCard(fourth)) {
		string numberStringF{ second[0], second[1] };
		numberFourth = stoi(numberStringF);
	}
	if (!checkNumberCard(fourth)) {
		string numberStringFo{ second[0] };
		numberFourth = stoi(numberStringFo);
	}
	if (checkNumberCard(fifth)) {
		string numberStringFi{ second[0], second[1] };
		numberFifth = stoi(numberStringFi);
	}
	if (!checkNumberCard(fifth)) {
		string numberStringFi{ second[0] };
		numberFifth = stoi(numberStringFi);
	}
}

void checkFirstAndSecondNumbers(int &numberFirst, int &numberSecond, string first, string second) {
	if (checkNumberCard(first)) {
		string numberStringF{ first[0],first[1] };
		numberFirst = stoi(numberStringF);
	}
	if (!checkNumberCard(first)) {
		string numberStringF{ first[0] };
		numberFirst = stoi(numberStringF);
	}
	if (checkNumberCard(second)) {
		string numberStringS{ second[0], second[1] };
		numberSecond = stoi(numberStringS);
	}
	if (!checkNumberCard(second)) {
		string numberStringS{ second[0] };
		numberSecond = stoi(numberStringS);
	}
}

void defineCombination(string first, string second, string third, string fourth, string fifth, string &combination, int &numberFirst, int &numberSecond) {
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	int fourthNumber = 0;
	int fifthNumber = 0;

	checkFiveNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, first, second, third, fourth, fifth);
	
	if (firstNumber == secondNumber && thirdNumber == firstNumber && firstNumber == fourthNumber) {

	}
	else {
		if (firstNumber == secondNumber && thirdNumber == firstNumber) {
			combination = "Three " + to_string(firstNumber);
			numberFirst = firstNumber;
		}
		else {
			//Нужна дороботка
			if (firstNumber == secondNumber && thirdNumber == fourthNumber) {
				combination = "Double para " + to_string(firstNumber) + " and " + to_string(thirdNumber);
				numberFirst = firstNumber;
				numberSecond = thirdNumber;
			}
			else {
				if (firstNumber == secondNumber) {
					combination = "Para " + to_string(firstNumber);
					numberFirst = firstNumber;
				}
				else {
					if (firstNumber > secondNumber) {
						combination = "High card " + to_string(firstNumber);
						numberFirst = firstNumber;
					}
					else {
						combination = "High card " + to_string(secondNumber);
						numberFirst = secondNumber;
					}
				}
			}
		}
	}
}

void defineCombination(string first, string second, string &combination, int &number) {
	int firstNumber = 0;
	int secondNumber = 0;
	checkFirstAndSecondNumbers(firstNumber, secondNumber, first, second);
	if (firstNumber == secondNumber) {
		combination = "Para " + to_string(firstNumber);
		cout << combination;
		number = firstNumber;
	}
	else {
		if (firstNumber > secondNumber) {
			combination = "High card " + to_string(firstNumber);
			number = firstNumber;
		}
		else {
			combination = "High card " + to_string(secondNumber);
			number = secondNumber;
		}
	}
}