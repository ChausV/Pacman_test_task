#ifndef DISPLAY_H
#define DISPLAY_H

#include "IDisplay.h"
#include "DisplayGame.h"

class Display : public IDisplay
{
public:
    Display();
    ~Display();

    int getUserInput() const;

    void startGameDisplay(int field_h, int field_w);
    void endGameDisplay();

    void setGameFieldSize(int field_h, int field_w);
    void displayGameField(char ** field) const;
    void displayScore(int score) const;
    void displayLives(int lives) const;
    void displayCounter(unsigned counter) const;
    void displayTime(float time) const;
    void displayLevel(int level) const;

    bool mainMenu();
    void gameOverFrame(int score);

private:
    DisplayGame * displayGame;

    void showHighScores(WINDOW * win) const;
};

#endif // DISPLAY_H
