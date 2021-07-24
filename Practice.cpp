#include <iostream>

using namespace std;

char board[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};

void drawBoard(){
    for (int i=1; i<=9; ++i){
        cout << i << "";
        if (i%3!=0) cout << " | ";
        if (i==3 || i==6) cout << endl << "---------" << endl;
    }
}

int main()
{
    drawBoard();
    return 0;
}
