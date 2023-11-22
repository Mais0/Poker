#include "Dependies.cpp"
#include <cstdlib>
#include <ctime>

void generateStartingCards(string deck[], string first, string second, int withoutDeck[], int counterDeck) {
	srand(unsigned(time(0)));
	//Генерирует карту после чего добавляет её индекс в массив с вышедшеми картами...
	//...если сгенерировалась уже вышедшая карта итерация проводится заново
	for (int i = 0; i <= 1; i++) {
		//Генерация случайного числа от 0 до 51
		int count = 0;
		algorithm(count);
		bool examination = true;
		while (examination) {
			int counter = 0;
			for (int i = 0; i < 52; i++) {
				if (count == withoutDeck[i]) {
					counter++;
					break;
				}
			}
			if (counter == 0) {
				examination = false;
				withoutDeck[counterDeck];
				counterDeck++;
				if (i == 0) {
					first = deck[count];
				}
				else second = deck[count];
			}
			//Если хоть раз count встречался в массиве то меняем его, если нет - уходим
			else algorithm(count);
		}
	}
}
void algorithm(int count) {
	count = rand() % 51;
}