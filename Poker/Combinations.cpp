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

void issuingCard(string deck[], string& card, int withoutDeck[], int& counterDeck) {
	int examination = true;
	while (examination) {
		int index = 99;
		algorithm(index);
		examination = checkWithoutDeck(index, withoutDeck);
		if (examination != 1) {
			card = deck[index];
			withoutDeck[counterDeck] = index;
			counterDeck++;
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

void checkFiveNumbers(int& numberFirst, int& numberSecond, int& numberThird, int& numberFourth, int& numberFifth, string first, string second, string third, string fourth, string fifth) {
	if (checkNumberCard(first)) {
		string numberString{ first[0],first[1] };
		numberFirst = stoi(numberString);
	}
	if (!checkNumberCard(first)) {
		string numberString{ first[0] };
		numberFirst = stoi(numberString);
	}
	if (checkNumberCard(second)) {
		string numberString{ second[0], second[1] };
		numberSecond = stoi(numberString);
	}
	if (!checkNumberCard(second)) {
		string numberString{ second[0] };
		numberSecond = stoi(numberString);
	}
	if (checkNumberCard(third)) {
		string numberString{ third[0], third[1] };
		numberThird = stoi(numberString);
	}
	if (!checkNumberCard(third)) {
		string numberString{ third[0] };
		numberThird = stoi(numberString);
	}
	if (checkNumberCard(fourth)) {
		string numberString{ fourth[0], fourth[1] };
		numberFourth = stoi(numberString);
	}
	if (!checkNumberCard(fourth)) {
		string numberString{ fourth[0] };
		numberFourth = stoi(numberString);
	}
	if (checkNumberCard(fifth)) {
		string numberString{ fifth[0], fifth[1] };
		numberFifth = stoi(numberString);
	}
	if (!checkNumberCard(fifth)) {
		string numberString{ fifth[0] };
		numberFifth = stoi(numberString);
	}
}

void checkSixthNumbers(int& numberFirst, int& numberSecond, int& numberThird, int& numberFourth, int& numberFifth, int& numberSixth, string first, string second, string third, string fourth, string fifth, string sixth) {
	if (checkNumberCard(first)) {
		string numberString{ first[0],first[1] };
		numberFirst = stoi(numberString);
	}
	if (!checkNumberCard(first)) {
		string numberString{ first[0] };
		numberFirst = stoi(numberString);
	}
	if (checkNumberCard(second)) {
		string numberString{ second[0], second[1] };
		numberSecond = stoi(numberString);
	}
	if (!checkNumberCard(second)) {
		string numberString{ second[0] };
		numberSecond = stoi(numberString);
	}
	if (checkNumberCard(third)) {
		string numberString{ third[0], third[1] };
		numberThird = stoi(numberString);
	}
	if (!checkNumberCard(third)) {
		string numberString{ third[0] };
		numberThird = stoi(numberString);
	}
	if (checkNumberCard(fourth)) {
		string numberString{ fourth[0], fourth[1] };
		numberFourth = stoi(numberString);
	}
	if (!checkNumberCard(fourth)) {
		string numberString{ fourth[0] };
		numberFourth = stoi(numberString);
	}
	if (checkNumberCard(fifth)) {
		string numberString{ fifth[0], fifth[1] };
		numberFifth = stoi(numberString);
	}
	if (!checkNumberCard(fifth)) {
		string numberString{ fifth[0] };
		numberFifth = stoi(numberString);
	}
	if (checkNumberCard(sixth)) {
		string numberString{ sixth[0], sixth[1] };
		numberSixth = stoi(numberString);
	}
	if (!checkNumberCard(sixth)) {
		string numberString{ sixth[0] };
		numberSixth = stoi(numberString);
	}
}

void checkSeventhNumbers(int& numberFirst, int& numberSecond, int& numberThird, int& numberFourth, int& numberFifth, int& numberSixth, int& numberSeventh, string first, string second, string third, string fourth, string fifth, string sixth, string seventh) {
	if (checkNumberCard(first)) {
		string numberString{ first[0],first[1] };
		numberFirst = stoi(numberString);
	}
	if (!checkNumberCard(first)) {
		string numberString{ first[0] };
		numberFirst = stoi(numberString);
	}
	if (checkNumberCard(second)) {
		string numberString{ second[0], second[1] };
		numberSecond = stoi(numberString);
	}
	if (!checkNumberCard(second)) {
		string numberString{ second[0] };
		numberSecond = stoi(numberString);
	}
	if (checkNumberCard(third)) {
		string numberString{ third[0], third[1] };
		numberThird = stoi(numberString);
	}
	if (!checkNumberCard(third)) {
		string numberString{ third[0] };
		numberThird = stoi(numberString);
	}
	if (checkNumberCard(fourth)) {
		string numberString{ fourth[0], fourth[1] };
		numberFourth = stoi(numberString);
	}
	if (!checkNumberCard(fourth)) {
		string numberString{ fourth[0] };
		numberFourth = stoi(numberString);
	}
	if (checkNumberCard(fifth)) {
		string numberString{ fifth[0], fifth[1] };
		numberFifth = stoi(numberString);
	}
	if (!checkNumberCard(fifth)) {
		string numberString{ fifth[0] };
		numberFifth = stoi(numberString);
	}
	if (checkNumberCard(sixth)) {
		string numberString{ sixth[0], sixth[1] };
		numberSixth = stoi(numberString);
	}
	if (!checkNumberCard(sixth)) {
		string numberString{ sixth[0] };
		numberSixth = stoi(numberString);
	}
	if (checkNumberCard(seventh)) {
		string numberString{ seventh[0], seventh[1] };
		numberSeventh = stoi(numberString);
	}
	if (!checkNumberCard(seventh)) {
		string numberString{ seventh[0] };
		numberSeventh = stoi(numberString);
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

void sortNumbers(int& firstNum, int& secondNum, int& thirdNum, int& fourthNum, int& fifthNum, int& sixthNum) {
	int nums[6]{ firstNum, secondNum, thirdNum, fourthNum, fifthNum, sixthNum };
	for (int i = 1; i < 6; i++) {
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
	sixthNum = nums[5];
}

void sortNumbers(int& firstNum, int& secondNum, int& thirdNum, int& fourthNum, int& fifthNum, int& sixthNum, int& seventhNum) {
	int nums[7]{ firstNum, secondNum, thirdNum, fourthNum, fifthNum, sixthNum, seventhNum };
	for (int i = 1; i < 7; i++) {
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
	sixthNum = nums[5];
	seventhNum = nums[6];
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

void checkSuit(string first, string second, string third, string fourth, string fifth, string sixth, string& firstSuit, string& secondSuit, string& thirdSuit, string& fourthSuit, string& fifthSuit, string& sixthSuit) {
	string cards[6]{ first, second, third, fourth, fifth, sixth };
	string suits[6]{ firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit, sixthSuit };
	for (int i = 0; i < 6; i++) {
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
	sixthSuit = suits[5];
}

void checkSuit(string first, string second, string third, string fourth, string fifth, string sixth, string seventh, string& firstSuit, string& secondSuit, string& thirdSuit, string& fourthSuit, string& fifthSuit, string& sixthSuit, string& seventhSuit) {
	string cards[7]{ first, second, third, fourth, fifth, sixth, seventh };
	string suits[7]{ firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit, sixthSuit, seventhSuit };
	for (int i = 0; i < 7; i++) {
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
	sixthSuit = suits[5];
	seventhSuit = suits[6];
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
								if (firstNumber == secondNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (secondNumber == thirdNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = secondNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								else {
									//Проверка на пару
									if (firstNumber == secondNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (secondNumber == thirdNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
										return 0;
									}
									if (thirdNumber == fourthNumber) {
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

int defineCombination(string first, string second, string third, string fourth, string fifth, string sixth, string& combination, int& numberFirst, int& numberSecond) {
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	int fourthNumber = 0;
	int fifthNumber = 0;
	int sixthNumber = 0;

	string firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit, sixthSuit;

	checkSixthNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, sixthNumber, first, second, third, fourth, fifth, sixth);

	sortNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, sixthNumber);

	checkSuit(first, second, third, fourth, fifth, sixth, firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit, sixthSuit);

	//Проверка на флэш рояль (Стрит флэш от 10 до туза(14))
	if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit && fifthNumber == 10) {
		combination = "Flesh royal ";
		return 0;
	}
	if (secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && secondSuit == thirdSuit && secondSuit == fourthSuit && secondSuit == fifthSuit && secondSuit == sixthSuit && sixthNumber == 10) {
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
		if (secondNumber == thirdNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && secondSuit == thirdSuit && secondSuit == fourthSuit && secondSuit == fifthSuit && secondSuit == sixthSuit) {
			combination = "Strit flesh " + to_string(secondNumber);
			numberFirst = secondNumber;
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
			if (thirdNumber == fourthNumber && thirdNumber == fifthNumber && thirdNumber == sixthNumber) {
				combination = "Kare " + to_string(thirdNumber);
				numberFirst = thirdNumber;
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
				if (firstNumber == secondNumber && fourthNumber == fifthNumber && fourthNumber == sixthNumber) {
					combination = "Full house, set: " + to_string(fourthNumber) + " and para: " + to_string(firstNumber);
					numberFirst = fourthNumber;
					numberSecond = firstNumber;
					return 0;
				}
				if (secondNumber == thirdNumber && fourthNumber == fifthNumber && fifthNumber == sixthNumber) {
					combination = "Full house, set: " + to_string(fourthNumber) + " and para: " + to_string(secondNumber);
					numberFirst = fourthNumber;
					numberSecond = secondNumber;
					return 0;
				}
				if (fourthNumber == fifthNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(fourthNumber);
					numberFirst = firstNumber;
					numberSecond = fourthNumber;
					return 0;
				}
				if (fifthNumber == sixthNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(fifthNumber);
					numberFirst = firstNumber;
					numberSecond = fifthNumber;
					return 0;
				}
				if (fifthNumber == sixthNumber && secondNumber == thirdNumber && secondNumber == fourthNumber) {
					combination = "Full house, set: " + to_string(secondNumber) + " and para: " + to_string(fifthNumber);
					numberFirst = secondNumber;
					numberSecond = fifthNumber;
					return 0;
				}
				else {
					//Проверка на флэш (Пять карт одной масти)
					if (firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit) {
						combination = "Flesh " + to_string(firstNumber);
						numberFirst = firstNumber;
						return 0;
					}
					if (secondSuit == thirdSuit && secondSuit == fourthSuit && secondSuit == fifthSuit && secondSuit == sixthSuit) {
						combination = "Flesh " + to_string(secondNumber);
						numberFirst = secondNumber;
						return 0;
					}
					else {
						//Проверка на стрит (Пять карт идущих друг за другом)
						if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1) {
							combination = "Strit " + to_string(firstNumber);
							numberFirst = firstNumber;
							return 0;
						}
						if (secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1) {
							combination = "Strit " + to_string(secondNumber);
							numberFirst = secondNumber;
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
							if (fourthNumber == fifthNumber && fourthNumber == sixthNumber) {
								combination = "Set " + to_string(fourthNumber);
								numberFirst = fourthNumber;
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
								if (firstNumber == secondNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (firstNumber == secondNumber && fifthNumber == sixthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(fifthNumber);
									numberFirst = firstNumber;
									numberSecond = fifthNumber;
									return 0;
								}
								if (secondNumber == thirdNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = secondNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (secondNumber == thirdNumber && fifthNumber == sixthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fifthNumber);
									numberFirst = secondNumber;
									numberSecond = fifthNumber;
									return 0;
								}
								if (thirdNumber == fourthNumber && fifthNumber == sixthNumber) {
									combination = "Double para " + to_string(thirdNumber) + " and " + to_string(fifthNumber);
									numberFirst = thirdNumber;
									numberSecond = fifthNumber;
									return 0;
								}
								else {
									//Проверка на пару
									if (firstNumber == secondNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (secondNumber == thirdNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
										return 0;
									}
									if (thirdNumber == fourthNumber) {
										combination = "Para " + to_string(thirdNumber);
										numberFirst = thirdNumber;
										return 0;
									}
									if (fourthNumber == fifthNumber) {
										combination = "Para " + to_string(fourthNumber);
										numberFirst = fourthNumber;
										return 0;
									}
									if (fifthNumber == sixthNumber) {
										combination = "Para " + to_string(fifthNumber);
										numberFirst = fifthNumber;
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

int defineCombination(string first, string second, string third, string fourth, string fifth, string sixth, string seventh, string& combination, int& numberFirst, int& numberSecond) {
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	int fourthNumber = 0;
	int fifthNumber = 0;
	int sixthNumber = 0;
	int seventhNumber = 0;

	string firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit, sixthSuit, seventhSuit;

	checkSeventhNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, sixthNumber , seventhNumber , first, second, third, fourth, fifth, sixth, seventh);

	sortNumbers(firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, sixthNumber, seventhNumber);

	checkSuit(first, second, third, fourth, fifth, sixth, seventh, firstSuit, secondSuit, thirdSuit, fourthSuit, fifthSuit, sixthSuit, seventhSuit);

	//Проверка на флэш рояль (Стрит флэш от 10 до туза(14))
	if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit && fifthNumber == 10) {
		combination = "Flesh royal ";
		return 0;
	}
	if (secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && secondSuit == thirdSuit && secondSuit == fourthSuit && secondSuit == fifthSuit && secondSuit == sixthSuit && sixthNumber == 10) {
		combination = "Flesh royal ";
		return 0;
	}
	if (thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && sixthNumber == seventhNumber + 1 && thirdSuit == fourthSuit && thirdSuit == fifthSuit && thirdSuit == sixthSuit && thirdSuit == seventhSuit && seventhNumber == 10) {
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
		if (secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && secondSuit == thirdSuit && secondSuit == fourthSuit && secondSuit == fifthSuit && secondSuit == sixthSuit) {
			combination = "Strit flesh " + to_string(secondNumber);
			numberFirst = secondNumber;
			return 0;
		}
		if (thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && sixthNumber == seventhNumber + 1 && thirdSuit == fourthSuit && thirdSuit == fifthSuit && thirdSuit == sixthSuit && thirdSuit == seventhSuit) {
			combination = "Strit flesh " + to_string(thirdNumber);
			numberFirst = thirdNumber;
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
			if (thirdNumber == fourthNumber && thirdNumber == fifthNumber && thirdNumber == sixthNumber) {
				combination = "Kare " + to_string(thirdNumber);
				numberFirst = thirdNumber;
				return 0;
			}
			if (fourthNumber == fifthNumber && fourthNumber == sixthNumber && fourthNumber == seventhNumber) {
				combination = "Kare " + to_string(fourthNumber);
				numberFirst = fourthNumber;
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
				if (firstNumber == secondNumber && fourthNumber == fifthNumber && fourthNumber == sixthNumber) {
					combination = "Full house, set: " + to_string(fourthNumber) + " and para: " + to_string(firstNumber);
					numberFirst = fourthNumber;
					numberSecond = firstNumber;
					return 0;
				}
				if (firstNumber == secondNumber && fifthNumber == sixthNumber && sixthNumber == seventhNumber) {
					combination = "Full house, set: " + to_string(fifthNumber) + " and para: " + to_string(firstNumber);
					numberFirst = fifthNumber;
					numberSecond = firstNumber;
					return 0;
				}
				if (secondNumber == thirdNumber && fourthNumber == fifthNumber && fifthNumber == sixthNumber) {
					combination = "Full house, set: " + to_string(fourthNumber) + " and para: " + to_string(secondNumber);
					numberFirst = fourthNumber;
					numberSecond = secondNumber;
					return 0;
				}
				if (secondNumber == thirdNumber && fifthNumber == sixthNumber && sixthNumber == seventhNumber) {
					combination = "Full house, set: " + to_string(fifthNumber) + " and para: " + to_string(secondNumber);
					numberFirst = fifthNumber;
					numberSecond = secondNumber;
					return 0;
				}
				if (thirdNumber == fourthNumber && fifthNumber == sixthNumber && fifthNumber == seventhNumber) {
					combination = "Full house, set: " + to_string(fifthNumber) + " and para: " + to_string(thirdNumber);
					numberFirst = fifthNumber;
					numberSecond = thirdNumber;
					return 0;
				}
				if (fourthNumber == fifthNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(fourthNumber);
					numberFirst = firstNumber;
					numberSecond = fourthNumber;
					return 0;
				}
				if (fifthNumber == sixthNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(fifthNumber);
					numberFirst = firstNumber;
					numberSecond = fifthNumber;
					return 0;
				}
				if (fifthNumber == sixthNumber && secondNumber == thirdNumber && secondNumber == fourthNumber) {
					combination = "Full house, set: " + to_string(secondNumber) + " and para: " + to_string(fifthNumber);
					numberFirst = secondNumber;
					numberSecond = fifthNumber;
					return 0;
				}
				if (sixthNumber == seventhNumber && firstNumber == secondNumber && firstNumber == thirdNumber) {
					combination = "Full house, set: " + to_string(firstNumber) + " and para: " + to_string(sixthNumber);
					numberFirst = firstNumber;
					numberSecond = sixthNumber;
					return 0;
				}
				if (sixthNumber == seventhNumber && secondNumber == thirdNumber && secondNumber == fourthNumber) {
					combination = "Full house, set: " + to_string(secondNumber) + " and para: " + to_string(sixthNumber);
					numberFirst = secondNumber;
					numberSecond = sixthNumber;
					return 0;
				}
				if (sixthNumber == seventhNumber && thirdNumber == fourthNumber && thirdNumber == fifthNumber) {
					combination = "Full house, set: " + to_string(thirdNumber) + " and para: " + to_string(sixthNumber);
					numberFirst = thirdNumber;
					numberSecond = sixthNumber;
					return 0;
				}
				else {
					//Проверка на флэш (Пять карт одной масти)
					if (firstSuit == secondSuit && firstSuit == thirdSuit && firstSuit == fourthSuit && firstSuit == fifthSuit) {
						combination = "Flesh " + to_string(firstNumber);
						numberFirst = firstNumber;
						return 0;
					}
					if (secondSuit == thirdSuit && secondSuit == fourthSuit && secondSuit == fifthSuit && secondSuit == sixthSuit) {
						combination = "Flesh " + to_string(secondNumber);
						numberFirst = secondNumber;
						return 0;
					}
					if (thirdSuit == fourthSuit && thirdSuit == fifthSuit && thirdSuit == sixthSuit && thirdSuit == seventhSuit) {
						combination = "Flesh " + to_string(thirdNumber);
						numberFirst = thirdNumber;
						return 0;
					}
					else {
						//Проверка на стрит (Пять карт идущих друг за другом)
						if (firstNumber == secondNumber + 1 && secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1) {
							combination = "Strit " + to_string(firstNumber);
							numberFirst = firstNumber;
							return 0;
						}
						if (secondNumber == thirdNumber + 1 && thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1) {
							combination = "Strit " + to_string(secondNumber);
							numberFirst = secondNumber;
							return 0;
						}
						if (thirdNumber == fourthNumber + 1 && fourthNumber == fifthNumber + 1 && fifthNumber == sixthNumber + 1 && sixthNumber == seventhNumber + 1) {
							combination = "Strit " + to_string(thirdNumber);
							numberFirst = thirdNumber;
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
							if (fourthNumber == fifthNumber && fourthNumber == sixthNumber) {
								combination = "Set " + to_string(fourthNumber);
								numberFirst = fourthNumber;
								return 0;
							}
							if (fifthNumber == sixthNumber && fifthNumber == seventhNumber) {
								combination = "Set " + to_string(fifthNumber);
								numberFirst = fifthNumber;
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
								if (firstNumber == secondNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(fourthNumber);
									numberFirst = firstNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (firstNumber == secondNumber && fifthNumber == sixthNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(fifthNumber);
									numberFirst = firstNumber;
									numberSecond = fifthNumber;
									return 0;
								}
								if (firstNumber == secondNumber && sixthNumber == seventhNumber) {
									combination = "Double para " + to_string(firstNumber) + " and " + to_string(sixthNumber);
									numberFirst = firstNumber;
									numberSecond = sixthNumber;
									return 0;
								}
								if (secondNumber == thirdNumber && fourthNumber == fifthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fourthNumber);
									numberFirst = secondNumber;
									numberSecond = fourthNumber;
									return 0;
								}
								if (secondNumber == thirdNumber && fifthNumber == sixthNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(fifthNumber);
									numberFirst = secondNumber;
									numberSecond = fifthNumber;
									return 0;
								}
								if (secondNumber == thirdNumber && sixthNumber == seventhNumber) {
									combination = "Double para " + to_string(secondNumber) + " and " + to_string(sixthNumber);
									numberFirst = secondNumber;
									numberSecond = sixthNumber;
									return 0;
								}
								if (thirdNumber == fourthNumber && sixthNumber == seventhNumber) {
									combination = "Double para " + to_string(thirdNumber) + " and " + to_string(sixthNumber);
									numberFirst = thirdNumber;
									numberSecond = sixthNumber;
									return 0;
								}
								else {
									//Проверка на пару
									if (firstNumber == secondNumber) {
										combination = "Para " + to_string(firstNumber);
										numberFirst = firstNumber;
										return 0;
									}
									if (secondNumber == thirdNumber) {
										combination = "Para " + to_string(secondNumber);
										numberFirst = secondNumber;
										return 0;
									}
									if (thirdNumber == fourthNumber) {
										combination = "Para " + to_string(thirdNumber);
										numberFirst = thirdNumber;
										return 0;
									}
									if (fourthNumber == fifthNumber) {
										combination = "Para " + to_string(fourthNumber);
										numberFirst = fourthNumber;
										return 0;
									}
									if (fifthNumber == sixthNumber) {
										combination = "Para " + to_string(fifthNumber);
										numberFirst = fifthNumber;
										return 0;
									}
									if (sixthNumber == seventhNumber) {
										combination = "Para " + to_string(sixthNumber);
										numberFirst = sixthNumber;
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