/*Task 1. Create a structure called soccer that contains two members : a player number
* 
* 
(type int) and the player's top speed (in mph, type float). Add a variable of type enum


position with values that indicate a player's position type: goalkeeper, midfielder,


striker, winger and defender.


Write a program so that the user enters three items of information for each of two


players : a player number, the player's top speed and the player's position type.


For player’s position type, allow user to specify a type by entering its first letter


(‘g’, ’m’, ’s’, ’w’, and so on) then stores the type chosen as a value of a variable of type



enum position, and finally displays the complete word for this type.

	The program should store this information in two variables of type players, and then

	display their contents.

	*/







#include <iostream>
using namespace std;


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
} player;




int main() {
		
	char posInput;
	cout << "Player Number: " << endl;
	cin >> player.playerNum;
	cout << "Player Top Speed: " << endl;
	cin >> player.topSpeed;
	cout << "Input Player Position using(g, m, s, w or d): " << endl;
	cin >> posInput;


	switch (posInput)
	{
	case player.goalkeeper:
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Goalkeeper" << endl;
		break;
	case player.midfielder:
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Midfielder" << endl;
		break;
	case player.striker:
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Striker" << endl;
		break;
	case player.winger:
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Winger" << endl;
		break;
	case player.defender:
		cout << "Player number :" << player.playerNum << " has a top speed of: " << player.topSpeed << " KPH, and Plays the position of: Defender" << endl;
		break;
	default:
		break;
	}
	
	

	
	
	system("pause>0");
}