#include <iostream>

#include <string>

#include "ForgotPlayer.h"

#include "ForgotScene.h"

#include "ForgotBattle.h"

using namespace std;

void
verboseOutput(const string & userInput, int newPosition, int failedInputs) { //text to display if verbose mode is enabled
    cout << "\n\nVERBOSE:";
    cout << "\nuserInput: " << userInput; //display accepted userInput
    cout << "\nNEW POSITION: " << newPosition; //display newPosition from scenes
    cout << "\nNumber of failed inputs: " << failedInputs; //number of failed inputs so far
}

int main() {

    cout << "\nForgottInn v1.2.4";

    string userInput; //To hold any user inputs
    // string userInput;
    bool verbose = false; //Whether verbose mode is enabled or not
    int jumpInput = 0; //where to jump to

    //main menu
    menu: ; //to return to main menu
    cout << "\n\n\n[Main Menu]" //print main menu
            "\nWelcome to the ForgottInn"
            "\n\n[1] How to play"
            "\n[2] About"
            "\n[3] Play"
            "\n\nType the number before the option you want to select.\n";

    getline(cin >> ws, userInput);
    if (userInput == "1") { //How to play text to display if option 1 is selected
        cout << "\n\n\nForgottInn is entirely text based game."
                "\nTo play the game, read the descriptions that come up and action items you can perform. \nThese will usually be listed with a number next to them, similar to the numbers on the main menu."
                "\nFor example:"
                "\n\n[1] Enter Room"
                "\n[2] Turn on lights"
                "\n\nOccasionally, you will encounter an enemy, at which point the game will transition from being a single list to a battle mode with health, combat options and enemy information. \nIt will be indicated when this happens.";
        goto menu;
    } else if (userInput == "2") { //About text to display if option 2 is selected
        cout
                <<
                "\nForgottInn is a text based adventure created by Sudesh Arunachalam for a Software Design and Development Task in Q1 of 2022."
                "\nHave fun :)";
        goto menu;
    } else if (userInput == "3") {
        cout << "\nStarting Forgottinn\n\n";
    } else { //if user does not select an option on the list
        cout << "Enter a valid option";
        goto menu;
    }

    ForgotPlayer player1(10, true); //initiate player
    ForgotScene playerScene1(0); //initiate player 1's scene
    ForgotBattle Battle1(0); //initiate player battles

    //welcome message to display at start of game
    cout <<
         "\n\nYou're standing in a field, completely deserted. Apart from the building to your north, taller than the clouds. "
         "\nAlmost ominous with the state of the weather, like you know a storm is coming. You hear the wind in your ears, feel it on your skin. "
         "\nIt's cold, you desperately want to go inside."
         "\nWell, there's nothing stopping you going into this building. The lights are all on, the door is open. Hotels usually have their heaters on in this weather.\n"
         "\nOr at least, you think they do."
         "\nYou don't know if they do, you don't know how anything works, you don't remember.\n"
         "\nStart by remembering your name\n"
         "What's your name?\n";
    getline(std::cin >> std::ws, userInput);

    if (userInput == "verbose" ||
        userInput == "Verbose") { //Enable verbose mode if user types "verbose" into name field
        verbose = true;
        player1.setName("(Verbose Mode)");
        player1.setPosition(0); //sets player's new position to scene 0 (Field)
    } else { //Sets name to userInput if it is not verbose
        player1.setName(userInput);
    }

    if (player1.getName() != "" && !verbose) { //text to display if userName has not been set to verbose
        cout << "Interesting " << player1.getName() << ", you remember your name.";
        player1.setPosition(0); //sets player's new position to scene 0 (Field)
    }

    while (player1.getHealth() > 0 && playerScene1.getFailedInputs() != 10 && !Battle1.isGameOver()) {

        if (verbose) { //If statement for verbose output
            verboseOutput(userInput, playerScene1.getNewPosition(), playerScene1.getFailedInputs());
        }

        cout << "\nHealth: " << player1.getHealth(); //prints player's health
        playerScene1.getLook(player1.getPosition()); //Displays scene description from ForgotScene.h
        cout << "\nItems in this room:";

        for (int i = 0; i < 5; i++) { //Gets all items in a scene
            if (i <= 4) {
                cout << " " << playerScene1.getObjects(player1.getPosition(), i);
            }
        }

        cout << "\nMap, Drop, Take, Inventory and Exit are universal commands\n"; //help message to display at all times

        playerScene1.getActions(
                player1.getPosition()); //gets available actions for player's current position from ForgotScene.h
        cin >> userInput; //Save's player input for selected action

        if (userInput == "jump" && verbose ||
            userInput == "Jump" && verbose) { //Jump to any room (for testing purposes)
            cout << "\nWhere would you like to jump?\n";
            cin >> jumpInput;
            if (jumpInput > 18) {
                cout << "\nenter a scene 18 or below";
            } else {
                cout << "i tried to jump";
                player1.setPosition(jumpInput);
            }

        } else if (userInput == "give" && verbose ||
                   userInput == "Give" && verbose) { //Give any item to player (for testing purposes)
            string newItem;
            cout << "\nWhat would you like to add to inventory?\n";
            getline(std::cin >> std::ws, newItem);
            player1.addToInventory(newItem);
            cout << "\nAdded " << newItem;

        } else if (userInput == "remove" && verbose ||
                   userInput == "Remove" && verbose) { //Remove any item from player (for testing purposes)
            string itemToRemove;
            cout << "\nWhat would you like to remove from inventory?\n";
            getline(std::cin >> std::ws, itemToRemove);
            cout << "\n\nInventory:";
            for (int i = 0; i < 5; i++) {
                if (i <= 4) {
                    cout << "\n[" << i + 1 << "] " <<
                         player1.inventory[i]; //Gets every item in inventory and displays it with a number next to it like this [1]
                }
                for (int w = 0; w < 5; w++) {
                    if (player1.getInventory(w) ==
                        itemToRemove) { //Looks for specified item in player's inventory and removes it
                        player1.clearInventorySlot(w);
                        playerScene1.setDroppedObject(itemToRemove,
                                                      player1.getPosition()); //Sends dropped item to current scene
                    }

                }
            }
            cout << "\n\n" << itemToRemove << " has been removed\n";
        } else if (userInput == "exit" || userInput == "quit" || userInput == "Exit" ||
                   userInput == "Quit") { //End the process by exiting the loop
            goto exit;

        } else if (userInput == "inventory" || userInput == "Inventory" ||
                   userInput == "inv") { //Display the player's inventory,
            cout << "\nType drop to remove an item from your inventory";
            cout << "\n\nInventory:";
            for (int i = 0; i < 5; i++) {
                if (i <= 4) {
                    cout << "\n[" << i + 1 << "] " <<
                         player1.inventory[i]; //Gets every item in inventory and displays it with a number next to it like this [1]
                }
            }

        } else if (userInput == "drop" ||
                   userInput == "Drop") { //Command to drop and item from inventory and into scene
            cout << "\n\nNote: Drop is case sensitive\n";

            cout << "\nEnter an item to remove\n> ";
            string itemToRemove; //item to remove from player inventory
            getline(std::cin >> std::ws, itemToRemove);
            for (int i = 0; i < 5; i++) {
                if (player1.getInventory(i) ==
                    itemToRemove) { //Looks for specified item in player's inventory and removes it
                    player1.clearInventorySlot(i);
                    cout << "\n" << itemToRemove << " has been removed";
                    playerScene1.setDroppedObject(itemToRemove,
                                                  player1.getPosition()); //Sends dropped item to current scene
                }
            }

        } else if (userInput == "take" || userInput == "Take" ||
                   userInput ==
                   "Pick") { //Command to pick up an item from scene and place it in the player's inventory
            cout << "\nWhat item would you like to take?\n> ";
            getline(std::cin >> std::ws, userInput); //Player specifies item to take;
            player1.addToInventory(playerScene1.takenItem(userInput,
                                                          player1.getPosition())); //Asks ForgotScene.h if item exists at the current location and puts it in the players inventory
        } else if (userInput == "Map" || userInput == "map") { //Command to display an onscreen map
            playerScene1.getMap(
                    player1.getPosition()); //Current position is sent to getMap and map is printed in the console (cout)
        } else {
            playerScene1.setChosenAction(player1.getPosition(),
                                         userInput); //Sets the chosen action as userInput if userInput is not a universal command
            player1.setPosition(playerScene1.newPosition); //Sets new position as demanded by ForgotScene.h
            Battle1.getBattle(playerScene1.getNewBattle(),
                              player1.getHealth()); //Gets new battle and starts battle sequence if required, if not, this does not output anything
            player1.addToInventory(Battle1.getTakenItem()); //Item is added to inventory if battled enemy drops loot
            playerScene1.resetNewBattle(); //resets new battle variable so player isnt forced into another battle immediately
            Battle1.resetTakenItem(); //resets Taken item variable so player does not get an infinite amount of the loot
            player1.setLife(
                    playerScene1.getKilledPlayer()); //changes the health of player to 0 if an action in a scene results in death
            player1.changeHealth(Battle1.getTakenDamage()); //changes health based on damage taken during battle

        }
        userInput.clear();

    }

    if (Battle1.isGameOver()) { //Ends process with no output because ForgotBattle will output the end message
        string endofgame;
        cin >> endofgame;
    } else {
        string endofgame;
        cout << "\a\nYou have died " << player1.getName() << ". Restart the game to have another go."; //death message
        if (playerScene1.getFailedInputs() == 10) {
            cout << "\nReason: inability to follow instructions"; //death message due to entering gibberish too many times
        } else {
            cout << "\nReason: death"; //death message for health <= 0
        }
        cin >>
            endofgame;
    }
    exit: ;

}