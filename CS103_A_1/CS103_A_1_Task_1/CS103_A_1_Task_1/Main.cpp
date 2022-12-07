/*
Task 1
jared evans
CS103 assessment 1
*/



#include <iostream>
using namespace std;

//create a struct called Soccer
struct Soccer
{
	int playerNum;
	float topSpeed;
	enum PlayerPosition {
		goalkeeper = 'g',
		midfielder = 'm',
		striker = 's',
		winger = 'w',
		defender = 'd'
	};
	//creating a vareabil of struct to use "THIS IS GLOBEIL"
} player;




int main() {
		
	//vareabiles
	char posInput;

	//prompt user for input and store data
	cout << "Player Number: " << endl;
	cin >> player.playerNum;
	cout << "Player Top Speed: " << endl;
	cin >> player.topSpeed;
	cout << "Input Player Position using(g, m, s, w or d): " << endl;
	cin >> posInput;

	//display inputed data corretly
	switch (posInput)
	{
	case player.goalkeeper://runs if user input == 'g'
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Goalkeeper" << endl;
		break;
	case player.midfielder://runs if user input == 'm'
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Midfielder" << endl;
		break;
	case player.striker://runs if user input == 's'
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Striker" << endl;
		break;
	case player.winger://runs if user input == 'w'
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Winger" << endl;
		break;
	case player.defender://runs if user input == 'd'
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Defender" << endl;
		break;
	default:
		break;
	}	
	
	system("pause>0");
}