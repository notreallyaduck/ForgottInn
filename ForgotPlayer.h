//
// Created by Sudesh Arunachaqlam on 12/3/2022.
//
#include <string>

#include <iostream>

#ifndef FORGOTTINN_FORGOTPLAYER_H
#define FORGOTTINN_FORGOTPLAYER_H

using namespace std;

class ForgotPlayer {
public:

    //player attributes
    string name;
    int health;
    bool isAlive;
    int position;

    //player inventory
    string inventory[5] = {
            "",
            "",
            "",
            "",
            ""
    };

    ForgotPlayer(int Health, bool Life) { //code to run when a player object is createdd
        health = Health;
        isAlive = Life;
    }

    void changeHealth(int damage) { //changes player's health
        health = health - damage;
    }


    void setName(string enteredName) { //sets name of player
        name = enteredName;
    }

    void setLife(bool dead){ //sets player health to 0 if bool dead is true
        if (dead){
            health = 0;
        }
    }

    void setPosition(int Position) { //moves players position on the map
        position = Position;
    }

    basic_string<char, char_traits<char>, allocator<char> > getName() { //returns the players name as a string
        return name;
    }

    int getHealth() { //returns the players current health
        return health;
    }

    int getLife() { //returns players life status
        return isAlive;
    }

    int getPosition() { //returns players current position
        return position;
    }

    int addToInventory(string item) { //adds and item to the players inventory
        for (int i = 0; i < 5; i++) {
            if (inventory[i].empty() && i != 5) {
                inventory[i] = item;
                break;
            }
        }
    }

    int clearInventorySlot(int indexToRemove) { //removes an item from the player's inventory
        inventory[indexToRemove].clear();
    }

    basic_string<char, char_traits<char>, allocator<char> > getInventory(int i) { //returns the specified index of the player's inventory list
        return inventory[i];
    }
};

#endif //FORGOTTINN_FORGOTPLAYER_H