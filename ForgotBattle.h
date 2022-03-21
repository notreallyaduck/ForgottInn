//
// Created by Sudesh Arunachalam on 20/3/2022.
//

#ifndef FORGOTTINN_FORGOTBATTLE_H
#define FORGOTTINN_FORGOTBATTLE_H

#include <string>

#include <iostream>

using namespace std;

class ForgotBattle {
public:

    //Battle information
    string battleName;
    int battleId = 0;
    int enemyHealth = 0;
    int enemyDamage = 0;
    int takenDamage = 0;
    int newDamage = 0;

    //battles that the player has completed, these battles will not be reactivated once set to true
    bool completedBattles[3] = {
            false,
            false,
            false
    };
    string chosenBattleOption;
    int playerHealth = 0;
    int newHealth = 0;
    string takenItem;
    bool gameOver = false;

    ForgotBattle(int battle) {
        battleId = battle;
    }

    int getBattle(int newBattleId, int currentHp) { //begins battle depending on which has been specified by ForgotScene.h
        battleId = newBattleId;
        switch (battleId) {
            case 0:
                cout << "";
                break;
            case 1:
                if (!completedBattles[0]) { //checks to see if this battle has been completed
                    battleName = "Security Guard";
                    enemyHealth = 10;
                    enemyDamage = 4;
                    playerHealth = currentHp;

                    cout
                            <<
                            "\n\nThe door is shut. This room looks like a security room, there are 5 displays with security camera footage from the Front door, Lobby, Reception, Cafeteria and Rooftop. Hold on, you hear a deafening scraping noise coming from the corner of the room. Your heart rate rises as you see the deformed shape in front of you, you’d be mistaken for thinking this thing was a human from afar, but up close you can see the deformities. He’s wearing the uniform of a security guard. Maybe he is a human. What the hell happened to him?";

                    while (enemyHealth > 0 && playerHealth > 0) {
                        startSG:;
                        cout << "\n\n[BATTLE]"
                                "\n" << battleName <<
                             "\n[1] Punch"
                             "\n[2] Duck"
                             "\n[3] Take Baton"
                             "\n" << "Security Guard Health: " << enemyHealth <<
                             "\n> ";

                        cin >> chosenBattleOption;
                        if (chosenBattleOption == "1") {
                            cout
                                    <<
                                    "\nYou swing your fist at the Security Guard, he stumbles to the ground for a second as he falls back from your weak punch"
                                    "\nHe attacks back with a hard punch with his fist";
                            enemyHealth = enemyHealth - 2;
                            takenDamage = takenDamage + 5;
                            newDamage = 5;
                        } else if (chosenBattleOption == "2") {
                            cout
                                    << "\nYou duck as the Security guard aims a blow at your head, but misses and hits himself in the arm.";
                            enemyHealth = enemyHealth - 4;
                        } else if (chosenBattleOption == "3") {
                            cout
                                    << "\nYou attempt to take the baton from the Security Guard's grasp. Oh no, you have angered him, he swings furiously and lands multiple hits to your head.";
                            takenDamage = takenDamage + 400;
                            newDamage = 400;
                        } else {
                            cout
                                    << "Because of your slow thinking, Security Guard hits you on the head with a baton very very hard.";
                            takenDamage = takenDamage + 400;
                            newDamage = 400;
                        }
                        playerHealth = playerHealth - newDamage; //new player health to display
                        takenDamage = takenDamage + newDamage; //total damage taken by player
                        newDamage = 0; //reset newDamage
                        cout << "\nHealth: " << playerHealth; //print playerHealth
                        cout << "\nSecurity Guard Health: " << enemyHealth; //print enemy health
                    }
                    if (enemyHealth < 1) {
                        completedBattles[0] = true; //change status of this battle to completed if enemy is dead
                        takenDamage = 0;
                        battleId = 0;
                        cout
                                << "\nYou take the baton and keep it for later use. You notice a number scratched into a wall, 2865."; //defeated enemy message
                        takenItem = "Baton";
                    } else if (playerHealth == 0) {
                    } //while loop in main will break after player health is below 0
                }
                break;

            case 2:
                if (!completedBattles[1]) { //checks to see if this battle has been completed
                    battleName = "Janitor";
                    enemyHealth = 10;
                    enemyDamage = 2;
                    playerHealth = currentHp;

                    cout
                            <<
                            "\n\nYou hear a loud creak as one of the cubicle doors open, you watch as a mop peeks out from behind the door, you see what looks like a Janitor, he looks just as deformed as that Security Guard.";

                    while (enemyHealth > 0 && playerHealth > 0) {
                        cout << "\n\n[BATTLE]"
                                "\n" << battleName <<
                             "\n[1] Punch"
                             "\n[2] Hit with baton"
                             "\n[3] Pour soapy water on floor"
                             "\n" << battleName << " Health: " << enemyHealth <<
                             "\n> ";

                        cin >> chosenBattleOption;
                        if (chosenBattleOption == "1") {
                            cout
                                    <<
                                    "\nYou swing your fist at the Janitor, he does not stumble, but does take some damage"
                                    "\nHe swings his mop at you and chucks a bucket on your head. Ouch, you take the bucket off and chuck it back at him. Your face hurts.";
                            enemyHealth = enemyHealth - 2;
                            newDamage = 5;
                        } else if (chosenBattleOption == "2") {
                            cout << "\nYou hit the Janitor with your baton. It looks like that hurt. Good job.";
                            enemyHealth = enemyHealth - 5;
                        } else if (chosenBattleOption == "3") {
                            cout
                                    << "\nYou pour soapy water on the floor infront of the Janitor. But this one is smart, he doesn't step on it. He throws a large full bottle of toilet cleaner directly at your head. Ouch, that hurt.";
                            newDamage = 8;
                        } else {
                            cout
                                    << "Because of your slow thinking, Janitor hits you on the head with a mop very very hard.";
                            takenDamage = takenDamage + 20;
                            newDamage = 20;
                        }
                        playerHealth = playerHealth - newDamage; //new player health to display
                        takenDamage = takenDamage + newDamage; //total damage taken by player
                        newDamage = 0; //reset newDamage
                        cout << "\nHealth: " << playerHealth; //print playerHealth
                        cout << "\nJanitor Health: " << enemyHealth; //print enemy health
                    }
                    if (enemyHealth < 1) {
                        completedBattles[1] = true; //change completion status for this battle to true
                        battleId = 0;
                        takenDamage = 0;
                        cout
                                << "\nYou look at the deformed face of the Janitor. You look at his id and see what it says. \nHe looks a lot more normal, the expiration date on his card says 2024, about 10 years ago. \nThere's also another number on there, 2286. \nRemember it, might come in handy.";
                        takenItem = "ID Card";
                    } else if (playerHealth == 0) {
                    }
                }

                break;

            case 3:

                if (!completedBattles[2]) { //checks to see if this battle has been completed
                    battleName = "Goose";
                    enemyHealth = 20;
                    enemyDamage = 6;
                    playerHealth = currentHp;

                    cout
                            <<
                            "\a\a\a\n\nYou're at the kitchen supply room, you're confused as to why it's 2 floors above the kitchen. You hear the deafening slam of giant webbed feet approaching menacingly. The goose must be mutated. Defeat the goose to learn the truth about what happened.";

                    while (enemyHealth > 0 && playerHealth > 0) {
                        cout << "\n\n[BATTLE]"
                                "\n" << battleName <<
                             "\n[1] Punch"
                             "\n[2] Hit with baton"
                             "\n[3] Throw goose cousins"
                             "\n" << battleName << " Health: " << enemyHealth <<
                             "\n> ";

                        cin >> chosenBattleOption;
                        if (chosenBattleOption == "1") {
                            cout
                                    <<
                                    "\nYou punch the goose's feathery body, you can tell that made him mad."
                                    "\a\nHe honks at you and kicks your bony torso so hard that you go flying back into the wall.";
                            enemyHealth = enemyHealth - 2;
                            newDamage = 5;
                        } else if (chosenBattleOption == "2") {
                            cout << "\nYou hit the Goose with your baton.";
                            enemyHealth = enemyHealth - 2;
                        } else if (chosenBattleOption == "3") {
                            cout
                                    << "\nYou open the freezer and pick up a goose, Goose stares at you with a furious frown. Regardless, you throw the frozen goose at Goose. GOOSE GETS REALLY MAD AT YOU, HOW DARE YOU DISRESPECT HIS SPECIES??? HE LIFTS HIS GIANT WEBBED FOOT AND SMOTHERS YOU ON THE FLOOR,";
                            newDamage = 8000000;
                        } else {
                            cout << "Because of your slow thinking, Goose hits you on the head very very hard.";
                            newDamage = takenDamage + 400;
                        }
                        playerHealth = playerHealth - newDamage; //new player health to display
                        takenDamage = takenDamage + newDamage; //total damage taken by player
                        newDamage = 0; //reset newDamage
                        cout << "\nHealth: " << playerHealth; //print playerHealth
                        cout << "\nGoose Health: " << enemyHealth; //Print enemy health
                    }
                    if (enemyHealth < 1) {
                        completedBattles[2] = true; //change completion status for this battle to true
                        battleId = 0;
                        takenDamage = 0;
                        cout
                                << "\nYou look at the Goose. Lying on the ground. You look around the room for a way to escape this place, you find a staircase to the roof of the building. You get a very large bag that the Goose was likely delivered in and use it to parachute down back to the front door. You run away from this place with a brand new outlook on life and at least 32 years of nightmare fuel. Congratulation, you've left the ForgottInn. \n\nGame Over";
                        takenItem = "Frozen Goose Wings";
                        gameOver = true;
                    } else if (playerHealth == 0) {
                    }
                }
                break;
        }
    }

    void setBattle(int newBattle) { //specify which battle to initiate the next time getBattle is called
        battleId = newBattle;
    }

    int getCompletionStatus(int battleId) { //get completion status for the specified battle
        return completedBattles[battleId];
    }

    int getTakenDamage() { //get the damage taken by the player
        return takenDamage;
    }

    basic_string<char, char_traits<char>, allocator<char> > getTakenItem() { //specify what loot has been collected by the player
        return takenItem;
    }

    int isGameOver() { //specify whether the game has been completed, breaks main.cpp while loop
        return gameOver;
    }

    void resetTakenItem() {
        takenItem.clear();
    }

};

#endif //FORGOTTINN_FORGOTBATTLE_H