#include "Dependies.cpp"

/*firstPlayer.
secondPlayer.
thirdPlayer.
fourthPlayer.
fifthPlayer.*/

//Player - 1
class FirstPlayer  {
private:
	int ID = 0;
	int money = 2000;
	string firstStartingCard;
	string secondStartingCard;
	string combination;
public:
	void setID(int ID) {
		this->ID = ID;
	}

	int getMoney() {
		return money;
	}

	void setMoney(int money) {
		this->money = money;
	}

	void setCombination(int combination) {
		this->combination = combination;
	}

	void setStartingCards(string first, string second) {
		this->firstStartingCard = first;
		this->secondStartingCard = second;
	}

	void getStartingCards(string &first, string &second) {
		first = this->firstStartingCard;
		second = this->secondStartingCard;
	}
};



//Player - 2
class SecondPlayer {
private:
	int ID = 0;
	int money = 2000;
	string firstStartingCard;
	string secondStartingCard;
	string combination;
	string name = "Richard";
public:
	void setID(int ID) {
		this->ID = ID;
	}

	string getName() {
		return name;
	}

	int getMoney() {
		return money;
	}

	void setMoney(int money) {
		this->money = money;
	}

	void setCombination(int combination) {
		this->combination = combination;
	}

	void setStartingCards(string first, string second) {
		this->firstStartingCard = first;
		this->secondStartingCard = second;
	}

	void getStartingCards(string& first, string& second) {
		first = this->firstStartingCard;
		second = this->secondStartingCard;
	}
};



// Player - 3
class ThirdPlayer {
private:
	int ID = 0;
	int money = 2000;
	string firstStartingCard;
	string secondStartingCard;
	string combination;
	string name = "John";

public:
	void setID(int ID) {
		this->ID = ID;
	}

	string getName() {
		return name;
	}

	int getMoney() {
		return money;
	}

	void setMoney(int money) {
		this->money = money;
	}

	void setCombination(int combination) {
		this->combination = combination;
	}

	void setStartingCards(string first, string second) {
		this->firstStartingCard = first;
		this->secondStartingCard = second;
	}

	void getStartingCards(string& first, string& second) {
		first = this->firstStartingCard;
		second = this->secondStartingCard;
	}
};



// Player - 4
class FourthPlayer {
private:
	int ID = 0;
	int money = 2000;
	string firstStartingCard;
	string secondStartingCard;
	string combination;
	string name = "Mickle";

public:
	void setID(int ID) {
		this->ID = ID;
	}

	string getName() {
		return name;
	}

	int getMoney() {
		return money;
	}

	void setMoney(int money) {
		this->money = money;
	}

	void setCombination(int combination) {
		this->combination = combination;
	}

	void setStartingCards(string first, string second) {
		this->firstStartingCard = first;
		this->secondStartingCard = second;
	}

	void getStartingCards(string& first, string& second) {
		first = this->firstStartingCard;
		second = this->secondStartingCard;
	}
};



//Player - 5
class FifthPlayer {
private:
	int ID = 0;
	int money = 2000;
	string firstStartingCard;
	string secondStartingCard;
	string combination;
	string name = "Adam";

public:
	void setID(int ID) {
		this->ID = ID;
	}

	int getMoney() {
		return money;
	}

	string getName() {
		return name;
	}

	void setMoney(int money) {
		this->money = money;
	}

	void setCombination(int combination) {
		this->combination = combination;
	}

	void setStartingCards(string first, string second) {
		this->firstStartingCard = first;
		this->secondStartingCard = second;
	}

	void getStartingCards(string& first, string& second) {
		first = this->firstStartingCard;
		second = this->secondStartingCard;
	}
};



//Bank
class Bank {
public:
	int bank = 0;

	void startingBet(int &money1, int &money2, int &money3, int &money4, int &money5) {
		money1 -= 100;
		money2 -= 100;
		money3 -= 100;
		money4 -= 100;
		money5 -= 100;
		bank = 500;
	}

	void getBet(int bet) {
		bank += bet;
	}
};