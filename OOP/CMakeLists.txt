cmake_minimum_required(VERSION 3.23)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)


add_executable(untitled2 main.cpp Map/Field.cpp Map/Field.h Map/Cell.cpp Map/Cell.h Map/CellView.cpp Map/CellView.h Map/FieldView.cpp Map/FieldView.h Player/Player.cpp Player/Player.h Read/CommandReader.cpp Read/CommandReader.h Controller.cpp Controller.h Game/Level1.cpp Game/Level1.h Events/Event.cpp Events/Event.h Events/EventPlayer.cpp Events/EventPlayer.h Events/EventPlayerHPInc.cpp Events/EventPlayerHPInc.h Events/EventMap.cpp Events/EventMap.h Events/EventMapTrap.cpp Events/EventMapTrap.h Events/EventState.cpp Events/EventState.h Events/EventStateWin.cpp Events/EventStateWin.h Events/EventPlayerHPDec.cpp Events/EventPlayerHPDec.h Events/EventStateLoss.cpp Events/EventStateLoss.h Events/EventPlayerTeleport.cpp Events/EventPlayerTeleport.h Events/EventMapPassage.cpp Events/EventMapPassage.h Events/EventPlayerHPTrap.cpp Events/EventPlayerHPTrap.h Game/LevelTest.cpp Game/LevelTest.h Game/Level2.cpp Game/Level2.h)

