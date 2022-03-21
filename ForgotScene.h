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
    int newPosition = 0;
    int failedInputs = 0;
    int newBattle = 0;
    string currentScene;
    bool killedPlayer = false;

    //scene variables (for variable scene descriptions)
    bool is103LightOn = false;
    bool is108Locked = true;
    bool is218Locked = true;

    //storing objects in scenes
    string objects0[10] = {};
    string objects1[10] = {};
    string objects2[10] = {};
    string objects3[10] = {"Mints"};
    string objects4[10] = {"Coffee"};
    string objects5[10] = {};
    string objects6[10] = {};
    string objects7[10] = {"Roast Chicken"};
    string objects8[10] = {"Keys"};
    string objects9[10] = {};
    string objects10[10] = {"Newspaper"};
    string objects11[10] = {};
    string objects12[10] = {"Toilet Cleaner"};
    string objects13[10] = {};
    string objects14[10] = {};
    string objects15[10] = {};
    string objects16[10] = {"Frozen Goose"};
    string objects17[10] = {};
    string objects18[10] = {};
    string objects19[10] = {};



    ForgotScene(int Scene) {
        currentScene = Scene;
    }

    // getters

    //scene descriptors
    void getLook(int scene) { //prints scene description depending on the player's current position
        switch (scene) {
            case 0:
                cout << "\n\nField";
                cout
                        <<
                        "\nYou’re standing in a field, completely deserted. Apart from the building to your north, taller than the clouds. "
                        "\nAlmost ominous with the state of the weather, like you know a storm is coming. You hear the wind in your ears, feel it on your skin. "
                        "\nIt’s cold, you desperately want to go inside.\n";
                break;
            case 1:
                cout << "\n\nFront Door";
                cout
                        <<
                        "\nYou’ve walked up to the door. You can feel the warmth emanating from the door, the warm draught flooding your feet with warm air. "
                        "\nYou’re longing to open the door. Do you do it? Do you want to? You don’t know what this place is. You don’t know how you got here. Do you risk it?\n";
                break;
            case 2:
                cout << "\n\nLobby";
                cout
                        <<
                        "\nYou were right, it’s warm in here. Maybe you do remember how some things work. There’s nobody here. "
                        "\nYou can see the elevator to the north, reception to the left and cafe on the right.\n";
                break;
            case 3:
                cout << "\n\nReception";
                cout
                        <<
                        "\nYou walk up to the reception, there’s nobody here, you see the receptionist’s computer on. A cash register and a bowl of mints.\n";
                break;
            case 4:
                cout << "\n\nCafe";
                cout
                        <<
                        "\nYou rob the cash register and find some cash, you see a very appealing Not McDonald's cheeseburger. "
                        "\nYou take the cheeseburger and put the money back in the cash register to pay for it. Food.\n";
                break;

            case 5:
                cout << "\n\nElevator";
                cout
                        <<
                        "\nYou’ve entered an elevator, mirrors on all sides, you look at your face. It looks familiar. The bottom half of each wall is filled with buttons. 3 of these buttons are lit up.\n";
                break;

            case 6:
                cout << "\n\nFloor 1 hallway";
                cout
                        <<
                        "\nRays of afternoon sunlight shine through the dusty windows, illuminating the hallway with a tinge of red from the carpet laid out on the floor.\n";
                break;

            case 7:
                cout << "\n\nKitchen";
                cout
                        <<
                        "\nYou enter the hotel’s kitchen, it’s just as empty here as it was downstairs. It smells of fresh roast chicken, you’d like some roast chicken right now. But you don’t know how to cook. There seems to be a lot more blood on the floor than you’d normally find in a kitchen. Seems like a bit of a health and safety issue.";
                break;
            case 8:
                cout << "\n\nRoom 103";
                if (!is103LightOn) {
                    cout
                            <<
                            "\nThe door shuts behind you. This room is pitch black, darker than any room you’ve ever seen before, there isn’t a single source of light in this room at all. A tingling sensation rolls down your spine as you notice something wrong about this room, you can hear something, someone breathing. You’re not alone in here.";
                } else if (is103LightOn) {
                    cout
                            <<
                            "\nThe door is shut. This room looks like a security room, there are 5 displays with security camera footage from the Front door, Lobby, Reception, Cafeteria and Rooftop.";
                }
                break;
            case 9:
                cout << "\n\nRoom 106"
                        "\nThis room looks like it’s been fully emptied to make more room for some brown boxes. You open one of them to discover hundreds of guns, the most dangerous weapon you know how to use is a water pistol, so you put the guns back in the box.";
                break;
            case 10:
                cout << "\n\nRoom 108";
                cout
                        << "\nYou enter a hotel room, dust covers everything in the room. You find a newspaper on the floor, the headline reads “RAPIDLY SPREADING GOOSE PATHOGEN CAUSES HUMAN MUTATIONS AND GIANT GEESE. HUMANITY CLOSE TO EXTINCTION”. There is a rope leading out the window and up to the next level.";
                break;
            case 11:
                cout << "\n\nFloor 2 hallway";
                cout
                        <<
                        "\nA hallway, it has boarded up windows. Golden slivers of light bleed through the slits between the planks of wood. The carpet here is brown. Doors line the hallway, numbered from 201 - 245. Most of them are locked, indicated by a red light on the door handles. 3 of them are unlocked.";
                break;
            case 12:
                cout << "\n\nRoom 204 (Bathroom)"
                        "\nYou enter a bathroom, the floor is covered in blood stains and a strange green liquid, there are puddles of water on the floor.";
                break;
            case 13:
                cout << "\n\nRoom 209";
                cout << "\nYou’re in another hotel room";
                break;
            case 14:
                cout << "\n\nRoom 218";
                cout
                        << "\nThis seems to be a supply closet, you see a supply elevator in the back right corner, there are many nondescript brown boxes scattered around the room.";
                break;
            case 15:
                cout << "\n\nFloor 3 hallway";
                cout
                        <<
                        "\nA hallway, This hallway does not have any windows. It is almost pitch black, only illuminated by a series of small lights. You cannot make out the colour of the carpet here. Doors line the hallway, numbered from 301 - ?. Most of them are locked, indicated by a red light on the door handles. 3 of them are unlocked.";
                break;
            case 16:
                cout << "\n\nRoom 304";
                cout << "\nYou seem to have entered a kitchen supply room, you see a giant goose approaching you.";
                break;
            case 17:
                cout << "\n\nRoom 312"
                        "\nA regular hotel room, trashed like the rest of this building. It looks like nobody has been in this room since whatever happened, happened.";
                break;
            case 18:
                cout << "\n\nRoom 315"
                        "\nYou seem to have entered the Mechanical room, there is a hot water heater and a mains powerboard here.";

                break;

        }
    }

    //scene actions
    int getActions(int scene) { //prints scene actions depending on the player's current position
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
                cout << "\n[1] Go back to hallway";
                cout << "\n[2] Try to find the light switch";
                cout << "\n[3] Wait for your eyes to adjust to the light\n> ";
                break;
            case 9:
                cout << "\n[1] Go back to hallway\n> ";
                break;
            case 10:
                cout << "\n[1] Go back to hallway";
                cout << "\n[2] Climb up the rope\n> ";
                break;
            case 11:
                cout << "\n[1] Go to room 204"
                        "\n[2] Go to room 209"
                        "\n[3] Go to room 218\n> ";
                break;
            case 12:
                cout << "\n[1] Look around";
                cout << "\n[2] Go back to hallway\n> ";
                break;
            case 13:
                cout << "\n[1] Go back to hallway\n> ";
                break;
            case 14:
                cout << "\n[1] Go back to hallway";
                cout << "\n[2] Use supply elevator to go up\n> ";
                break;
            case 15:
                cout << "\n[1] Go to room 304"
                        "\n[2] Go to room 312"
                        "\n[3] Go to room 315\n> ";
                break;
            case 16:
                cout << "\n[1] Go back to hallway";
                cout << "\n[2] Fight Goose\n> ";
                break;
            case 17:
                cout << "\n[1] Go back to hallway\n> ";
                break;
            case 18:
                cout << "\n[1] Go back to hallway"
                        "\n[2] Turn off Hot Water"
                        "\n[3] Turn off electricity \n> ";

                break;
            default:
                cout << "\nError: Where you at bro?.\n> ";
                break;
        }
    }

    int setChosenAction(int scene, string chosenAction) { //prints information, initiates battle or moves player depending on the player's chosen action
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
                            <<
                            "\nYou take some money from this cash register and put it in your pockets, it might come in handy.\n";
                } else if (chosenAction == "3") {
                    cout
                            <<
                            "\nYou look at the computer screen and see 9 blinking lights, it looks like rooms 103, 106 and 108 are free on level one, rooms 204, 209 and 218 are free on level two and rooms 304, 312 and 315 on level three.\n";
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
                            <<
                            "\nYou take some food and put it in your mouth. You chew and swallow. It's food, what else do you expect?\n";
                } else if (chosenAction == "3") {
                    cout
                            <<
                            "\nYou decide to take a bit of a nap, unfortunately, you slept a bit too long. Something comes and eats you, you don't know what, because you were sleeping.\n";
                    killedPlayer = true;

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
                    newPosition = 6;
                } else if (chosenAction == "4") {
                    newPosition = 6;
                }
                if (chosenAction == "2") {
                    cout
                            <<
                            "\nYou seem to have landed at level 1. You step out of the elevator and into a hallway, the elevator makes a soft ding behind you as the doors close and it whirs back down to the ground floor. There are no buttons next to the elevator doors. You'll have to find another way back down.";
                } else if (chosenAction == "3" || chosenAction == "4") {
                    cout
                            <<
                            "\nThe buttons must be broken, you've landed at level 1. You step out of the elevator and into a hallway, the elevator makes a soft ding behind you as the doors close and it whirs back down to the ground floor. There are no buttons next to the elevator doors. You'll have to find another way back down.";
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
                    if (is108Locked) {
                        cout << "\nThis room requires a pin\nEnter Pin: ";
                        int room108Pin;
                        cin >> room108Pin;
                        if (room108Pin == 2865) {
                            newPosition = 10;
                        } else {
                            cout << "\nWrong pin, go away";
                            newPosition = 6;
                        }
                    }
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
                if (chosenAction == "1") { //Go back to hallway
                    newPosition = 6;
                } else if (chosenAction == "2" && !is103LightOn) { // Try to find the light switch when lights are off
                    cout << "\nYou fumble around for the light switch and manage to turn it on, you can see now.";
                    is103LightOn = true;
                    newPosition = 8;
                    newBattle = 1;
                } else if (chosenAction == "2" && is103LightOn) { // Try to find light switch when lights are already on
                    cout << "\nThe light is already on";

                } else if (chosenAction == "3" && !is103LightOn) {
                    cout
                            <<
                            "\nWhy would you wait? Do you even see the kind of place you're in right now? You smell a faint smell of a chemical. "
                            "\nYou feel your eyes go heavy and shut. Some footsteps approach you and you're dragged along the floor. "
                            "\nYou have been thrown out of the room.";
                    newPosition = 6;
                } else if (chosenAction == "3" && is103LightOn) {
                    cout
                            <<
                            "\nWhy would you wait? The lights are already on.";
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
                } else if (chosenAction == "2") {
                    newPosition = 13;
                    cout
                            << "You climb out the window and up the rope. You can barely see anything, the cloud height has lowered.";
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
                    newBattle = 2;
                } else if (chosenAction == "2") {
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
                } else if (chosenAction == "2") {
                    if (is218Locked) {
                        cout << "\nThis elevator requires a pin\nEnter Pin: ";
                        int supplyPin;
                        cin >> supplyPin;
                        if (supplyPin == 2286) {
                            newPosition = 18;
                        } else {
                            cout << "\nWrong pin, go away";
                            newPosition = 14;
                        }
                    }
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
                } else if (chosenAction == "2") {
                    newBattle = 3;
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
                } else if (chosenAction == "2") {
                    cout
                            << "You try to turn off the hot water. I don't know if you're crazy or what, but that's not gonna help you one bit.";
                } else if (chosenAction == "3") {
                    cout
                            << "You're not an electrician (and you don't know how switches work). Why would you turn off the electricity anyway?";
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

    int getKilledPlayer() {
        return killedPlayer;
    }

    int getFailedInputs() {
        return failedInputs;
    }

    int getNewBattle() {
        return newBattle;
        newBattle = 0;
    }


    int getMap(int currentScene) { //Prints onscreen map depending on the players current position
        switch (currentScene) {
            case 0: case 1: case 2: case 3: case 4: case 5: //scenes 0-5 are located on the ground floor, so ground floor map is printed
                cout << "\nMap of Ground Floor\n";
                cout << "\n                   (Elevator)"
                        "\n                       |"
                        "\n(Cafe) — (Lobby) — (Reception)"
                        "\n            |"
                        "\n         (Field)\n";
                break;
                case 6: case 7: case 8: case 9: case 10: //Scenes 6-10 are located on level two, so level 1 map is printed
                cout << "\nMap of Level One\n"
                        "\n                                         |—— (Room 108 REQUIRES PASSCODE)^"
                        "\n                                         |—— (Room 106)"
                        "\n(Kitchen)  — (Level 1 Hallway) — (Room 103)"
                        "\n                     |"
                        "\n                (Elevator)\n";
                break;
                case 11: case 12: case 13: case 14: //Scenes 11-14 are located on level two, so level 2 map is printed
                cout << "\nMap of Level Two\n"
                        "\n                |—— (Room 218 ELEVATOR REQUIRES PASSCODE)^"
                        "\n                |—— (Room 208)"
                        "\n(Level 1 Hallway) — (Room 204)"
                        "\n       |"
                        "\n  (Elevator)\n";
                break;
                case 15: case 16: case 17: case 18: //Scenes 15-18 are located on level 3, so level 3 map is printed
                cout << "\nMap of Level Three\n"
                        "\n                |—— (Room 315)"
                        "\n                |—— (Room 312)"
                        "\n(Level 1 Hallway) — (Room 304) >"
                        "\n       |"
                        "\n   (Elevator)\n";
                break;
        }
    }

    basic_string<char, char_traits<char>, allocator<char> > getObjects(int currentScene, int i) { //returns object at specified index in player's current scene
        switch (currentScene) {
            case 0:
                return objects0[i];
            case 1:
                return objects1[i];
            case 2:
                return objects2[i];
            case 3:
                return objects3[i];
            case 4:
                return objects4[i];
            case 5:
                return objects5[i];
            case 6:
                return objects6[i];
            case 7:
                return objects7[i];
            case 8:
                return objects8[i];
            case 9:
                return objects9[i];
            case 10:
                return objects10[i];
            case 11:
                return objects11[i];
            case 12:
                return objects12[i];
            case 13:
                return objects13[i];
            case 14:
                return objects14[i];
            case 15:
                return objects15[i];
            case 16:
                return objects16[i];
            case 17:
                return objects17[i];
            case 18:
                return objects18[i];
            default:
                return "\nNo objects found";
        }
    }

    int setDroppedObject(string drop, int currentScene){ //places object in player's current scene
        switch (currentScene) {
            case 0:
                for (int i = 0; i < 9; i++) {
                    if (objects0[i].empty() && i != 5) {
                        objects0[i] = drop;
                        break;
                    }
                }
                break;

            case 1:
                for (int i = 0; i < 9; i++) {
                    if (objects1[i].empty() && i != 5) {
                        objects1[i] = drop;
                        break;
                    }
                }
                break;

            case 2:
                for (int i = 0; i < 9; i++) {
                    if (objects2[i].empty() && i != 5) {
                        objects2[i] = drop;
                        break;
                    }
                }
                break;

            case 3:
                for (int i = 0; i < 9; i++) {
                    if (objects3[i].empty() && i != 5) {
                        objects3[i] = drop;
                        break;
                    }
                }
                break;

            case 4:
                for (int i = 0; i < 9; i++) {
                    if (objects4[i].empty() && i != 5) {
                        objects4[i] = drop;
                        break;
                    }
                }
                break;

            case 5:
                for (int i = 0; i < 9; i++) {
                    if (objects5[i].empty() && i != 5) {
                        objects5[i] = drop;
                        break;
                    }
                }
                break;

            case 6:
                for (int i = 0; i < 9; i++) {
                    if (objects6[i].empty() && i != 5) {
                        objects6[i] = drop;
                        break;
                    }
                }
                break;

            case 7:
                for (int i = 0; i < 9; i++) {
                    if (objects7[i].empty() && i != 5) {
                        objects7[i] = drop;
                        break;
                    }
                }
                break;

            case 8:
                for (int i = 0; i < 9; i++) {
                    if (objects8[i].empty()) {
                        objects8[i] = drop;
                        break;
                    }
                }
                break;

            case 9:
                for (int i = 0; i < 9; i++) {
                    if (objects9[i].empty() && i != 5) {
                        objects9[i] = drop;
                        break;
                    }
                }
                break;

            case 10:
                for (int i = 0; i < 9; i++) {
                    if (objects10[i].empty() && i != 5) {
                        objects10[i] = drop;
                        break;
                    }
                }
                break;

            case 11:
                for (int i = 0; i < 9; i++) {
                    if (objects11[i].empty() && i != 5) {
                        objects11[i] = drop;
                        break;
                    }
                }
                break;

            case 12:
                for (int i = 0; i < 9; i++) {
                    if (objects12[i].empty() && i != 5) {
                        objects12[i] = drop;
                        break;
                    }
                }
                break;

            case 13:
                for (int i = 0; i < 9; i++) {
                    if (objects13[i].empty() && i != 5) {
                        objects13[i] = drop;
                        break;
                    }
                }
                break;

            case 14:
                for (int i = 0; i < 9; i++) {
                    if (objects14[i].empty() && i != 5) {
                        objects14[i] = drop;
                        break;
                    }
                }
                break;

            case 15:
                for (int i = 0; i < 9; i++) {
                    if (objects15[i].empty() && i != 5) {
                        objects15[i] = drop;
                        break;
                    }
                }
                break;

            case 16:
                for (int i = 0; i < 9; i++) {
                    if (objects16[i].empty() && i != 5) {
                        objects16[i] = drop;
                        break;
                    }
                }
                break;

            case 17:
                for (int i = 0; i < 9; i++) {
                    if (objects17[i].empty() && i != 5) {
                        objects17[i] = drop;
                        break;
                    }
                }
                break;

            case 18:
                for (int i = 0; i < 9; i++) {
                    if (objects18[i].empty() && i != 5) {
                        objects18[i] = drop;
                        break;
                        break;
                    }
                }
                break;

            default:
                cout << "Error: failed to drop object";
        }
    }

    basic_string<char, char_traits<char>, allocator<char> > takenItem(string item, int position){ //removes object at player's current scene to be put in player's inventory
        bool found = false;

        switch (position) {
            case 0:
                for (int i = 0; i < 9; i++) {
                    if (objects0[i] == item && i != 9) {
                        objects0[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 1:
                for (int i = 0; i < 9; i++) {
                    if (objects1[i] == item && i != 9) {
                        objects1[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 2:
                for (int i = 0; i < 9; i++) {
                    if (objects2[i] == item && i != 9) {
                        objects2[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 3:
                for (int i = 0; i < 9; i++) {
                    if (objects3[i] == item && i != 9) {
                        objects3[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 4:
                for (int i = 0; i < 9; i++) {
                    if (objects4[i] == item && i != 9) {
                        objects4[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 5:
                for (int i = 0; i < 9; i++) {
                    if (objects5[i].empty() && i != 5) {
                        objects5[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 6:
                for (int i = 0; i < 9; i++) {
                    if (objects6[i] == item && i != 9) {
                        objects6[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 7:
                for (int i = 0; i < 9; i++) {
                    if (objects7[i] == item && i != 9) {
                        objects7[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 8:
                for (int i = 0; i < 9; i++) {
                    if (objects8[i] == item && i != 9) {
                        objects8[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 9:
                for (int i = 0; i < 9; i++) {
                    if (objects9[i] == item && i != 9) {
                        objects9[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 10:
                for (int i = 0; i < 9; i++) {
                    if (objects10[i] == item && i != 9) {
                        objects10[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 11:
                for (int i = 0; i < 9; i++) {
                    if (objects11[i] == item && i != 9) {
                        objects11[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 12:
                for (int i = 0; i < 9; i++) {
                    if (objects12[i] == item && i != 9) {
                        objects12[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 13:
                for (int i = 0; i < 9; i++) {
                    if (objects13[i] == item && i != 9) {
                        objects13[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 14:
                for (int i = 0; i < 9; i++) {
                    if (objects14[i] == item && i != 9) {
                        objects14[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 15:
                for (int i = 0; i < 9; i++) {
                    if (objects15[i] == item && i != 9) {
                        objects15[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 16:
                for (int i = 0; i < 9; i++) {
                    if (objects16[i] == item && i != 9) {
                        objects16[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 17:
                for (int i = 0; i < 9; i++) {
                    if (objects17[i] == item && i != 9) {
                        objects17[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 18:
                for (int i = 0; i < 9; i++) {
                    if (objects18[i] == item && i != 9) {
                        objects18[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;

            case 19:
                for (int i = 0; i < 9; i++) {
                    if (objects19[i] == item && i != 9) {
                        objects19[i].clear();
                        found = true;
                    }
                    if (found == true){
                        found = false;
                        return item;
                    } else {
                        cout << "\a\nItem not found";
                        return "not found";
                    }
                }
                break;
            default:
                cout << "Error: failed to take object";
        }
    }

    void resetNewBattle() { //resets newBattle variable
        newBattle = 0;
    }

};

#endif //FORGOTTINN_FORGOTSCENE_H