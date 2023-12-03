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

void checkFiveNumbers(int& numberFirst, int& numberSecond, int& numberThird, int& numberFourth, int& numberFifth, string first, string second, string third, string fourth, string fifth) {
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
		string numberStringT{ third[0], third[1] };
		numberThird = stoi(numberStringT);
	}
	if (!checkNumberCard(third)) {
		string numberStringT{ third[0] };
		numberThird = stoi(numberStringT);
	}
	if (checkNumberCard(fourth)) {
		string numberStringF{ fourth[0], fourth[1] };
		numberFourth = stoi(numberStringF);
	}
	if (!checkNumberCard(fourth)) {
		string numberStringFo{ fourth[0] };
		numberFourth = stoi(numberStringFo);
	}
	if (checkNumberCard(fifth)) {
		string numberStringFi{ fifth[0], fifth[1] };
		numberFifth = stoi(numberStringFi);
	}
	if (!checkNumberCard(fifth)) {
		string numberStringFi{ fifth[0] };
		numberFifth = stoi(numberStringFi);
	}
}

void checkFirstAndSecondNumbers(int& numberFirst, int& numberSecond, string first, string second) {
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

void sortNumbers(int& firstNum, int& secondNum, int& thirdNum, int& fourthNum, int& fifthNum) {
	int nums[5]{ firstNum, secondNum, thirdNum, fourthNum, fifthNum };
	for (int i = 1; i < 5; i++) {
		int j = i - 1;
		while (j >= 0 && nums[j] < nums[j + 1]) {
			swap(nums[j], nums[j + 1]);
			j--;
		}
	}
	firstNum = nums[0];
	secondNum = nums[1];
	thirdNum = nums[2];
	fourthNum = nums[3];
	fifthNum = nums[4];
}

void checkSuit(string first, string second, string third, string fourth, string fifth, string& firstSuit, string& secondSuit, string& thirdSuit, string& fourthSuit, string& fifthSuit) {
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

int defineCombination(string first, string second, string third, string fourth, string fifth, string& combination, int& numberFirst, int& numberSecond) {
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	int fourthNumber = 0;
	int fifthNumber = 0;

	string firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit;

	checkFiveNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, first, second, third, fourth, fifth);

	sortNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber);

	checkSuit(first, second, third, fourth, fifth, firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit);

	//Проверка на флэш рояль (Стрит флэш от 10 до туза(14))
	if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit && fifthNumber == 10) {
		combination = "Flesh royal ";
		return 0;
	}
	else {
		//Проверка на стрит флэш (Стрит из пяти карт одной масти)
		if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit) {
			combination = "Strit flesh " + to_string(firstNumber);
			numberFirst = firstNumber;
			return 0;
		}
		else {
			//Проверка на каре (Четыре карты одного номинала)
			if (firstNumber == secondNumber && firstNumber == thirdNumber && firstNumber == fourthNumber) {
				combination = "Kare " + to_string(firstNumber);
				numberFirst = firstNumber;
				return 0;
			}
			if (secondNumber == thirdNumber && secondNumber == fourthNumber && secondNumber == fifthNumber) {
				combination = "Kare " + to_string(secondNumber);
				numberFirst = secondNumber;
				return 0;
			}
			else {
				//Проверка на фулл хаус (Пара и тройка)
				if (firstNumber == secondNumber && thirdNumber == fourthNumber && thirdNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(thirdNumber) + " and para: " + to_string(firstNumber);
					numberFirst = thirdNumber;
					numberSecond = firstNumber;
					return 0;
				}
				if (secondNumber == thirdNumber && firstNumber == fourthNumber && firstNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(secondNumber);
					numberFirst = firstNumber;
					numberSecond = secondNumber;
					return 0;
				}
				if (thirdNumber == fourthNumber && firstNumber == secondNumber && firstNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(thirdNumber);
					numberFirst = firstNumber;
					numberSecond = thirdNumber;
					return 0;
				}
				if (fourthNumber == fifthNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(fourthNumber);
					numberFirst = firstNumber;
					numberSecond = fourthNumber;
					return 0;
				}
				else {
					//Проверка на флэш (Пять карт одной масти)
					if (firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit) {
						combination = "Flesh " + to_string(firstNumber);
						numberFirst = firstNumber;
						return 0;
					}
					else {
						//Проверка на стрит (Пять карт идущих друг за другом)
						if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1) {
							combination = "Strit " + to_string(firstNumber);
							numberFirst = firstNumber;
							return 0;
						}
						else {
							//Проверка на тройку
							if (firstNumber == secondNumber && firstNumber == thirdNumber) {
								combination = "Set " + to_string(firstNumber);
								numberFirst = firstNumber;
								return 0;
							}
							if (secondNumber == thirdNumber && secondNumber == fourthNumber) {
								combination = "Set " + to_string(secondNumber);
								numberFirst = secondNumber;
								return 0;
							}
							if (thirdNumber == fourthNumber && thirdNumber == fifthNumber) {
								combination = "Set " + to_string(thirdNumber);
								numberFirst = thirdNumber;
								return 0;
							}
							else {
								//Проверка на две пары
								if (firstNumber == secondNumber && thirdNumber == fourthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(thirdNumber);
									numberFirst = firstNumber;
									numberSecond = thirdNumber;
									return 0;
								}
								if (firstNumber == secondNumber && thirdNumber == fifthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(thirdNumber);
									numberFirst = firstNumber;
									numberSecond = thirdNumber;
									return 0;
								}
								if (firstNumber == thirdNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (firstNumber == thirdNumber && fourthNumber == secondNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (firstNumber == fourthNumber && secondNumber == fifthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = secondNumber;
									return 0;
								}
								if (firstNumber == fourthNumber && secondNumber == thirdNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = secondNumber;
									return 0;
								}
								if (firstNumber == fifthNumber && secondNumber == thirdNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = secondNumber;
									return 0;
								}
								if (firstNumber == fifthNumber && secondNumber == fourthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = secondNumber;
									return 0;
								}
								else {
									//Проверка на пару
									if (firstNumber == secondNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (firstNumber == thirdNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (firstNumber == fourthNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (firstNumber == fifthNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (secondNumber == thirdNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
										return 0;
									}
									if (secondNumber == fourthNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
										return 0;
									}
									if (secondNumber == fifthNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
										return 0;
									}
									if (thirdNumber == fourthNumber) {
										combination = "Para " + to_string(thirdNumber);
										numberFirst = thirdNumber;
										return 0;
									}
									if (thirdNumber == fifthNumber) {
										combination = "Para " + to_string(thirdNumber);
										numberFirst = thirdNumber;
										return 0;
									}
									if (fourthNumber == fifthNumber) {
										combination = "Para " + to_string(fourthNumber);
										numberFirst = fourthNumber;
										return 0;
									}
									else {
										combination = "High card " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
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

void defineCombination(string first, string second, string& combination, int& number) {
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