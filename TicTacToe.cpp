#include <iostream>
using namespace std;

int main() {

    char b1 = '1', b2 = '2', b3 = '3';
    char b4 = '4', b5 = '5', b6 = '6';
    char b7 = '7', b8 = '8', b9 = '9';

    char player = 'X';
    int turn = 0;
    int choice;

    while (turn < 9) {

        cout << "\n";
        cout << b1 << " | " << b2 << " | " << b3 << endl;
        cout << "--+---+--" << endl;
        cout << b4 << " | " << b5 << " | " << b6 << endl;
        cout << "--+---+--" << endl;
        cout << b7 << " | " << b8 << " | " << b9 << endl;

        cout << "\nPlayer " << player << ", enter a number: ";
        cin >> choice;

        if (choice == 1 && b1 == '1')
            b1 = player;
        else if (choice == 2 && b2 == '2')
            b2 = player;
        else if (choice == 3 && b3 == '3')
            b3 = player;
        else if (choice == 4 && b4 == '4')
            b4 = player;
        else if (choice == 5 && b5 == '5')
            b5 = player;
        else if (choice == 6 && b6 == '6')
            b6 = player;
        else if (choice == 7 && b7 == '7')
            b7 = player;
        else if (choice == 8 && b8 == '8')
            b8 = player;
        else if (choice == 9 && b9 == '9')
            b9 = player;
        else {
            cout << "Wrong choice. Try again.\n";
            continue;
        }

        if ((b1 == player && b2 == player && b3 == player) ||
            (b4 == player && b5 == player && b6 == player) ||
            (b7 == player && b8 == player && b9 == player) ||
            (b1 == player && b4 == player && b7 == player) ||
            (b2 == player && b5 == player && b8 == player) ||
            (b3 == player && b6 == player && b9 == player) ||
            (b1 == player && b5 == player && b9 == player) ||
            (b3 == player && b5 == player && b7 == player)) {

            cout << "\nPlayer " << player << " wins!\n";
            break;
        }

        if (player == 'X')
            player = 'O';
        else
            player = 'X';

        turn++;
    }

    if (turn == 9)
        cout << "\nThe game is a draw.\n";

    return 0;
}
