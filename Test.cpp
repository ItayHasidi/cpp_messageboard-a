#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;
using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("checking Horizontal") {
    ariel::Board board;
    CHECK(board.read(1,1,Direction::Horizontal,1)  == "_");
    CHECK(board.read(1,1,Direction::Horizontal,2)  == "__");
    CHECK(board.read(1,1,Direction::Horizontal,3)  == "___");
    CHECK(board.read(1,1,Direction::Horizontal,4)  == "____");
    CHECK(board.read(1,1,Direction::Horizontal,5)  == "_____");
    CHECK(board.read(1,1,Direction::Horizontal,6)  == "______");
    CHECK(board.read(1,1,Direction::Horizontal,7)  == "_______");
    CHECK(board.read(1,1,Direction::Horizontal,8)  == "________");
    CHECK(board.read(1,1,Direction::Horizontal,9)  == "_________");
    CHECK(board.read(1,1,Direction::Horizontal,10) == "__________");
}

TEST_CASE("checking Vertical") {
    ariel::Board board;
    CHECK(board.read(1,1,Direction::Vertical,1)  == "_");
    CHECK(board.read(1,1,Direction::Vertical,2)  == "__");
    CHECK(board.read(1,1,Direction::Vertical,3)  == "___");
    CHECK(board.read(1,1,Direction::Vertical,4)  == "____");
    CHECK(board.read(1,1,Direction::Vertical,5)  == "_____");
    CHECK(board.read(1,1,Direction::Vertical,6)  == "______");
    CHECK(board.read(1,1,Direction::Vertical,7)  == "_______");
    CHECK(board.read(1,1,Direction::Vertical,8)  == "________");
    CHECK(board.read(1,1,Direction::Vertical,9)  == "_________");
    CHECK(board.read(1,1,Direction::Vertical,10) == "__________");

}