#include <iostream>
using namespace std;
#include <vector>

bool isSafe(vector<string>&board, int row, int col, int n){

    // col check
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q') return false;
    }
    // row check
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q') return false;
    }
    // left diag
    for(int i=row, j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j]=='Q') return false;
    }
    // right diag
    for(int i=row, j=col; i>=0 && j<n; i--,j++){
        if(board[i][j]=='Q') return false;
    }

    return true;

}


void solve(vector<string>&board, int row, int n, vector<vector<string>>&ans){

    if(row==n){
        ans.push_back({board});
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row, j, n)){
            board[row][j]='Q';
            solve(board, row+1,n,ans); // recursive call
            board[row][j]='.'; //backtracking
        }
    }
}

void nQ(int n){
    vector<string> board(n, string(n, '.'));

    vector<vector<string>>ans;

    solve(board,0, n,ans);
    cout << "Total ways: " << ans.size() << endl;

    for(auto &vec:ans){
        for(string s:vec){
            cout<<s<<endl;
        }
        cout<<endl;
    }
}

int main(){

    nQ(8);
}


// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void solve(int r, int c,
//            vector<vector<int>>& maze,
//            vector<vector<int>>& visited,
//            string path, vector<string>& ans, int n) {

//     // Base case: destination reached
//     if (r == n - 1 && c == n - 1) {
//         ans.push_back(path);
//         return;
//     }

//     // Direction order: Down, Left, Right, Up
//     int dr[] = {1, 0, 0, -1};
//     int dc[] = {0, -1, 1, 0};
//     string dir = "DLRU";

//     for (int k = 0; k < 4; k++) {
//         int nr = r + dr[k];
//         int nc = c + dc[k];

//         // Check bounds, open cell and not visited
//         if (nr >= 0 && nc >= 0 && nr < n && nc < n &&
//             maze[nr][nc] == 1 && visited[nr][nc] == 0) {

//             // CHOOSE: mark current cell
//             visited[r][c] = 1;

//             // EXPLORE: move to the neighbour
//             solve(nr, nc, maze, visited,
//                   path + dir[k], ans, n);

//             // UNDO: restore state for another path
//             visited[r][c] = 0;
//         }
//     }
// }

// int main() {
//     vector<vector<int>> maze = {
//         {1, 0,1},
//         {1, 1,0},
//         {0,1,1}};

//     int n = maze.size();
//     vector<vector<int>> visited(n, vector<int>(n, 0));
//     vector<string> ans;

//     if (n > 0 && maze[0][0] == 1 && maze[n-1][n-1] == 1) {
//         solve(0, 0, maze, visited, "", ans, n);
//     }

//     if (ans.empty()) {
//         cout << "No path exists" << endl;
//     } else {
//         for (string p : ans) cout << p << endl;
//     }
//     return 0;
// }

