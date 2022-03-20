#include <iostream>

#include <string>

#include "ForgotPlayer.h"

#include "ForgotScene.h"

#include "ForgotBattle.h"

using namespace std;

int verboseOutput(string userInput, int newPosition, int failedInputs) {
    cout << "\n\nVERBOSE:";
    cout << "\nuserInput: " << userInput;
    cout << "\nNEW POSITION: " << newPosition;
    cout << "\nNumber of failed inputs: " << failedInputs;
}

int main() {

    string userInput;
    bool verbose = false;
    int jumpInput = 0;

    //main menu
    menu:;
    cout << "\n\n\n[Main Menu]"
            "\nWelcome to the ForgottInn"
            "\n\n[1] How to play"
            "\n[2] About"
            "\n[3] Play"
            "\n\nType the number before the option you want to select.\n";

    cin >> userInput;
    if (userInput == "1") {
        cout << "\n\n\nForgottInn is entirely text based game."
                "\nTo play the game, read the descriptions that come up and action items you can perform. \nThese will usually be listed with a number next to them, similar to the numbers on the main menu."
                "\nFor example:"
                "\n\n[1] Enter Room"
                "\n[2] Turn on lights"
                "\n\nOccasionally, you will encounter an enemy, at which point the game will transition from being a single list to a battle mode with health, combat options and enemy information. \nIt will be indicated when this happens.";
        goto menu;
    } else if (userInput == "2") {
        cout
                <<
                "\nForgottInn is a text based adventure created by Sudesh Arunachalam for a Software Design and Development Task in Q1 of 2022."
                "\nHave fun :)";
        goto menu;
    } else if (userInput == "3") {
        cout << "\nStarting Forgottinn\n\n";
    } else {
        cout << "Enter a valid option";
        goto menu;
    }

    ForgotPlayer player1(10, true); //initiate player
    ForgotScene playerScene1(0); //initiate player 1's scene
    ForgotBattle Battle1(0); //initiate player battles

    //welcome message
    cout <<
         "\n\nYou’re standing in a field, completely deserted. Apart from the building to your north, taller than the clouds. "
         "\nAlmost ominous with the state of the weather, like you know a storm is coming. You hear the wind in your ears, feel it on your skin. "
         "\nIt’s cold, you desperately want to go inside."
         "\nWell, there's nothing stopping you going into this building. The lights are all on, the door is open. Hotels usually have their heaters on in this weather.\n"
         "\nOr at least, you think they do."
         "\nYou don’t know if they do, you don't know how anything works, you don't remember.\n"
         "\nStart by remembering your name\n"
         "What’s your name?\n";
    cin >> userInput;

    if (userInput == "verbose") {
        verbose = true;
        player1.setName("(Verbose Mode)");
        player1.setPosition(0);
    } else {
        player1.setName(userInput);
    }

    if (player1.getName() != "" && !verbose) {
        cout << "Interesting " << player1.getName() << ", you remember your name.";
        player1.setPosition(0);
    }

    while (player1.getHealth() > 0 && playerScene1.getFailedInputs() != 10) {

        if (verbose) { //If statement for verbose output
            verboseOutput(userInput, playerScene1.getNewPosition(), playerScene1.getFailedInputs());
        }

        cout << "\nHealth: " << player1.getHealth();
        playerScene1.getLook(player1.getPosition());
        playerScene1.getActions(player1.getPosition());
        cin >> userInput;


        if (userInput == "jump" && verbose) { //Jump to any room (for testing purposes)
            cout << "\nWhere would you like to jump?\n";
            cin >> jumpInput;
            if (jumpInput > 18) {
                cout << "\nenter a scene 18 or below";
            } else {
                player1.setPosition(jumpInput);
            }

        } else if (userInput == "exit") {
            goto exit;

        } else if (userInput == "inventory") {
            cout << "\nType drop to remove an item from your inventory";
            cout << "\n\nInventory:";
            for (int i = 0; i < 5; i++) {
                if (i <= 4) {
                    cout << "\n[" << i + 1 << "] " << player1.inventory[i];
                }
            }
        } else if (userInput == "drop"){
            cout << "\n\nInventory:";
            for (int i = 0; i < 5; i++) {
                if (i <= 4) {
                    cout << "\n[" << i + 1 << "] " << player1.inventory[i];
                }
            }

            cout<<"\nEnter an item to remove: ";
            string wordQuery;
            cin >> wordQuery;
            for (int i = 0; i < 5; i++) {
                if (player1.getInventory(i) == wordQuery) {
                    player1.clearInventorySlot(i);
                    cout << "\n" << wordQuery << " has been removed";

                }
            }

        } else {

            playerScene1.setChosenAction(player1.getPosition(), userInput);
            player1.setPosition(playerScene1.newPosition);
            Battle1.getBattle(playerScene1.getNewBattle(), player1.getHealth());
            player1.addToInventory(Battle1.getTakenItem());
            playerScene1.resetNewBattle();
            Battle1.resetTakenItem();
            player1.setLife(playerScene1.getKilledPlayer());
            player1.changeHealth(Battle1.getTakenDamage());

        }
    }

    if (Battle1.isGameOver()) {

    } else {
        cout << "\a\nYou have died " << player1.getName() << ". Restart the game to play again.";
        if (playerScene1.getFailedInputs() == 10) {
            cout << "\nReason: inability to follow instructions";
        } else {
            cout << "\nReason: death";
        }
    }
    exit:;

}