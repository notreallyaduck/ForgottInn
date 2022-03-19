//
// Created by Sudesh Arunachalam on 12/3/2022.
//

#ifndef FORGOTTINN_FORGOTSCENE_H
#define FORGOTTINN_FORGOTSCENE_H

#include <iostream>
#include <string>

using namespace std;

class ForgotScene {
public:
    int currentScene;
    int newPosition = 0;
    string chosenAction;
    int newHealth;
    int failedInputs;


    ForgotScene(int Scene) {
        currentScene = Scene;
    }

    // getters

    //scene descriptors
    void getLook(int scene) {
        switch (scene) {
            case 0:
                cout << "\n\nField";
                cout
                        << "\nYou’re standing in a field, completely deserted. Apart from the building to your north, taller than the clouds. Almost ominous with the state of the weather, like you know a storm is coming. You hear the wind in your ears, feel it on your skin. It’s cold, you desperately want to go inside.\n";
                break;
            case 1:
                cout << "\n\nFront Door";
                cout
                        << "\nYou’ve walked up to the door. You can feel the warmth emanating from the door, the warm draught flooding your feet with warm air. You’re longing to open the door. Do you do it? Do you want to? You don’t know what this place is. You don’t know how you got here. Do you risk it?\n";
                break;
            case 2:
                cout << "\n\nLobby";
                cout
                        << "\nYou were right, it’s warm in here. Maybe you do remember how some things work. There’s nobody here. You can see the elevator to the north, reception to the left and cafe on the right.\n";
                break;
            case 3:
                cout << "\n\nReception";
                cout
                        << "\nYou walk up to the reception, there’s nobody here, you see the receptionist’s computer on. A cash register and a bowl of mints.\n";
                break;
            case 4:
                cout << "\n\nCafe";
                cout
                        << "\nYou rob the cash register and find some cash, you see a very appealing Not McDonald's cheeseburger. You take the cheeseburger and put the money back in the cash register to pay for it. Food.\n";
                break;

            case 5:
                cout << "\nElevator";
                cout
                        << "\nYou’ve entered an elevator, mirrors on all sides, you look at your face. It looks familiar. The bottom half of each wall is filled with buttons. 3 of these buttons are lit up.\n";
                break;

            case 6:
                cout << "\n\nFloor 1 hallway";
                cout
                        << "\nRays of afternoon sunlight shine through the dusty windows, illuminating the hallway with a tinge of red from the carpet laid out on the floor.\n";
                break;

            case 7:
                cout << "\n\nKitchen";
                cout
                        << "\nYou enter the hotel’s kitchen, it’s just as empty here as it was downstairs. It smells of fresh roast chicken, you’d like some roast chicken right now. But you don’t know how to cook. There seems to be a lot more blood on the floor than you’d normally find in a kitchen. Seems like a bit of a health and safety issue.";
                break;
            case 8:
                cout << "\n\nRoom 103";
                break;
            case 9:
                cout << "\n\nRoom 106";
                break;
            case 10:
                cout << "\n\nRoom 108";
                break;
            case 11:
                cout << "\n\nFloor 2 hallway";
                cout
                        << "\nA hallway, it has boarded up windows. Golden slivers of light bleed through the slits between the planks of wood. The carpet here is brown. Doors line the hallway, numbered from 201 - 245. Most of them are locked, indicated by a red light on the door handles. 3 of them are unlocked.";
                break;
            case 12:
                cout << "\n\nRoom 204";
                break;
            case 13:
                cout << "\n\nRoom 209";
                break;
            case 14:
                cout << "\n\nRoom 218";
                break;
            case 15:
                cout << "\n\nFloor 3 hallway";
                cout
                        << "\nA hallway, This hallway does not have any windows. It is almost pitch black, only illuminated by a series of small lights. You cannot make out the colour of the carpet here. Doors line the hallway, numbered from 301 - ?. Most of them are locked, indicated by a red light on the door handles. 3 of them are unlocked.";
                break;
            case 16:
                cout << "\n\nRoom 304";
                break;
            case 17:
                cout << "\n\nRoom 312";
                break;
            case 18:
                cout << "\n\nRoom 315";
                break;

        }
    }



    //scene actions
    int getActions(int scene) {
        cout << "\nAvailable Actions:";
        switch (scene) {
            case 0:
                cout << "\n[1] Enter Hotel\n> ";
                break;
            case 1:
                cout << "\n[1] Enter the hotel"
                        "\n[2] Go back outside\n> ";

                break;
            case 2:
                cout << "\n[1] Exit the hotel"
                        "\n[2] Go to the reception"
                        "\n[3] Go to the cafe\n> ";

                break;
            case 3:
                cout << "\n[1] Go back to the lobby"
                        "\n[2] Take some money"
                        "\n[3] Find empty rooms"
                        "\n[4] Enter the elevator\n> ";

                break;
            case 4:
                cout << "\n[1] Go back to the lobby"
                        "\n[2] Eat some food"
                        "\n[3] Sleep\n> ";

                break;
            case 5:
                cout << "\n[1] Go back to the lobby"
                        "\n[2] Go to level one"
                        "\n[3] Go to level two"
                        "\n[4] Go to level three\n> ";

                break;
            case 6:
                cout << "\n[1] Go to the kitchen"
                        "\n[2] Go to room 103"
                        "\n[3] Go to room 106"
                        "\n[4] Go to room 108\n> ";

                break;
            case 7:
                cout << "\n[1] Go back to the hallway\n> ";

                break;
            case 8:
                cout << "WIP";
                cout << "\n[1] Go back to hallway";
                cout << "\n[2] Try to find the light switch";
                cout << "\n[3] Wait for your eyes to adjust to the light";
                cout << "\n[4] Cheese";

                break;
            case 9:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";

                break;
            case 10:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";

                break;
            case 11:
                cout << "\n[1] Go to room 204"
                        "\n[2] Go to room 209"
                        "\n[3] Go to room 218\n> ";

                break;
            case 12:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";

                break;
            case 13:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";
                cin >> chosenAction;
                if (chosenAction == "1") {
                    newPosition = 11;
                }
                break;
            case 14:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";
                cin >> chosenAction;
                if (chosenAction == "1") {
                    newPosition = 11;
                }
                break;
            case 15:
                cout << "\n[1] Go to room 304"
                        "\n[2] Go to room 312"
                        "\n[3] Go to room 315\n> ";
                cin >> chosenAction;
                if (chosenAction == "1") {
                    newPosition = 16;
                } else if (chosenAction == "2") {
                    newPosition = 17;
                } else if (chosenAction == "3") {
                    newPosition = 18;
                }
                break;
            case 16:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";
                cin >> chosenAction;
                if (chosenAction == "1") {
                    newPosition = 15;
                }
                break;
            case 17:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";
                cin >> chosenAction;
                if (chosenAction == "1") {
                    newPosition = 15;
                }
                break;
            case 18:
                cout << "WIP";
                cout << "\n[1] Go back to hallway\n> ";
                cin >> chosenAction;
                if (chosenAction == "1") {
                    newPosition = 15;
                }
                break;
            default:
                cout << "\nError: Where you at bro?.\n> ";
                break;
        }
    }

