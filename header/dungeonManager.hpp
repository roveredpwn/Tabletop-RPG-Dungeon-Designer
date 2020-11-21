#ifndef DUNGEON_MANAGER_HPP
#define DUNGEON_MANAGER_HPP

#include <iostream>
#include <string>
#include <limits>

class DungeonManager {
	private:
		
	public:
		DungeonManager();
		void displayMainMenu();
		void displayGenerationMenu();
		void displayDungeonDisplayMenu();
		void clearScreen();
};

#include "../src/dungeonManager.cpp"

#endif //DUNGEON_MANAGER_HPP
