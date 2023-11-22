#include "Dependies.cpp"

void playerInitialization(int ID, vector<int>&collectorID) {
	if (find(collectorID.begin(), collectorID.end(), ID) == collectorID.end()) {
		collectorID.push_back(ID);
	}
	else {
		ID++;
		playerInitialization(ID, collectorID);
	}
}
void generateOtherPlayers(int ID, int &player1, int &player2, int &player3, int &player4, vector<int>&collectorID) {
	player1 = ID;
	player2 = ID;
	player3 = ID;
	player4 = ID;
	playerInitialization(player1, collectorID);
	playerInitialization(player2, collectorID);
	playerInitialization(player3, collectorID);
	playerInitialization(player4, collectorID);
}