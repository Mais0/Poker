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
	//Начало программы
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
	// Список выполненых задач и то что нужно сделать
	// 1. Создать колоду +
	// 2. Создать игроков +
	// 3. Создать выдачу начальных карт
	// 4. Создать систему ставок
	// 5. Создать систему которая говорит комбинацию на руках игрока
	// 6. Прописать логику ботам
	// 7. Прописать банк
	//Запустить игру, инициализировать колоду карт, игроков, ставки, начальные карты, комбинации и т.д.
	if (answer == 1) {
		const int SIZE = 52;
		string deck[SIZE];
		//Заполнение массива колодой карт
		setDeck(deck, SIZE);
		//Массив который хранит всех инициализированных пользователей
		vector<int> collectorID;
		//Идентификатор пользователя
		int ID = 1;
		//Проверка на уникальность идентификатора пользователя
		playerInitialization(ID, collectorID);
		//Генерация другие пользователей (ботов)
		int player1 = 0;
		int player2 = 0;
		int player3 = 0;
		int player4 = 0;
		//Инициализация идентификаторов другим пользователям и проверка на их уникальность
		generateOtherPlayers( ID, player1, player2, player3, player4, collectorID);
		//Игроки, передача их идентификаторов к ним в профиль
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
		//Выдача двух начальных карт, определение какие карты выдадутся начальными
			string first, second;
			int withoutDeck[SIZE];
			int counterDeck = 0;
			//Функция принимает массив с картами, и две переменные с начальными картами, после генерирует...
			//...случайный индекс массива и выдаёт карту
			generateStartingCards(deck, first, second, withoutDeck, counterDeck);
			//Устанавливает игроку выпавшие ему карты
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