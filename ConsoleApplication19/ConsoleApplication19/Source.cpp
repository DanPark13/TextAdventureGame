#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello there. For this to start, type in the name you want your character to be called." << endl;
	string playername;
	getline(cin, playername);
	int confirmation;
	cout << playername << " is being chased by the mafia. He/she has a choice of two paths. Which way do you want " << playername << " to go?" << endl;
	cout << "Type in '1' to turn left or '2' to turn right. Then press 'Enter'." << endl;
	cin >> confirmation;

	if (confirmation == 1)
	{
		cout << playername << " has turned left. He/she meets a shack. Do you wish for " << playername << " to enter it or move on?" << endl;
		cout << "Type in '1' to go into the shack. Or type in '2' to move on." << endl;
		cin >> confirmation;
		if (confirmation == 1)
		{
			cout << playername << " has entered the shack. There is a desk and a bathtub." << endl;
			cout << "Type in '1' to hide under the desk or '2' to hide in the bathtub." << endl;
			cin >> confirmation;
			if (confirmation == 1)
			{
				cout << playername << " hides under the desk. The mafia busts in and looks around. What do you do?" << endl;
				cout << "Type in '1' to rush out of the door or '2' to stay put." << endl;
				cin >> confirmation;
				if (confirmation == 1)
				{
					cout << playername << "tries to sprint out of the door but a mafia member sees you and shoots you down." << endl;
					cout << "The end." << endl;
				}
				else if (confirmation == 2)
					cout << playername << "stays put under the desk and the mafia cannot find you, yet." << endl;
				cout << "Type in '1' to stay put or '2' to try to sneak out." << endl;
				cin >> confirmation;
					if (confirmation == 1)
					{
					cout << playername << "stays put." << endl;
					cout << "However,a  mafia member then approaches the desk and sits down in the chair." << endl;
					cout << "He moves into the chair and a foot hits you. The mafia member looks at you and notifies the other mafia members you're there." << endl;
					cout << "Before you can react, a member points a gun at you and shoots." << endl;
					cout << "The end." << endl;
					}
					else if (confirmation == 2)
					{
					cout << "You realize that you're trying to sneak past a proffessional criminal group, right?" << endl;
					cout << "A member immediately sees you and you begin to run." << endl;
					cout << "Too bad you can't outrun a bullet." << endl;
					cout << "The end." << endl;
					}
			}	
			else if (confirmation == 2)
			{
				cout << playername << " hides in the bathtub. However, behind " << playername << " there is a sound a crack." << endl;
				cout << playername << " looks over his/her back and sees a skeleton!" << endl;
				cout << "Type in '1' to try to clear the skeleton out of the tub or '2' to stay put and lie down." << endl;
				cin >> confirmation;
				if (confirmation == 1)
				{
					cout << playername << " tries to clear the skeleton but the mafia comes in at that moment. They see " << playername << " and shoots him/her. " << endl;
					cout << "The end." << endl;
				}

				else if (confirmation == 2)
				{
					cout << playername << " ignores the skeleton and the mafia bursts in. They look around and can't find you, yet." << endl;
					cout << "Type in '1' to climb out and try to flee or '2' to stay put." << endl;
					cin >> confirmation;
					if (confirmation == 1)
					{
						cout << playername << " climbs out and tries to run, but the mafia sees you and reacts first. They shoot you down and you fall dead." << endl;
						cout << "The end." << endl;
					}
					else if (confirmation == 2)
					{
						cout << playername << " decides to stay put and the mafia continues to look around. They cannot find you and leaves." << endl;
						cout << "Type in '1' to get out of the tub and leave or '2' to stay put." << endl;
						cin >> confirmation;
						if (confirmation == 1)
						{
							cout << "You get out of the tub and before your character realizes it, two men grab" << playername << "'s legs and puts your character down. He/she gets beaten up and taken far far away." << endl;
							cout << "The end." << endl;
						}
						else if (confirmation == 2)
						{
							cout << playername << " stays put in the tub just in case." << endl;
							cout << "Two hours passes by and two men leave the shack and out the door." << endl;
							cout << "Type in '1' to leave the tub or '2' to stay put." << endl;
							if (confirmation == 1)
							{
								cout << playername << " leaves the tub and heads out the door. There is no sign of mafia anywhere and you walk home." << endl;
								cout << "The end." << endl;
							}
							else if (confirmation == 2)
							{
								cout << playername << " stays put in case of more mafia." << endl;
								cout << "A time period that feels like ten minutes passes by and a body moves." << endl;
								cout << "You think it's a mafia member, but it's someone different." << endl;
								cout << "The person grabs hold of your neck and you quickly faint." << endl;
								cout << "The end." << endl;
							}

						}

					}

				}
			}
		}
	}
	else if (confirmation == 2)
	{
		cout << playername << " has turned right. Your character meets a broken down hotel." << endl;
		cout << "Type in '1' to enter the hotel or '2' to move on." << endl;
		cin >> confirmation;
	}
	if (confirmation == 1)
	{
		cout << playername << " enters the hotel. Your character sees an elevator and a staircase." << endl;
		cout << "Type in '1' to push the button for the elevator or '2' to go up the staircase." << endl;
		cin >> confirmation;
	}
	else if (confirmation == 2)
	{
		cout << playername << " moves on and you meet a tree." << endl;
		cout << "Type in '1' to climb the tree or '2' to move on." << endl;
		cin >> confirmation;
		if (confirmation == 1)
		{
			cout << playername << " decides to climb the tree. You quickly realize that you are way too tired to climb the tree at that moment." << endl;
			cout << "The mafia sneaks behind you and before your character realizes, someone stabs him/her in the back with a knife." << endl;
			cout << "The end." << endl;
		}
		else if (confirmation == 2)
		{
			cout << playername << " goes on and the mafia shoots your character in the back." << endl;
			cout << "The end." << endl;
		}
			
		if (confirmation == 1)
			{
			cout << playername << " pushes the button for the elevator and the elevator door opens." << endl;
			cout << "But behind his/her back, the mafia rushes in and sees your character. What would you do?" << endl;
			cout << "Type in '1' to enter the elevator or '2' to go up the staircase." << endl;
			cin >> confirmation;
				if (confirmation == 1)
				{
				cout << playername << " enters the elevator and the doors close just in time that you mafia can't reach you." << endl;
				cout << playername << " looks at the floors avilable. But the only buttons that seem to work is floor 13." << endl;
				cout << "Type in '1' to go to the 5th or '2' to stay put in the elevator." << endl;
				cin >> confirmation;
					if (confirmation == 1)
					{
					cout << playername << " goes to the 13th floor. But the problem is, there is no thirteenth floor. The elevator stays motionless in the air and floating." << endl;
					cout << playername << " is stuck in the air. Unless your character wants to jump." << endl;
					cout << "Next time, don't go to the thirteenth floor." << endl;
					cout << "The end." << endl;
					}
					else if (confirmation == 2)
					{
					cout << playername << " stays put in the elevator." << endl;
					cout << playername << " the mafia opens the door to the elevator and the gun points at you." << endl;
					cout << "Your character tries to dodge the bullet, but too bad this isn't an action movie." << endl;
					cout << "The end." << endl;
					}
			}
			else if (confirmation == 2)
			{
				cout << playername << "runs to the staircase and runs up the stairs to the second floor. You hear the mafia running behind you." << endl;
				cout << "Type in '1' to run up another flight of stairs or '2' to look for a room to hide in." << endl;
				cin >> confirmation;
				if (confirmation == 1)
				{
					cout << playername << "runs up to the third floor." << playername << " hears the mafia go up one flight of stairs." << endl;
					cout << "Type in '1' to run up another flight of stairs or '2' to look for a room to hide in." << endl;
					cin >> confirmation;
				}
				if (confirmation == 1)
				{
					cout << playername << " runs up to the fourth floor. There are no rooms on this floor. There aren't any more stairs anymore." << endl;
					cout << "The mafia goes up to the fourth floor and finds" << playername << endl;
					cout << "Defenseless and scared, your character charges at the mafia." << endl;
					cout << "You probably know what happens here." << endl;
					cout << "The end." << endl;
				}
				else if (confirmation == 2)
				{
					cout << playername << " looks for a room to hide in. All the rooms are locked except for one." << endl;
					cout << "However, the room looks really creepy and it doesn't seem that the mafia are coming up the stairs." << endl;
					cout << "Type in '1' if you want to go in the room or '2' if you want to stay put." << endl;
					cin >> confirmation;
				}
				if (confirmation == 1)
				{
					cout << playername << " goes into the room. But it is all ruined and destroyed." << endl;
					cout << "It looks like... an animal lives there." << endl;
					cout << "At that moment, a bear jumps out at " << playername << " and before you can react, the bear bites your head." << endl;
					cout << "The end." << endl;
				}
				else if (confirmation == 2)
				{
					cout << playername << " stays put and doesn't do anything." << endl;
					cout << "Your character does not hear the mafia coming up the stairs." << endl;
					cout << "Instead," << playername << " looks outside the window and see the mafia running away." << endl;
					cout << "Type in '1' if you want to go down the stairs or '2' to stay put." << endl;
					cin >> confirmation;
					if (confirmation == 1)
					{
						cout << playername << " goes down the stairs and sees a deserted room." << endl;
						cout << playername << " does not see anyone and your character walk peacefully home." << endl;
						cout << "The end." << endl;
					}
					else if (confirmation == 2)
					{
						cout << playername << " stays put at where he/she is." << endl;
						cout << "But" << playername << " hears something growling coming from inside the room." << endl;
						cout << "Type in '1' if you wish for " << playername << " to go inside the room or '2' if you wish for him/her to dash downstairs." << endl;
						cin >> confirmation;
						if (confirmation == 1)
						{
							cout << playername << " out of curiousity enters the room." << endl;
							cout << "At that moment," << playername << " realizes what that sound is, a bear!" << endl;
							cout << "Before your character has a chance to run, the bear grabs you and drags you into its den." << endl;
							cout << "No matter how loud you shout for help, no one is going to save you." << endl;
							cout << "The end." << endl;
						}
						else if (confirmation == 2)
						{
							cout << playername << " is scared and runs downstairs all the way to the first floor." << endl;
							cout << "Your character looks around the lobby and sees no one." << endl;
							cout << "Type in '1' if you wish for your character to leave or '2' if you wish to see what is in the room." << endl;
							cin >> confirmation;
							if (confirmation == 1)
							{
								cout << playername << " heads out the door." << endl;
								cout << "There is no sound of mafia anywhere and " << playername << " walks home peacefully." << endl;
								cout << "The end." << endl;
							}
							else if (confirmation == 2)
							{
								cout << playername << " goes back up the stairs to see what it is." << endl;
								cout << playername << " goes back all the way up to the fourth floor and too the room where he/she heard growling." << endl;
								cout << playername << " peeks his/her head in the room." << endl;
								cout << "Suddenly, a huge shadow of a claw appears on the floor next to" << playername << '.' << endl;
								cout << "But before your character can react, the giant claw graps" << playername << "and drags him/her inside." << endl;
								cout << "The end." << endl;
							}

						}

					}

				}


				else if (confirmation == 2)
				{
					cout << playername << " looks for a room to hide in. But all the rooms on that floor are locked." << endl;
					cout << "The mafia group runs up the stairs and corners you, you have no where to run. The mafia shoots you before you can even blink." << endl;
					cout << "The end." << endl;
				}
			}
		}
	}
	else if (confirmation == 2)
	{
		cout << playername << " goes up the stairs to the second floor of the hotel." << endl;
		cout << playername << " hears the mafia burst in. What do you do?" << endl;
		cout << "Type in '1' to go up another flight of stairs or '2' to find a room to hide in." << endl;
		cin >> confirmation;
	}

	else if (confirmation == 2)
	{
		cout << playername << " moves on and sees a bush." << endl;
		cout << "Type in '1' to hide behind the bush or '2' to go on." << endl;
		cin >> confirmation;
	}
	if (confirmation == 1)
	{
		cout << playername << " hides behind the bush." << endl;
		cout << "The mafia looks around and sees your character hiding behind the bush." << endl;
		cout << "The mafia points a gun at you and before you can react, you're dead." << endl;
		cout << "The end." << endl;
	}
	else if (confirmation == 2)
	{
		cout << playername << " runs along, but the mafia finds you and kills you." << endl;
		cout << "The end." << endl;
	}

	else
	{
		cout << playername << " has died out of generousity. Try again later." << endl;
		cout << "The end." << endl;
	}

}

void DecisionOne()
{

}