    int setChosenAction(int scene, string chosenAction){
        switch (scene) {
            case 0:
                cout << "\n[1] Enter Hotel\n> ";
                if (chosenAction == "1") {
                    newPosition = 1;
                } else {
                    cout << "\nenter a valid option";
                    ++failedInputs;
                }
                break;
            case 1:
                if (chosenAction == "1") {
                    newPosition = 2;
                } else if (chosenAction == "2") {
                    newPosition = 0;
                } else {
                    cout << "\nenter a valid option";
                    ++failedInputs;
                }
                break;
            case 2:
                if (chosenAction == "1") {
                    newPosition = 1;
                } else if (chosenAction == "2") {
                    newPosition = 3;
                } else if (chosenAction == "3") {
                    newPosition = 4;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 3:
                if (chosenAction == "1") {
                    newPosition = 2;
                } else if (chosenAction == "2") {
                    cout
                            << "\nYou take some money from this cash register and put it in your pockets, it might come in handy.\n";
                } else if (chosenAction == "3") {
                    cout
                            << "\nYou look at the computer screen and see 9 blinking lights, it looks like rooms 103, 106 and 108 are free on level one, rooms 204, 209 and 218 are free on level two and rooms 304, 312 and 315 on level three.\n";
                } else if (chosenAction == "4") {
                    newPosition = 5;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 4:
                if (chosenAction == "1") {
                    newPosition = 2;
                } else if (chosenAction == "2") {
                    cout
                            << "\nYou take some food and put it in your mouth. You chew and swallow. It's food, what else do you expect?\n";
                } else if (chosenAction == "3") {
                    cout
                            << "\nYou decide to take a bit of a nap, unfortunately, you slept a bit too long. Something comes and eats you, you don't know what, because you were sleeping.\n";
                    newHealth = -10;
                    cout << newHealth << " health";
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 5:
                if (chosenAction == "1") {
                    newPosition = 2;
                } else if (chosenAction == "2") {
                    newPosition = 6;
                } else if (chosenAction == "3") {
                    newPosition = 11;
                    cout << newHealth << " health";
                } else if (chosenAction == "4") {
                    newPosition = 15;
                }
                if (chosenAction == "2" || chosenAction == "3" || chosenAction == "4") {
                    cout
                            << "\nYou step out of the elevator and into a hallway, the elevator makes a soft ding behind you as the doors close and it whirs back down to the ground floor. There are no buttons next to the elevator doors. You'll have to find another way back down.";
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 6:
                if (chosenAction == "1") {
                    newPosition = 7;
                } else if (chosenAction == "2") {
                    newPosition = 8;
                } else if (chosenAction == "3") {
                    newPosition = 9;
                } else if (chosenAction == "4") {
                    newPosition = 10;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 7:
                if (chosenAction == "1") {
                    newPosition = 6;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 8:
                if (chosenAction == "1") {
                    newPosition = 6;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 9:
                if (chosenAction == "1") {
                    newPosition = 6;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 10:

                if (chosenAction == "1") {
                    newPosition = 6;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 11:
                if (chosenAction == "1") {
                    newPosition = 12;
                } else if (chosenAction == "2") {
                    newPosition = 13;
                } else if (chosenAction == "3") {
                    newPosition = 14;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 12:
                if (chosenAction == "1") {
                    newPosition = 11;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 13:
                if (chosenAction == "1") {
                    newPosition = 11;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 14:
                if (chosenAction == "1") {
                    newPosition = 11;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 15:
                if (chosenAction == "1") {
                    newPosition = 16;
                } else if (chosenAction == "2") {
                    newPosition = 17;
                } else if (chosenAction == "3") {
                    newPosition = 18;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 16:
                if (chosenAction == "1") {
                    newPosition = 15;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 17:
                if (chosenAction == "1") {
                    newPosition = 15;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            case 18:
                if (chosenAction == "1") {
                    newPosition = 15;
                } else {
                    cout << "\nenter a valid option";
                    failedInputs++;
                }
                break;
            default:
                cout << "\nError: Where you at bro?.\n> ";
                break;
        }
    }

    //player new position
    int getNewPosition() {
        return newPosition;
    }

    int getNewHealth() {
        return newHealth;
    }

    int getFailedInputs(){
        return failedInputs;
    }


};


#endif //FORGOTTINN_FORGOTSCENE_H
