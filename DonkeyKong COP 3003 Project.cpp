#include <iostream>
#define ROWS 28
#define COLUMNS 70
using namespace std;

class GameBoard {
public:
    char Board[ROWS][COLUMNS] =
    { "                                                                  ",
                         "                            PP                                   ",
                         "      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO          ",
                         "               @@          DDDD            @@                    ",
                         "               @@          DDDD            @@                    ",
                         "               @@          DDDD            @@                    ",
                         "      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOO           ",
                         "            |-|    |-|                      |-|    |-|           ",
                         "            |-|    |-|                      |-|    |-|           ",
                         "            |-|    |-|                      |-|    |-|           ",
                         "            |-|    |-|                      |-|    |-|           ",
                         "      OOOOOOOOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOOOO        ",
                         "       |-|                   |-|                      |-|        ",
                         "       |-|                   |-|                      |-|        ",
                         "       |-|                   |-|                      |-|        ",
                         "       |-|                   |-|                      |-|        ",
                         "    OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOOOOOOOO    ",
                         "    |-|             |-|                    |-|            |-|    ",
                         "    |-|             |-|                    |-|            |-|    " ,
                         "    |-|             |-|                    |-|            |-|    ",
                         "    |-|             |-|                    |-|            |-|    ",
                         " OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOOOOOOOOOOO ",
                         " |-|                          |-|                             |-|",
                         " |-|                          |-|                             |-|",
                         " |-|                          |-|                             |-|",
                         " |-|                          |-|                             |-|",
                         "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
    };

   GameBoard() {
       for (int i = 0; i < ROWS; i++){
           cout << "\t\t\t\t\t\t";
           for (int j = 0; j < COLUMNS; j++)
               cout << Board[i][j];
           cout << "\n";
        }
    }

};

int main()
{

    GameBoard gameboard;

    return 0;
}


