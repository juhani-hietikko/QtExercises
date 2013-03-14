#ifndef ANTGRID_H
#define ANTGRID_H

#include <string>

class AntGrid
{
public:
    AntGrid(int width, int height);

    enum Color
    {
        White, Black
    };

    struct Direction
    {
        std::string name;
        int xDiff, yDiff;
        Direction *nextToRight;
        Direction *nextToLeft;
    };

    Color colorAtCell(int x, int y);
    std::string cellStatusAt(int x, int y);
    void placeAntToCell(int x, int y, std::string direction);
    void setCellColor(int x, int y, Color color);
    void advance();

private:
    int width, height;
    std::string cellStatus [10][10];
    Color cellColor [10][10];
    Direction up, right, down, left;

    Direction stringToDirection(std::string str);
};

#endif // ANTGRID_H
