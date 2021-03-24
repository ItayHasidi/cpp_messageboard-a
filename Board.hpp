#include <string>
#include "Direction.hpp"
using ariel::Direction;
using namespace std;

#define LEN 300

namespace ariel{
    struct Board{
        char mat[LEN][LEN];
        public:           
            Board() {     // Constructor
            for(int i = 0; i < LEN; i++){
                    for(int j = 0; j < LEN; j++){
                        mat[i][j] = '_';
                    }
                }
            }

        void post(unsigned int row, unsigned int col, ariel::Direction d, std::string msg);
        std::string read(unsigned int row, unsigned int col, ariel::Direction d, unsigned int len);
        void show();
    };
}
