#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int tLength = s.length();
    int nLength  = 0;
    for(int i = 0; i < tLength; i++){
        if(s[i] != ' '){
            nLength++;
        }
    }
    int rows = sqrt(nLength);
    int columns = rows + 1;
    if(rows * rows == nLength){
        columns = rows;
    }
    if(rows * columns < nLength){
        rows++;
    }
    vector<vector<char>> grid(rows, vector<char>(columns, ' '));
    int r = 0;
    int c = 0;
    for(int i = 0; i < tLength; i++){
        if(s[i] != ' '){
            grid[r][c] = s[i];
            c++;
            if(c == columns){
                c = 0;
                r++;
            }
            if(r == rows){
                break;
            }
        }
    }
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            if(grid[i][j] != ' '){
                cout << grid[i][j];
            }
        }
        cout << ' ';
    }
    return 0;
}