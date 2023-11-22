#include "Players.cpp";

void setDeck(string* deck, int SIZE);
void playerInitialization(int ID, vector<int>&collectorID);
void generateOtherPlayers(int ID, int& player1, int& player2, int& player3, int& player4, vector<int>& collectorID);
void generateStartingCards(string deck [], string first, string second, int withoutDeck[], int counterDeck);

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
	int answer;
	cout << "Please enter your answer: ";
	cin >> answer;
	cout << endl;
	// ������ ���������� ����� � �� ��� ����� �������
	// 1. ������� ������ +
	// 2. ������� ������� +
	// 3. ������� ������ ��������� ����
	// 4. ������� ������� ������
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
		generateOtherPlayers( ID, player1, player2, player3, player4, collectorID);
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
			string first, second;
			int withoutDeck[SIZE];
			int counterDeck = 0;
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
}