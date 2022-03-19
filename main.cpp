#include <iostream>
#include <string>
#include "ForgotPlayer.h"
#include "ForgotScene.h"

using namespace std;


int main() {
    string userName;
    string userInput;
    //welcome message
    cout << "\nWelcome to the ForgottInn"

            "\n\nYou’re standing in a field, completely deserted. Apart from the building to your north, taller than the clouds. Almost ominous with the state of the weather, like you know a storm is coming. You hear the wind in your ears, feel it on your skin. It’s cold, you desperately want to go inside. \n"
            "\nWell, there's nothing stopping you going into this building. The lights are all on, the door is open. Hotels usually have their heaters on in this weather.\n"
            "\nOr at least, you think they do."
            "\nYou don’t know if they do, you don't know how anything works, you don't remember.\n"
            "\nStart by remembering your name\n"
            "What’s your name?\n";
    cin >> userName;
    ForgotPlayer player1(userName, 10, true); //initiate player
    ForgotScene playerScene1(0);  //initiate player 1's scene

    if (!empty(player1.getName())) {
        cout << "Interesting, you remember your name. Type look to continue " << player1.getName() << ".";
        player1.setPosition(0);
    }

    while (player1.getHealth() > 0) {
        playerScene1.getLook(player1.getPosition());
        playerScene1.getActions(player1.getPosition());
        player1.setPosition(playerScene1.newPosition);
        player1.setHealth(playerScene1.getNewHealth());
        cout << "\nNEW POSITION: " << playerScene1.getNewPosition();
    }

    cout << "\nYou have died. Restart the game to play again.";
    goto exit;

    exit:;

}