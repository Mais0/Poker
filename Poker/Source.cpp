#include "Players.cpp";
#include <cstdlib>
#include <ctime>

void setDeck(string* deck, int SIZE);
void playerInitialization(int ID, vector<int>& collectorID);
void generateOtherPlayers(int ID, int& player1, int& player2, int& player3, int& player4, vector<int>& collectorID);
void generateStartingCards(string deck[], string& first, string& second, int withoutDeck[], int& counterDeck);
void defineCombination(string first, string second, string &combination, int &number);
void defineCombination(string first, string second, string third, string fourth, string fifth, string &combination, int &numberFirst, int &numberSecond);
void issuingCards(string first, string second, string third, string &combination);

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
	// 3. Создать выдачу начальных карт +
	// 4. Создать систему ставок
	// 5. Создать систему которая говорит комбинацию на руках игрока
	// 6. Прописать логику ботам
	// 7. Прописать банк
	//Запустить игру, инициализировать колоду карт, игроков, ставки, начальные карты, комбинации и т.д.
	if (answer == 1) {
		bool game = true;
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
		generateOtherPlayers(ID, player1, player2, player3, player4, collectorID);
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
		if (true) {
			srand(unsigned(time(0)));
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
		//Подключение банка
		Bank bank;
		//Начальные ставки
		bool session = true;
		int counter = 0;
		while (session) {
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
			string combination;
			int number = 0;
			if (money1 > 0) {
				cout << "Ваш банк: " << firstPlayer.getMoney() << endl;
				firstPlayer.getStartingCards(first, second);
				cout << "Ваши карты: " << first << " и " << second << endl;
				defineCombination(first, second, combination, number);
				cout << "Ваша комбинация: " << combination << endl;
				cout << "Банк сессии: " << bank.bank << endl;
				cout << "Выберите один из следующих вариантов" << endl;
				cout << "1. Рейз (Поднять ставку) " << endl;
				cout << "2. Фолл (Сбросить карты) " << endl;
				cout << "3. Чек (Не ставить, узнать карты) " << endl;
				cout << "4. Выйти из игры " << endl;
				cout << "Введите ваш ответ: ";
				bool answerToTheGame = true;
				while (answerToTheGame) {
					int answerGame = 0;
					cin >> answerGame;
					cout << endl;
					int sum = 0;
					switch (answerGame) {
					case 1:
						cout << "Введите сумму ставки: ";
						cin >> sum;
						cout << endl;
						bank.reiz(money1, sum);
						answerToTheGame = false;
						counter++;
						break;
					case 2:
						session = false;
						answerToTheGame = false;
						break;
					case 3:
						break;
					case 4:
						exit(1);
						break;
					default:
						cout << "Неизвестная операция, попробуйте ещё раз" << endl;
						break;
					}
				}
			}
			else exit(2);
		}
	}
}