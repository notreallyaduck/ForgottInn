//
// Created by Sudesh Arunachalam on 12/3/2022.
//

#ifndef FORGOTTINN_FORGOTSCENE_H
#define FORGOTTINN_FORGOTSCENE_H
#include <iostream>
#include <string>
#include "ForgotPlayer.h"

using namespace std;

class ForgotScene {
public:
    int action;
    int currentScene;
    int newPosition;
    int chosenAction;


    ForgotScene(int Scene) {
        currentScene = Scene;
    }

    // getters

    int getLook(int currentScene){
        switch(currentScene){
            case 0:
                cout << "\n\nField";
                cout << "\nYou’re standing in a field, completely deserted. Apart from the building to your north, taller than the clouds. Almost ominous with the state of the weather, like you know a storm is coming. You hear the wind in your ears, feel it on your skin. It’s cold, you desperately want to go inside.\n";
                break;
            case 1:
                cout << "\n\nFront Door";
                cout << "\nYou’ve walked up to the door. You can feel the warmth emanating from the door, the warm draught flooding your feet with warm air. You’re longing to open the door. Do you do it? Do you want to? You don’t know what this place is. You don’t know how you got here. Do you risk it?\n";
                break;
            case 2:
                cout << "\n\nLobby";
                cout << "\nYou were right, it’s warm in here. Maybe you do remember how some things work. There’s nobody here. You can see the elevator to the north, reception to the left and cafe on the right.\n";
                break;
            case 3:
                cout << "\n\nReception";
                cout << "\nYou walk up to the reception, there’s nobody here, you see the receptionist’s computer on. A cash register and a bowl of mints.\n";
                break;
            case 4:
                cout << "\n\nCafe";
                cout << "\nYou rob the cash register and find some cash, you see a very appealing large black. You take the large black and put the money back in the cash register to pay for it. You are much less tired now and you’ve discovered caffeine.\n";
                break;

            case 5:
                cout << "\nElevator";
                cout << "\nYou’ve entered an elevator, mirrors on all sides, you look at your face. It looks familiar. The bottom half of each wall is filled with buttons. 3 of these buttons are lit up.\n";
                break;

            case 6:
                cout << "\n\nFloor 1 hallway";
                cout << "\nRays of afternoon sunlight shine through the dusty windows, illuminating the hallway with a tinge of red from the carpet laid out on the floor.\n";
                break;

        }
    }

    int getActions(int currentScene){
        switch(currentScene){
            case 0:
                cout << "\n[1] Enter Hotel\n";
                cin >> chosenAction;
                if (chosenAction == 1){
                    newPosition = 1;
                } else {
                    cout << "\nSelect a valid option\n";
                }
                break;
            case 1:
                cout << "\n[1] Enter the hotel";
                cout << "\n[2] Go back outside\n";
                cin >> chosenAction;
                if (chosenAction == 1){
                    newPosition = 2;
                } else if (chosenAction == 2){
                    newPosition = 0;
                } else {
                    cout << "\nSelect a valid option\n";
                }
                break;
            case 2:
                cout << "\n[1] Exit the hotel";
                cout << "\n[2] Go to the reception";
                cout << "\n[3] Go to the cafe";
                cin >> chosenAction;
                if (chosenAction == 1){
                    newPosition = 1;
                } else if (chosenAction == 2){
                    newPosition = 3;
                } else if (chosenAction == 3){
                    newPosition = 4;
                } else {
                    cout << "\nSelect a valid option\n";
                }
                break;
            case 3:
                cout << "\n[1] Go back to the lobby";
                cout << "\n[2] Take some money";
                cout << "\n[3] Find empty rooms";
                cin >> chosenAction;
                if (chosenAction == 1){
                    newPosition = 2;
                } else if (chosenAction == 2){
                    cout << "\nYou take some money from this cash register and put it in your pockets, it might come in handy.\n";
                } else if (chosenAction == 3){
                    cout << "\nYou look at the computer screen and see 9 blinking lights, it looks like rooms 103, 106 and 108 are free on level one, rooms 204, 209 and 218 are free on level two and rooms 304, 312 and 315 on level three.\n";
                } else {
                    cout << "\nSelect a valid option\n";
                }
                break;
            default:
                cout << "\nEnter a valid option\n";
                break;
        }
    }

    int getNewPosition(){
        return newPosition;
    }

    int getChosenAction(){
        return chosenAction;
    }


};


#endif //FORGOTTINN_FORGOTSCENE_H
