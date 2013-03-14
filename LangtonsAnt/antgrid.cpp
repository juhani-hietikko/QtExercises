#include "antgrid.h"
#include <QDebug>

AntGrid::AntGrid(int width, int height)
{
    this->width = width;
    this->height = height;

    up.name = "up";
    up.xDiff = 0;
    up.yDiff = 1;
    up.nextToRight = &right;
    up.nextToLeft = &left;

    right.name = "right";
    right.xDiff = 1;
    right.yDiff = 0;
    right.nextToRight = &down;
    right.nextToLeft = &up;

    down.name = "down";
    down.xDiff = 0;
    down.yDiff = -1;
    down.nextToRight = &left;
    down.nextToLeft = &right;

    left.name = "left";
    left.xDiff = -1;
    left.yDiff = 0;
    left.nextToRight = &up;
    left.nextToLeft = &down;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cellStatus[i][j] = "";
            cellColor[i][j] = AntGrid::White;
        }
    }
}

AntGrid::Color AntGrid::colorAtCell(int x, int y)
{
    return cellColor[x][y];
}

std::string AntGrid::cellStatusAt(int x, int y)
{
    if (cellStatus[x][y] == "")
        return "";
    else
        return "ant:" + cellStatus[x][y];
}

void AntGrid::placeAntToCell(int x, int y, std::string direction)
{
    qDebug() << QString::number(width);
    cellStatus[x][y] = direction;
}

void AntGrid::setCellColor(int x, int y, AntGrid::Color color)
{
    cellColor[x][y] = color;
}

void AntGrid::advance()
{
    bool oneAntFound = false;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (!oneAntFound && cellStatus[i][j] != "")
            {
                Direction *newDirection;
                if (cellColor[i][j] == AntGrid::White)
                {
                    newDirection = stringToDirection(cellStatus[i][j]).nextToRight;
                    cellColor[i][j] = AntGrid::Black;
                }
                else
                {
                    newDirection = stringToDirection(cellStatus[i][j]).nextToLeft;
                    cellColor[i][j] = AntGrid::White;
                }
                cellStatus[i + newDirection->xDiff][j + newDirection->yDiff] = newDirection->name;
                cellStatus[i][j] = "";
                oneAntFound = true;
            }
        }
    }
}

AntGrid::Direction AntGrid::stringToDirection(std::string str)
{
    if (str == "up")
        return up;
    else if (str == "right")
        return right;
    else if (str == "down")
        return down;
    else
        return left;
}
