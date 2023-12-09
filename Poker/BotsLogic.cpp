#include "Players.cpp"

void logicSecondPlayer(string combination, int& money1, SecondPlayer& secondPlayer, Bank& bank, int &comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = secondPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money1 -= bet;
			secondPlayer.setMoney(money1);
			cout << secondPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money1 >= 250) {
			int bet = rand() % 249 + 1;
			bank.getBet(bet);
			money1 -= bet;
			secondPlayer.setMoney(money1);
			cout << secondPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = secondPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money1 -= bet;
			secondPlayer.setMoney(money1);
			cout << secondPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

void logicThirdPlayer(string combination, int& money2, ThirdPlayer& thirdPlayer, Bank& bank, int& comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = thirdPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money2 -= bet;
			thirdPlayer.setMoney(money2);
			cout << thirdPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money2 >= 250) {
			int bet = rand() % 249 + 1;
			bank.getBet(bet);
			money2 -= bet;
			thirdPlayer.setMoney(money2);
			cout << thirdPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = thirdPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money2 -= bet;
			thirdPlayer.setMoney(money2);
			cout << thirdPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

void logicFourthPlayer(string combination, int& money3, FourthPlayer& fourthPlayer, Bank& bank, int& comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = fourthPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money3 -= bet;
			fourthPlayer.setMoney(money3);
			cout << fourthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money3 >= 250) {
			int bet = rand() % 249 + 1;
			bank.getBet(bet);
			money3 -= bet;
			fourthPlayer.setMoney(money3);
			cout << fourthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = fourthPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money3 -= bet;
			fourthPlayer.setMoney(money3);
			cout << fourthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

void logicFifthPlayer(string combination, int& money4, FifthPlayer& fifthPlayer, Bank& bank, int& comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = fifthPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money4 -= bet;
			fifthPlayer.setMoney(money4);
			cout << fifthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money4 >= 250) {
			int bet = rand() % 249 + 1;
			bank.getBet(bet);
			money4 -= bet;
			fifthPlayer.setMoney(money4);
			cout << fifthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = fifthPlayer.getMoney();
			int bet = rand() % maxMoney;
			bank.getBet(bet);
			money4 -= bet;
			fifthPlayer.setMoney(money4);
			cout << fifthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

int comparisonOfRates(int comparisonRate, int comparisonArray[]) {
	comparisonRate = comparisonArray[0];
	for (int i = 1; i < 4; i++) {
		if (comparisonArray[i] > comparisonRate) {
			comparisonRate = comparisonArray[i];
		}
	}
	return comparisonRate;
}

void botsLogic(string combination, int& money1, int& money2, int& money3, int& money4, int& money5, FirstPlayer& firstPlayer, SecondPlayer& secondPlayer, ThirdPlayer& thirdPlayer, FourthPlayer& fourthPlayer, FifthPlayer& fifthPlayer, Bank& bank) {
	int quantityPlayersSetBet = rand() % 4 + 1;
	int playersWhoMadeABet[4];
	int count = 0;
	int comparisonRate = 0;
	int comparisonArray[4];
	bool second = false, third = false, fourth = false, fifth = false;
	int betS = 0, betT = 0, betF = 0, betFi = 0;
	for (int i = 0; i < quantityPlayersSetBet; i++) {
	getRandom:
		int random = rand() % 4 + 1;
		for (int i = count; i < 4; i++) {
			if (playersWhoMadeABet[i] == random) {
				goto getRandom;
			}
		}
		playersWhoMadeABet[count] = random;
		switch (random)
		{
		case 1:
			logicSecondPlayer(combination, money1, secondPlayer, bank, comparisonRate);
			comparisonArray[i] = comparisonRate;
			second = true;
			betS = comparisonRate;
			break;
		case 2:
			logicThirdPlayer(combination, money2, thirdPlayer, bank, comparisonRate);
			comparisonArray[i] = comparisonRate;
			third = true;
			betT = comparisonRate;
			break;
		case 3:
			logicFourthPlayer(combination, money3, fourthPlayer, bank, comparisonRate);
			comparisonArray[i] = comparisonRate;
			fourth = true;
			betF = comparisonRate;
			break;
		case 4:
			logicFifthPlayer(combination, money4, fifthPlayer, bank, comparisonRate);
			comparisonArray[i] = comparisonRate;
			fifth = true;
			betFi = comparisonRate;
			break;
		default:
			botsLogic(combination, money1, money2, money3, money4, money5, firstPlayer, secondPlayer, thirdPlayer, fourthPlayer, fifthPlayer, bank);
			break;
		}
		count++;
	}
	int result = comparisonOfRates(comparisonRate, comparisonArray);
	for (int i = 0; i < 4;i++) {
		if (i == 0) {
			if (betS == result) {
				bank.getBet(result);
			}
			else {
				bank.getBet(result - betS);
				money2 -= result - betS;
			}
		}
		if (i == 1) {
			if (betT == result) {
				bank.getBet(result);
			}
			else {
				bank.getBet(result - betT);
				money3 -= result - betT;
			}
		}
		if (i == 2) {
			if (betF == result) {
				bank.getBet(result);
			}
			else {
				bank.getBet(result - betF);
				money4 -= result - betF;
			}
		}
		if (i == 3) {
			if (betFi == result) {
				bank.getBet(result);
			}
			else {
				bank.getBet(result - betFi);
				money5 -= result - betFi;
			}
		}
	}
	money1 -= result;
	firstPlayer.setMoney(money1);
	secondPlayer.setMoney(money2);
	thirdPlayer.setMoney(money3);
	fourthPlayer.setMoney(money4);
	fifthPlayer.setMoney(money5);
}