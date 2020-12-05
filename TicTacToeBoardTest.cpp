/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, X_first_turn_check)
{
	TicTacToeBoard game;
	Piece piece = game.toggleTurn();
	ASSERT_EQ(piece, X);
}

TEST(TicTacToeBoardTest, O_second_turn_check)
{
	TicTacToeBoard game;
	game.placePiece(1, 2);
	Piece piece = game.toggleTurn();
	ASSERT_EQ(piece, O);
}
