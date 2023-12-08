#include "Players.cpp";
#include <cstdlib>
#include <ctime>

void setDeck(string* deck, int SIZE);
void playerInitialization(int ID, vector<int>& collectorID);
void generateOtherPlayers(int ID, int& player1, int& player2, int& player3, int& player4, vector<int>& collectorID);
void generateStartingCards(string deck[], string& first, string& second, int withoutDeck[], int& counterDeck);
void defineCombination(string first, string second, string& combination, int& number);
int defineCombination(string first, string second, string third, string fourth, string fifth, string& combination, int& numberFirst, int& numberSecond);
int defineCombination(string first, string second, string third, string fourth, string fifth, string sixth, string& combination, int& numberFirst, int& numberSecond);
int defineCombination(string first, string second, string third, string fourth, string fifth, string sixth, string seventh, string& combination, int& numberFirst, int& numberSecond);
void issuingCards(string deck[], string& first, string& second, string& third, int withoutDeck[], int& counterDeck);
void issuingCard(string deck[], string& card, int withoutDeck[], int& counterDeck);


//firstPlayer.
//secondPlayer.
//thirdPlayer.
//fourthPlayer.
//fifthPlayer.

int main() {
	//������ ���������
	setlocale(LC_ALL, "rus");
	cout << "\tPoker" << endl;
	cout << "You want play to Poker? " << endl;
	cout << endl;
	cout << "\t1 - Yes " << endl;
	cout << "\t2 - No " << endl;
	cout << endl;
	int answer = 0;
	cout << "Please enter your answer: ";
	answer = 1;
	/*cin >> answer;*/
	cout << endl;
	// TO-DO List
	// 1. Create deck cards +
	// 2. Create players +
	// 3. �reate giving cards +
	// 4. Create system of bets +
	// 5. ������� ������� ������� ������� ���������� �� ����� ������
	// 6. ��������� ������ �����
	// 7. ��������� ����
	//��������� ����, ���������������� ������ ����, �������, ������, ��������� �����, ���������� � �.�.
	if (answer == 1) {
		const int SIZE = 52;
		string deck[SIZE];
		//���������� ������� ������� ����
		setDeck(deck, SIZE);
		//������ ������� ������ ���� ������������������ �������������
		vector<int> collectorID;
		//������������� ������������
		int ID = 1;
		//�������� �� ������������ �������������� ������������
		playerInitialization(ID, collectorID);
		//��������� ������ ������������� (�����)
		int player1 = 0;
		int player2 = 0;
		int player3 = 0;
		int player4 = 0;
		//������������� ��������������� ������ ������������� � �������� �� �� ������������
		generateOtherPlayers(ID, player1, player2, player3, player4, collectorID);
		//������, �������� �� ��������������� � ��� � �������
		FirstPlayer firstPlayer;
		SecondPlayer secondPlayer;
		ThirdPlayer thirdPlayer;
		FourthPlayer fourthPlayer;
		FifthPlayer fifthPlayer;
		firstPlayer.setID(ID);
		secondPlayer.setID(player1);
		thirdPlayer.setID(player2);
		fourthPlayer.setID(player3);
		fifthPlayer.setID(player4);
		//������ ���� ��������� ����, ����������� ����� ����� ��������� ����������
		string first, second, third, fourth, fifth, sixth, seventh;
		int withoutDeck[SIZE];
		int counterDeck = 0;
		//��������� ��������� ���� �������, ���� if ��� ��������� �����������
		if (true) {
			srand(unsigned(time(0)));
			//������� ��������� ������ � �������, � ��� ���������� � ���������� �������, ����� ����������...
			//...��������� ������ ������� � ����� �����
			generateStartingCards(deck, first, second, withoutDeck, counterDeck);
			//������������� ������ �������� ��� �����
			firstPlayer.setStartingCards(first, second);
			generateStartingCards(deck, first, second, withoutDeck, counterDeck);
			secondPlayer.setStartingCards(first, second);
			generateStartingCards(deck, first, second, withoutDeck, counterDeck);
			thirdPlayer.setStartingCards(first, second);
			generateStartingCards(deck, first, second, withoutDeck, counterDeck);
			fourthPlayer.setStartingCards(first, second);
			generateStartingCards(deck, first, second, withoutDeck, counterDeck);
			fifthPlayer.setStartingCards(first, second);
		}
		//����������� �����
		Bank bank;
		//��������� ������
		bool session = true;
		int counter = 0;
		int money1, money2, money3, money4, money5;
		money1 = firstPlayer.getMoney();
		money2 = secondPlayer.getMoney();
		money3 = thirdPlayer.getMoney();
		money4 = fourthPlayer.getMoney();
		money5 = fifthPlayer.getMoney();
		bank.startingBet(money1, money2, money3, money4, money5);
		firstPlayer.setMoney(money1);
		secondPlayer.setMoney(money2);
		thirdPlayer.setMoney(money3);
		fourthPlayer.setMoney(money4);
		fifthPlayer.setMoney(money5);
	game:
		string combination;
		int numberFirst = 0;
		int numberSecond = 0;
		bool giveFiveCards = false;
		bool giveSixthCards = false;
		bool giveSeventhCards = false;
		int count = 0;
		while (session) {
			if (money1 > 0) {
				cout << "���� ������: " << firstPlayer.getMoney() << endl;
				if (first.empty()) {
					firstPlayer.getStartingCards(first, second);
				}
				cout << "���� �����: " << first << " � " << second << endl;
				if (!giveSeventhCards) {
					if (!giveSixthCards) {
						if (!giveFiveCards) {
							defineCombination(first, second, combination, numberFirst);
						}
						else {
							defineCombination(first, second, third, fourth, fifth, combination, numberFirst, numberSecond);
						}
						if (giveFiveCards) {
							cout << "����� �� �����: " << third << " " << fourth << " " << fifth << endl;
						}
					}
					else {
						defineCombination(first, second, third, fourth, fifth, sixth, combination, numberFirst, numberSecond);
						cout << "����� �� �����: " << third << " " << fourth << " " << fifth << " " << sixth << endl;
					}
				}
				else {
					defineCombination(first, second, third, fourth, fifth, sixth, seventh, combination, numberFirst, numberSecond);
					cout << "����� �� �����: " << third << " " << fourth << " " << fifth << " " << sixth << " " << seventh << endl;
				}
				cout << "���� ����������: " << combination << endl;
				cout << "���� ������: " << bank.bank << endl;
				cout << "�������� ���� �� ��������� ���������" << endl;
				cout << "1. ���� (������� ������) " << endl;
				cout << "2. ���� (�������� �����) " << endl;
				cout << "3. ��� (�� �������, ������ �����) " << endl;
				cout << "4. ����� �� ���� " << endl;
				cout << "������� ��� �����: ";
				bool answerToTheGame = true;
				while (answerToTheGame) {
					int answerGame = 0;
					cin >> answerGame;
					cout << endl;
					int sum = 0;
					switch (answerGame) {
					case 1:
						cout << "������� ����� ������: ";
						cin >> sum;
						cout << endl;
						bank.reiz(money1, sum);
						answerToTheGame = false;
						counter++;
						if (count < 3) {
							if (count < 2) {
								if (count == 0) {
									if (!giveFiveCards) {
										issuingCards(deck, third, fourth, fifth, withoutDeck, counterDeck);
										giveFiveCards = true;
										count++;
									}
								}
								else {
									issuingCard(deck, sixth, withoutDeck, counterDeck);
									giveSixthCards = true;
									count++;
								}
							}
							else {
								issuingCard(deck, seventh, withoutDeck, counterDeck);
								giveSeventhCards = true;
								count++;
							}
						}
						break;
					case 2:
						session = false;
						answerToTheGame = false;
						break;
					case 3:
						answerToTheGame = false;
						if (count < 3) {
							if (count < 2) {
								if (count == 0) {
									if (!giveFiveCards) {
										issuingCards(deck, third, fourth, fifth, withoutDeck, counterDeck);
										giveFiveCards = true;
										count++;
									}
								}
								else {
									issuingCard(deck, sixth, withoutDeck, counterDeck);
									giveSixthCards = true;
									count++;
								}
							}
							else {
								issuingCard(deck, seventh, withoutDeck, counterDeck);
								giveSeventhCards = true;
								count++;
							}
						}
						break;
					case 4:
						exit(1);
						break;
					default:
						cout << "����������� ��������, ���������� ��� ���" << endl;
						break;
					}
				}
			}
			else exit(2);
		}
		if (money1 > 0) {
			goto game;
		}
	}
}