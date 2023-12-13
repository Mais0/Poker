#include "Players.cpp"

void logicSecondPlayer(string combination, int& money1, SecondPlayer& secondPlayer, int &comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = secondPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << secondPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money1 >= 250) {
			int bet = rand() % 249 + 1;
			cout << secondPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = secondPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << secondPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

void logicThirdPlayer(string combination, int& money2, ThirdPlayer& thirdPlayer, int& comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = thirdPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << thirdPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money2 >= 250) {
			int bet = rand() % 249 + 1;
			cout << thirdPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = thirdPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << thirdPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

void logicFourthPlayer(string combination, int& money3, FourthPlayer& fourthPlayer, int& comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = fourthPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << fourthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money3 >= 250) {
			int bet = rand() % 249 + 1;
			cout << fourthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = fourthPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << fourthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

void logicFifthPlayer(string combination, int& money4, FifthPlayer& fifthPlayer, int& comparisonRate) {
	bool betOrNo = rand() % 2;
	if (betOrNo) {
		if (combination == "Flesh royal") {
			int maxMoney = fifthPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << fifthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		if (money4 >= 250) {
			int bet = rand() % 249 + 1;
			cout << fifthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
		else {
			int maxMoney = fifthPlayer.getMoney();
			int bet = rand() % maxMoney;
			cout << fifthPlayer.getName() << " bet is " << bet << endl;
			comparisonRate = bet;
		}
	}
}

int comparisonOfRates(int comparisonRate, vector<int> comparisonArray) {
	comparisonRate = comparisonArray[0];
	for (int i = 1; i < comparisonArray.size(); i++) {
		if (comparisonArray[i] > comparisonRate) {
			comparisonRate = comparisonArray[i];
		}
	}
	return comparisonRate;
}

void everyonePutsInTheHighestBidWithoutFirstPlayer(int rate, Bank &bank) {
	for (int i = 0; i < 4; i++) {
		bank.getBet(rate);
	}
}

void everyonePutsInTheHighestBid(int rate, Bank &bank) {
	for (int i = 0; i < 5; i++) {
		bank.getBet(rate);
	}
}

void reduceMoney(int& money1, int& money2, int& money3, int& money4, int& money5, int rate) {
	money1 -= rate;
	money2 -= rate;
	money3 -= rate;
	money4 -= rate;
	money5 -= rate;
}

void reduceMoney(int& money1, int& money2, int& money3, int& money4, int rate) {
	money1 -= rate;
	money2 -= rate;
	money3 -= rate;
	money4 -= rate;
}

void botsLogic(string combination, bool supportTheBid, int playerRate, int& money1, int& money2, int& money3, int& money4, int& money5, FirstPlayer& firstPlayer, SecondPlayer& secondPlayer, ThirdPlayer& thirdPlayer, FourthPlayer& fourthPlayer, FifthPlayer& fifthPlayer, Bank& bank) {
	int comparisonRate = 0;
	vector<int> comparisonArray;
	comparisonArray.push_back(playerRate);
	logicSecondPlayer(combination, money2, secondPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	comparisonRate = 0;
	logicThirdPlayer(combination, money3, thirdPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	comparisonRate = 0;
	logicFourthPlayer(combination, money4, fourthPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	comparisonRate = 0;
	logicFifthPlayer(combination, money5, fifthPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	int count = 0;
	for (int i = 0; i < comparisonArray.size(); i++) {
		if (comparisonArray[i] > 0) {
			count++;
		}
	}
	if (count > 0) {
		int result = comparisonOfRates(comparisonRate, comparisonArray);
	again:
		int answer = 0;
		if (comparisonArray[0] == playerRate && playerRate == result) {
			answer = 1;
		}
		else {
			cout << "Ставки подняты до - " << result << " желаете поддержать ставку или сбросить карты?" << endl;
			cout << "1. Поддержать" << endl;
			cout << "2. Сбросить карты" << endl;
			cout << "Введите ответ - ";
			cin >> answer;
			cout << endl;
		}
		if (answer == 1) {
			everyonePutsInTheHighestBid(result, bank);
			reduceMoney(money1,money2,money3,money4,money5, result);
			firstPlayer.setMoney(money1);
			secondPlayer.setMoney(money2);
			thirdPlayer.setMoney(money3);
			fourthPlayer.setMoney(money4);
			fifthPlayer.setMoney(money5);
			supportTheBid = true;
		}
		else if (answer == 2) {
			everyonePutsInTheHighestBidWithoutFirstPlayer(result, bank);
			reduceMoney(money2, money3, money4, money5, result);
			secondPlayer.setMoney(money2);
			thirdPlayer.setMoney(money3);
			fourthPlayer.setMoney(money4);
			fifthPlayer.setMoney(money5);
			supportTheBid = false;
		}
		else goto again;
	}
}

void botsLogic(string combination, bool supportTheBid, int& money1, int& money2, int& money3, int& money4, int& money5, FirstPlayer& firstPlayer, SecondPlayer& secondPlayer, ThirdPlayer& thirdPlayer, FourthPlayer& fourthPlayer, FifthPlayer& fifthPlayer, Bank& bank) {
	int comparisonRate = 0;
	vector<int> comparisonArray;
	logicSecondPlayer(combination, money2, secondPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	comparisonRate = 0;
	logicThirdPlayer(combination, money3, thirdPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	comparisonRate = 0;
	logicFourthPlayer(combination, money4, fourthPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	comparisonRate = 0;
	logicFifthPlayer(combination, money5, fifthPlayer, comparisonRate);
	comparisonArray.push_back(comparisonRate);
	int count = 0;
	for (int i = 0; i < comparisonArray.size(); i++) {
		if (comparisonArray[i] > 0) {
			count++;
		}
	}
	if (count > 0) {
		int result = comparisonOfRates(comparisonRate, comparisonArray);
	again:
		cout << "Ставки подняты до - " << result << " желаете поддержать ставку или сбросить карты?" << endl;
		cout << "1. Поддержать" << endl;
		cout << "2. Сбросить карты" << endl;
		int answer = 0;
		cout << "Введите ответ - ";
		cin >> answer;
		cout << endl;
		if (answer == 1) {
			everyonePutsInTheHighestBid(result, bank);
			reduceMoney(money1, money2, money3, money4, money5, result);
			firstPlayer.setMoney(money1);
			secondPlayer.setMoney(money2);
			thirdPlayer.setMoney(money3);
			fourthPlayer.setMoney(money4);
			fifthPlayer.setMoney(money5);
			supportTheBid = true;
		}
		if (answer == 2) {
			everyonePutsInTheHighestBidWithoutFirstPlayer(result, bank);
			reduceMoney(money2, money3, money4, money5, result);
			secondPlayer.setMoney(money2);
			thirdPlayer.setMoney(money3);
			fourthPlayer.setMoney(money4);
			fifthPlayer.setMoney(money5);
			supportTheBid = false;
		}
		else goto again;
	}
}