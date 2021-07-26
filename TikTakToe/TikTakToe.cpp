#include <iostream>

char boardNum[] = { '0','1','2','3','4','5','6','7','8','9' };

//Creation of the Board on console

void board()
{
    system("CLS");
    std::cout << "\n\n\tTic Tac Toe\n\n";

    std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl;
    std::cout << std::endl;

    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << boardNum[1] << "  |  " << boardNum[2] << "  |  " << boardNum[3] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << boardNum[4] << "  |  " << boardNum[5] << "  |  " << boardNum[6] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << boardNum[7] << "  |  " << boardNum[8] << "  |  " << boardNum[9] << std::endl;

    std::cout << "     |     |     " << std::endl << std::endl;
}

//return 1=win, 0=draw, -1=game continue
int checkReslut()
{
    if (boardNum[1] == boardNum[2] && boardNum[2] == boardNum[3])
        return 1;
    else if (boardNum[4] == boardNum[5] && boardNum[5] == boardNum[6])
        return 1;
    else if (boardNum[7] == boardNum[8] && boardNum[8] == boardNum[9])
        return 1;
    else if (boardNum[1] == boardNum[5] && boardNum[5] == boardNum[9])
        return 1;
    else if (boardNum[7] == boardNum[5] && boardNum[5] == boardNum[3])
        return 1;
    else if (boardNum[1] == boardNum[4] && boardNum[4] == boardNum[7])
        return 1;
    else if (boardNum[2] == boardNum[5] && boardNum[5] == boardNum[8])
        return 1;
    else if (boardNum[3] == boardNum[6] && boardNum[6] == boardNum[9])
        return 1;
    else if (boardNum[1] != '1' && boardNum[2] != '2' && boardNum[3] != '3' &&
        boardNum[4] != '4' && boardNum[5] != '5' && boardNum[6] != '6' &&
        boardNum[7] != '7' && boardNum[8] != '8' && boardNum[9] != '9')
        return 0;
    else
        return -1;
}

int main()
{
    int player = 1, i, move;
   
    char mark;
    do
    {
        board();
        if (player % 2)
            player = 1;
        else player = 2;
        //player=(player%2)?'X','O'
        std::cout << "Player " << player << " make a move: ";
        std::cin >> move;
        if (player == 1)
            mark = 'X';
        else mark = 'O';
        //mark=(player==1)?'X','O'

         if (move == 1 && boardNum[1] == '1')
            boardNum[1] = mark;
        else if (move == 2 && boardNum[2] == '2')
            boardNum[2] = mark;
        else if (move == 3 && boardNum[3] == '3')
            boardNum[3] = mark;
        else if (move == 4 && boardNum[4] == '4')
            boardNum[4] = mark;
        else if (move == 5 && boardNum[5] == '5')
            boardNum[5] = mark;
        else if (move == 6 && boardNum[6] == '6')
            boardNum[6] = mark;
        else if (move == 7 && boardNum[7] == '7')
            boardNum[7] = mark;
        else if (move == 8 && boardNum[8] == '8')
            boardNum[8] = mark;
        else if (move == 9 && boardNum[9] == '9')
            boardNum[9] = mark;
        else
        {

            std::cout << "Invalid move!";
            player--; //to keep same player picking
            std::cin.ignore();
            std::cin.get();
        }
       

        i = checkReslut();
        player++;
    } while (i == -1);
    board();
    if (i == 1)
        {
        if (player > 2)
            std::cout << "Player " << player - 1 << " wins!";
        else std::cout << "Player " << player << " wins!";
        }
    else
        std::cout << "Game is a draw!";
    std::cin.ignore();
    std::cin.get();
    return 0;

  
}
