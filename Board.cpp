#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;
using std::cout;
using std::endl;



void Board::post(unsigned int row, unsigned int col, ariel::Direction d, std::string msg){
    unsigned int len = msg.size();
    // cout << "msg len:" << len << ", msg: " << msg << endl;
    if(d == ariel::Direction::Horizontal){
        for(unsigned int i = 0; i < len; i++){
            mat[row][i+col] = msg[i];
            // cout << msg[i];
        }
    }
    else{
        for(unsigned int i = 0; i < len; i++){
            mat[i+row][col] = msg[i];
        }
    }
}

std::string Board::read(unsigned int row, unsigned int col, ariel::Direction d, unsigned int len){
    std::string msg = "";
    if(d == ariel::Direction::Horizontal){
        for(unsigned int i = 0; i < len; i++){
            msg += mat[row][i + col];
        }
        // msg += '\n';
    }
    else{
        for(unsigned int i = 0; i < len; i++){
            msg += mat[i + row][col];
        }
        // msg += '\n';
    }
    return msg;
}

void Board::show(){
    // cout <<"here 1"<<endl;
    unsigned int row_start=0, row_end=1, col_start=0, col_end=1;
    int flag = 1;
    // cout <<"here 2"<<endl;
    for(unsigned int i=0; i < LEN && flag; i++){
        for(unsigned int j=0; j < LEN && flag; j++){
            if(mat[i][j] != '_'){
                if(i > 0) row_start = i - 1;
                else row_start = i;
                if(j > 0) col_start = j - 1;
                else col_start = j;
                flag = 0;
            }
        }
    }
    // cout <<"here 3"<<endl;
    flag = 1;
    for(unsigned int i = LEN-1; i > 0  && flag; i--){
        for(unsigned int j= LEN-1; j > 0  && flag; j--){
            // cout <<i << " , " << j <<endl;
            if(mat[i][j] != '_'){
                if(i < LEN-3) row_end = i+3;
                else row_end = i;
                if(j < LEN-3) col_end = j+3;
                else col_end = j;
                flag = 0;
            }
        }
    }
    // cout <<"here 4"<<endl;
    for(unsigned int i = row_start; i <= row_end; i++){

        // cout << "row: " << i << ", col: " << col_start << ", length: " << col_end - col_start + 1<< endl;

        cout << i << ": " << Board::read(i, col_start, ariel::Direction::Horizontal, col_end - col_start + 1) << endl;
    }
            
}