//
// Created by akimfeopentov on 14.10.22.
//

#include "EventMapTrap.h"

void EventMapTrap::eventCell(Field &field) {
    int x = field.getPlayerPosX();
    int y = field.getPlayerPosY();
    field.setCell(x + 2, y, Cell(STONE));
    field.setCell(x - 1, y, Cell(STONE));
    field.setCell(x, y + 1, Cell(STONE));
    field.setCell(x, y - 1, Cell(STONE));
    field.setCell(x + 1, y + 1, Cell(STONE));
    field.setCell(x + 1, y - 1, Cell(STONE));
    field.get_map()[y][x]=HP_DEC;
    field.get_map()[y][((x + 1) % field.get_amountCellsX() + field.get_amountCellsX()) %
                       field.get_amountCellsX()]=HP_DEC;
    field.get_map()[y][x].setEvent(new EventPlayerHPTrap);
    field.get_map()[y][((x + 1) % field.get_amountCellsX() + field.get_amountCellsX()) %
                       field.get_amountCellsX()].setEvent(new EventPlayerHPTrap);
}

/* P_##_
 * _#P_#
 * __##_
 */