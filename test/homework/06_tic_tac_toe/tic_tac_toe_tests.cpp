#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the game is a tie, verify the winner is C")
{ 
	TicTacToe game;
	game.mark_board(1);                    
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1); //X    X|O|O
	game.mark_board(2); //O    X| | 
	game.mark_board(4); //X    X| | 
	game.mark_board(3); //O
	game.mark_board(7); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2); //X    O|X|O
	game.mark_board(1); //O     |X|
	game.mark_board(5); //X     |X|
	game.mark_board(3); //O
	game.mark_board(8); //X
	

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3); //X    O|O|X
	game.mark_board(1); //O     | |X
	game.mark_board(6); //X     | |X
	game.mark_board(2); //O
	game.mark_board(9); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1); //X    X|X|X
	game.mark_board(4); //O    O|O|
	game.mark_board(2); //X     | | 
	game.mark_board(5); //O
	game.mark_board(3); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(4); //X    O|O| 
	game.mark_board(1); //O    X|X|X 
	game.mark_board(5); //X     | |
	game.mark_board(2); //O
	game.mark_board(6); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7); //X
	game.mark_board(1); //O    O|O|
	game.mark_board(8); //X     | |
	game.mark_board(2); //O    X|X|X
	game.mark_board(9); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1); //X    X|O|O
	game.mark_board(2); //O     |X|
	game.mark_board(5); //X     | |X
	game.mark_board(3); //O
	game.mark_board(9); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7); //X     |O|X
	game.mark_board(2); //O     |X|O
	game.mark_board(5); //X    X| |
	game.mark_board(4); //O     
	game.mark_board(3); //X     

	REQUIRE(game.game_over() == true);
}