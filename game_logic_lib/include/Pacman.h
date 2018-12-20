#ifndef PACMAN_H
#define PACMAN_H

#include "MazeHabitant.h"

class Pacman : public MazeHabitant
{
public:
    Pacman(int y, int x, char currDir = 'l', char nextDir = 'l');

    char getNextDirection() const;
    void setNextDirection(char c);

    virtual char move(Maze & m, int y, int x);
    char moveStep(Maze & m);

private:

    char nextDirection;
};

#endif // PACMAN_H
