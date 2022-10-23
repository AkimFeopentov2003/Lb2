#include "Game/Level1.h"
#include "Game/LevelTest.h"
#include <iostream>
#include "Game/Level2.h"

int main() {
    int cur;
    std::cout << "Введите уровень игры от 1 до 2" << "\n";
    std::cin >> cur;
    while (cur < 1 || cur > 2) {
        std::cout << "Ошибка ввода, повторите ввод" << "\n";
        std::cin >> cur;
    }
    switch (cur) {
        case 1:
            Level1 game1;
            game1.start();
            break;
        case 2:
            Level2 game2;
            game2.start();
            break;
    }
    return 0;
}