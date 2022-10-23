//
// Created by akimfeopentov on 18.09.22.
//

#include "Controller.h"

Controller::Controller(CommandReader &cur, Field &field) {
    action(cur, field);
}

void Controller::action(CommandReader &cur, Field &field) {
    char order = cur.getCommand();
    std::pair<int, int> newPosition;
    newPosition.first = field.getPlayerPosY();
    newPosition.second = field.getPlayerPosX();
    switch (order) {
        case 'w':
            newPosition.first--;
            break;
        case 's':
            newPosition.first++;
            break;
        case 'a':
            newPosition.second--;
            break;
        case 'd':
            newPosition.second++;
            break;
    }
    newPosition.first =
            (newPosition.first % field.get_amountCellsY() + field.get_amountCellsY()) % field.get_amountCellsY();
    newPosition.second =
            (newPosition.second % field.get_amountCellsX() + field.get_amountCellsX()) % field.get_amountCellsX();
    if (field.get_map()[newPosition.first][newPosition.second].get_characteristic() != STONE) {
        field.setPlayerPosY(newPosition.first);
        field.setPlayerPosX(newPosition.second);
        field.triggerCellEvent();
    }
}