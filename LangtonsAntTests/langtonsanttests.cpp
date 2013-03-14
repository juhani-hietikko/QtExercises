#include <QString>
#include <QtTest>
#include "antgrid.h"

class LangtonsAntTests : public QObject
{
    Q_OBJECT
    
public:
    LangtonsAntTests();
    
private Q_SLOTS:


    void shouldBeInitiallyAllWhite();
    void shouldBeInitiallyAllClearOfAnts();
    void shouldAllowPlacingAntToCell1();
    void shouldAllowPlacingAntToCell2();
    void placingAntToCellAffectsOnlyThatCell();
    void shouldAllowSettingCellColor();
    void settingCellColorAffectsOnlyThatCell();
    void shouldAllowSettingCellColorWhite();
    void advanceWithAntInWhiteCell_AntShouldTurnFromUpToRightAndMoveForward();
    void advanceWithAntInWhiteCell_AntShouldTurnFromRightToDownAndMoveForward();
    void advanceWithAntInWhiteCell_AntShouldTurnFromDownToLeftAndMoveForward();
    void advanceWithAntInWhiteCell_AntShouldTurnFromLeftToUpAndMoveForward();
    void advanceWithAntInWhiteCell_CellColorShouldChangeToBlack();
    void advanceWithAntInBlackCell_AntShouldTurnFromUpToLeftAndMoveForward();
    void advanceWithAntInBlackCell_AntShouldTurnFromRightToUpAndMoveForward();
    void advanceWithAntInBlackCell_AntShouldTurnFromDownToRightAndMoveForward();
    void advanceWithAntInBlackCell_AntShouldTurnFromLeftToDownAndMoveForward();
    void advanceWithAntInBlackCell_CellColorShouldChangeToWhite();
};

LangtonsAntTests::LangtonsAntTests()
{
}




void LangtonsAntTests::shouldBeInitiallyAllWhite()
{
    AntGrid grid(1, 1);
    QCOMPARE(grid.colorAtCell(0, 0), AntGrid::White);
}

void LangtonsAntTests::shouldBeInitiallyAllClearOfAnts()
{
    AntGrid grid(1, 1);
    grid.cellStatusAt(0, 0);
    QCOMPARE(grid.cellStatusAt(0, 0), std::string(""));
}

void LangtonsAntTests::shouldAllowPlacingAntToCell1()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(1, 2, "up");
    QCOMPARE(grid.cellStatusAt(1, 2), std::string("ant:up"));
}

void LangtonsAntTests::shouldAllowPlacingAntToCell2()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(0, 1, "right");
    QCOMPARE(grid.cellStatusAt(0, 1), std::string("ant:right"));
}

void LangtonsAntTests::placingAntToCellAffectsOnlyThatCell()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(1, 2, "up");
    QCOMPARE(grid.cellStatusAt(2, 1), std::string(""));
}

void LangtonsAntTests::shouldAllowSettingCellColor()
{
    AntGrid grid(3, 3);
    grid.setCellColor(2, 2, AntGrid::Black);
    QCOMPARE(grid.colorAtCell(2, 2), AntGrid::Black);
}

void LangtonsAntTests::settingCellColorAffectsOnlyThatCell()
{
    AntGrid grid(3, 3);
    grid.setCellColor(2, 1, AntGrid::Black);
    QCOMPARE(grid.colorAtCell(2, 2), AntGrid::White);
}

void LangtonsAntTests::shouldAllowSettingCellColorWhite()
{
    AntGrid grid(3, 3);
    grid.setCellColor(2, 2, AntGrid::White);
    QCOMPARE(grid.colorAtCell(2, 2), AntGrid::White);
}

void LangtonsAntTests::advanceWithAntInWhiteCell_AntShouldTurnFromUpToRightAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(0, 0, "up");
    grid.advance();
    QCOMPARE(grid.cellStatusAt(1, 0), std::string("ant:right"));
}

void LangtonsAntTests::advanceWithAntInWhiteCell_AntShouldTurnFromRightToDownAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(0, 2, "right");
    grid.advance();
    QCOMPARE(grid.cellStatusAt(0, 1), std::string("ant:down"));
}

void LangtonsAntTests::advanceWithAntInWhiteCell_AntShouldTurnFromDownToLeftAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(2, 1, "down");
    grid.advance();
    QCOMPARE(grid.cellStatusAt(1, 1), std::string("ant:left"));
}

void LangtonsAntTests::advanceWithAntInWhiteCell_AntShouldTurnFromLeftToUpAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(2, 1, "left");
    grid.advance();
    QCOMPARE(grid.cellStatusAt(2, 2), std::string("ant:up"));
}

void LangtonsAntTests::advanceWithAntInWhiteCell_CellColorShouldChangeToBlack()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(1, 0, "up");
    grid.advance();
    QCOMPARE(grid.colorAtCell(1, 0), AntGrid::Black);
}

void LangtonsAntTests::advanceWithAntInBlackCell_AntShouldTurnFromUpToLeftAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(1, 2, "up");
    grid.setCellColor(1, 2, AntGrid::Black);
    grid.advance();
    QCOMPARE(grid.cellStatusAt(0, 2), std::string("ant:left"));
}

void LangtonsAntTests::advanceWithAntInBlackCell_AntShouldTurnFromRightToUpAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(0, 0, "right");
    grid.setCellColor(0, 0, AntGrid::Black);
    grid.advance();
    QCOMPARE(grid.cellStatusAt(0, 1), std::string("ant:up"));
}

void LangtonsAntTests::advanceWithAntInBlackCell_AntShouldTurnFromDownToRightAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(1, 1, "down");
    grid.setCellColor(1, 1, AntGrid::Black);
    grid.advance();
    QCOMPARE(grid.cellStatusAt(2, 1), std::string("ant:right"));
}

void LangtonsAntTests::advanceWithAntInBlackCell_AntShouldTurnFromLeftToDownAndMoveForward()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(2, 1, "left");
    grid.setCellColor(2, 1, AntGrid::Black);
    grid.advance();
    QCOMPARE(grid.cellStatusAt(2, 0), std::string("ant:down"));
}

void LangtonsAntTests::advanceWithAntInBlackCell_CellColorShouldChangeToWhite()
{
    AntGrid grid(3, 3);
    grid.placeAntToCell(1, 0, "up");
    grid.setCellColor(1, 0, AntGrid::Black);
    grid.advance();
    QCOMPARE(grid.colorAtCell(1, 0), AntGrid::White);
}

QTEST_APPLESS_MAIN(LangtonsAntTests)

#include "langtonsanttests.moc"
