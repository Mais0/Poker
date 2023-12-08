#include "Dependies.cpp"

bool checkWithoutDeck(int& index, int withoutDeck[]) {
	bool examination;
	for (int i = 0; i < 52; i++) {
		if (index == withoutDeck[i]) {
			i = 52;
			examination = true;
		}
		else examination = false;
	}
	return examination;
}

void algorithm(int& count) {
	count = rand() % 52;
}

void generateStartingCards(string deck[], string &first, string &second, int withoutDeck[], int &counterDeck) {
	for (int i = 0; i <= 1; i++) {
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
		}
	}
}