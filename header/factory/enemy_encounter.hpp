#ifndef ENEMY_ENCOUNTER_HPP
#define ENEMY_ENCOUNTER_HPP

#include <vector>
#include <string>
#include <utility>
#include "./encounter.hpp"
#include "./enemy.hpp"

class EnemyEncounter : public Encounter
{
private:
    std::vector<std::pair<Enemy, int>> enemies;
public:
    EnemyEncounter();
    EnemyEncounter(std::vector<std::pair<Enemy, int>> enemies);
    ~EnemyEncounter();
    std::string getEncounter();
    Encounter* clone();
};

#endif // ENEMY_ENCOUNTER_HPP