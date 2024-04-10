#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool won(vector<string> &board, char c) {
    bool valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[0][i] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[1][i] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[2][i] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[i][0] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[i][1] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[i][2] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[i][i] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    valid = true;

    for(int i = 0; i < 3; i++) {
        if(board[i][2 - i] != c) {
            valid = false;
        }
    }

    if(valid) {
        return true;
    }

    return false;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        vector<string> board(3);

        for(int i = 0; i < 3; i++) {
            cin >> board[i];
        }

        if(won(board, 'X')) {
            cout << "X" << endl;
        }
        else if(won(board, 'O')) {
            cout << "O" << endl;
        }
        else if(won(board, '+')) {
            cout << "+" << endl;
        }
        else {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}