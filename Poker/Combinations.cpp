#include "Dependies.cpp"

void algorithm(int& count);
bool checkWithoutDeck(int& index, int withoutDeck[]);

void issuingCards(string deck[], string& first, string& second, string& third, int withoutDeck[], int& counterDeck) {
	for (int i = 0; i <= 2; i++) {
		int examination = true;
		while (examination) {
			int index = 99;
			algorithm(index);
			examination = checkWithoutDeck(index, withoutDeck);
			if (i == 0 && examination != 1) {
				first = deck[index];
				withoutDeck[counterDeck] = index;
				counterDeck++;
			}
			if (i == 1 && examination != 1) {
				second = deck[index];
				withoutDeck[counterDeck] = index;
				counterDeck++;
			}
			if (i == 2 && examination != 1) {
				third = deck[index];
				withoutDeck[counterDeck] = index;
				counterDeck++;
			}
		}
	}
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
		string numberStringT{ third[0], second[1] };
		numberThird = stoi(numberStringT);
	}
	if (!checkNumberCard(third)) {
		string numberStringT{ third[0] };
		numberThird = stoi(numberStringT);
	}
	if (checkNumberCard(fourth)) {
		string numberStringF{ fourth[0], second[1] };
		numberFourth = stoi(numberStringF);
	}
	if (!checkNumberCard(fourth)) {
		string numberStringFo{ fourth[0] };
		numberFourth = stoi(numberStringFo);
	}
	if (checkNumberCard(fifth)) {
		string numberStringFi{ fifth[0], second[1] };
		numberFifth = stoi(numberStringFi);
	}
	if (!checkNumberCard(fifth)) {
		string numberStringFi{ fifth[0] };
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

void sortNumbers(int &firstNum, int &secondNum, int &thirdNum, int &fourthNum, int &fifthNum) {
	int nums[5]{ firstNum,secondNum,thirdNum,fourthNum,fifthNum };
	int num = 0;
	for (int i = 0; i < 5 - 1; i++) {
		for (int j = 0; j < 5 - 1; j++) {
			if (nums[j] < nums[j + 1]) {
				num = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = num;
			}
		}
	}
}

void checkSuit(string first, string second, string third, string fourth, string fifth, string &firstSuit, string &secondSuit, string &thirdSuit, string &fourthSuit, string &fifthSuit) {
	string cards[5]{ first, second, third, fourth, fifth };
	string suits[5]{ firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit };
	for (int i = 0; i < 5; i++) {
		if (checkNumberCard(cards[i])) {
			//достать подстроку после 1 индекса
			suits[i] = cards[i].substr(2, 10);
		}
		else {
			//после 0 индекса
			suits[i] = cards[i].substr(1, 10);
		}
	}
	firstSuit = suits[0];
	secondSuit = suits[1];
	thirdSuit = suits[2];
	fourthSuit = suits[3];
	fifthSuit = suits[4];
}

void defineCombination(string first, string second, string third, string fourth, string fifth, string &combination, int &numberFirst, int &numberSecond) {
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	int fourthNumber = 0;
	int fifthNumber = 0;

	string firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit;

	checkFiveNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, first, second, third, fourth, fifth);

	sortNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber);

	checkSuit(first, second, third, fourth, fifth, firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit);

	if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit && fifthNumber == 14) {
		combination = "Flesh royal ";
	}
	else {
		if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit) {
			combination = "Strit flesh " + to_string(firstNumber);
			numberFirst = firstNumber;
		}
		else {
			if (firstNumber == secondNumber && firstNumber == thirdNumber && firstNumber == fourthNumber) {
				combination = "Kare " + to_string(firstNumber);
				numberFirst = firstNumber;
			}
			if (secondNumber == thirdNumber && secondNumber == fourthNumber && secondNumber == fifthNumber) {
				combination = "Kare " + to_string(secondNumber);
				numberFirst = secondNumber;
			}
			else {
				if (firstNumber == secondNumber && thirdNumber == fourthNumber && thirdNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(thirdNumber) + " and para: " + to_string(firstNumber);
					numberFirst = thirdNumber;
					numberSecond = firstNumber;
				}
				if (secondNumber == thirdNumber && firstNumber == fourthNumber && firstNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(secondNumber);
					numberFirst = firstNumber;
					numberSecond = secondNumber;
				}
				if (thirdNumber == fourthNumber && firstNumber == secondNumber && firstNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(thirdNumber);
					numberFirst = firstNumber;
					numberSecond = thirdNumber;
				}
				if (fourthNumber == fifthNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(fourthNumber);
					numberFirst = firstNumber;
					numberSecond = fourthNumber;
				}
				else {
					if (firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit) {
						combination = "Flesh " + to_string(firstNumber);
						numberFirst = firstNumber;
					}
					else {
						if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1) {
							combination = "Strit " + to_string(firstNumber);
							numberFirst = firstNumber;
						}
						else {
							if (firstNumber == secondNumber && firstNumber == thirdNumber) {
								combination = "Set " + to_string(firstNumber);
								numberFirst = firstNumber;
							}
							if (secondNumber == thirdNumber && secondNumber == fourthNumber) {
								combination = "Set " + to_string(secondNumber);
								numberFirst = secondNumber;
							}
							if (thirdNumber == fourthNumber && thirdNumber == fifthNumber) {
								combination = "Set " + to_string(thirdNumber);
								numberFirst = thirdNumber;
							}
							else {
								if (firstNumber == secondNumber && thirdNumber == fourthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(thirdNumber);
									numberFirst = firstNumber;
									numberSecond = thirdNumber;
								}
								if (secondNumber == thirdNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = secondNumber;
									numberSecond = fourthNumber;
								}
								else {
									if (firstNumber == secondNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
									}
									if (secondNumber == thirdNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
									}
									if (thirdNumber == fourthNumber) {
										combination = "Para " + to_string(thirdNumber);
										numberFirst = thirdNumber;
									}
									if (fourthNumber == fifthNumber) {
										combination = "Para " + to_string(fourthNumber);
										numberFirst = fourthNumber;
									}
									else {
										combination = "High card " + to_string(firstNumber);
										numberFirst = firstNumber;
									}
								}
							}
						}
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