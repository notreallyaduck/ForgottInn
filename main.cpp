#include <iostream>
#include <string>

using namespace std;


int main() {
    string userInput;
    int menuOption;
    int position;
    int location;
    bool hasRun = false;
    string inventory[10]{};
    int chosenOption;
    int currentLevel;
    int currentRoom;
    string Objects[5]{};
    int health = 10;
    int cash;
    int points = 0;
    string Room;

    start:;

    cout << "\nCompletely normal day sim";
    cout << "\nJust a regular tuesday.";
    cout << "\nType START to start a new game. Type EXIT to quit.";
    cin >> userInput;

    while (true) {

        if (userInput == "START" && health != 0) {

            //start

            cout << "\n\nYou're in the kitchen of a house, you almost think it's your own but there's something not quite right. There is a door to your left and a door to your right.";
            cout << "\n\nAvailable actions: ";
            cout << "\n[1] Look around";
            cout << "\n[2] Go right";
            cout << "\n[3] Go Left";
            cout << "\n\n" << points << " points";
            cout << "\nhealth " << health;
            cout << "\n\nType the number next to your preferred option.";

            cin >> chosenOption;

            if (chosenOption == 1) {

                cout << "You examine the room you are in, it seems like the ordinary family kitchen, a stove, oven, fridge, salt, cheese. Outside the window on your right, you see a mountain. On the left, you see a dark hallway.";


            } else if (chosenOption == 2){

                cout << "You stand at the base of the mountain, congratulations you've discovered nature. Take a point.";
                points++;
                cout << "\n\n+1 point";
                cout << "\n\nAvailable actions: ";
                cout << "\n[1] Climb mountain";
                cout << "\n[2] Go back to house";
                cout << "\n\n" << points << " points";
                cout << "\nhealth " << health;
                cout << "\n\nType the number next to your preferred option.";
                cin >> chosenOption;

                if (chosenOption == 1) {

                    cout << "\nYou climb the mountain (very fast). However, you forgot that you possess puny human lungs. The air up here is too thin for a human to breathe. You fall on the floor and stay there for the rest of eternity.";
                    health = 0;
                    cout << "\n\n-10 health";
                    cout << "\n\n" << points << " points";
                    cout << "\nhealth " << health;
                    cout << "\n\nType the number next to your preferred option.";

                } else if (chosenOption == 2){

                    cout << "\nYou have returned to the house. From the outside, it looks much less like your house, it's newer looking, more fresh.";
                    cout << "\n\n" << points << " points";
                    cout << "\nhealth " << health;
                    cout << "\n[1] Enter house";
                    cout << "\n[2] Look at house";
                    cout << "\n\nType the number next to your preferred option.";
                    cin >> chosenOption;

                    if (chosenOption == 2) {

                        cout << "You look at the house, it's a house. What do you want from me?";


                    } else if (chosenOption == 1) {

                        cout
                                << "You're back in the kitchen. There's a light on in the hallway now. A tiny green light illuminates the hallway from a central point in the ceiling.";
                        cout << "\n\n+1 point";
                        cout << "\n\nAvailable actions: ";
                        cout << "\n[1] Climb mountain";
                        cout << "\n[2] Go back to house";
                        cout << "\n\n" << points << " points";
                        cout << "\nhealth " << health;
                        cout << "\n\nType the number next to your preferred option.";
                        cin >> chosenOption;
                    } else {
                        cout << "Type a valid option";

                    }

                } else {
                    cout << "Type a valid option";

                }

            } else {
                cout << "Type a valid option";

            }


        } else if(health == 0){
            cout << "\nyou have died\n\n";
            userInput = "0";
            health = 10;
            goto start;

        } else if (userInput == "EXIT") {
            goto exit;

        } else {
            cout << "Type a valid option";

        }
    }
    exit:;


}









