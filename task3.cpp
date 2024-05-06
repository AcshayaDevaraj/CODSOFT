#include <iostream>
#include <vector>
using namespace std;
void display(const vector<vector<char>>& board);
bool CWin(const vector<vector<char>>& board, char player);
bool CDraw(const vector<vector<char>>& board);
void Playerswitch(char& currentPlayer);

int main() 
{
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    bool Endgame = false;
    while (!Endgame) 
    {
        cout << "Welcome to the interesting TIC TAC TOE game!!!" << endl ;
        display(board);
        int row, col;
        cout << "Player " << currentPlayer << "'s turn. Enter value (1-3) for row and (1-3) for column separated by a space: ";
        cin >> row >> col;
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') 
        {
            board[row - 1][col - 1] = currentPlayer;
            if (CWin(board, currentPlayer)) 
            {
                display(board);
                cout << "Player " << currentPlayer << " WINS!!!" << endl;
                Endgame = true;
            }
            else if (CDraw(board)) 
            {
                display(board);
                cout << "It's a draw match!! Try again." << endl;
                Endgame = true;
            }
            else 
            {
                Playerswitch(currentPlayer);
            }
        } 
        else 
        {
            cout << "Invalid move!! Try again." << endl;
        }
    }
    char Again;
    cout << "Do you want to play another exiciting round? (Y/N): ";
    cin >> Again;
    if (Again == 'Y' || Again == 'y') 
    {
        main();
    }
    return 0;
}
void display(const vector<vector<char>>& board) 
{
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) 
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool CWin(const vector<vector<char>>& board, char player) 
{
    for (int i = 0; i < 3; ++i) 
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
        {
            return true; 
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
        {
            return true; 
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
    {
        return true; 
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
    {
        return true; 
    }
    return false;
}
bool CDraw(const vector<vector<char>>& board) 
{  
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            if (board[i][j] == ' ') 
            {
                return false; 
            }
        }
    }
    return true; 
}
void Playerswitch(char& currentPlayer) 
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}