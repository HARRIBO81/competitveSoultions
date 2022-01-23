//
// Created by ryan javid on 2021-10-23.
//

#include <bits/stdc++.h>
using namespace std;
bool visited[9][9];
int main() {
    int cnt = 0;
    pair<int, int> start;
    pair<int, int> end;
    vector<pair<int, int>> bfs;
    vector<pair<int, int>> node;
    cin >> start.first >> start.second >> end.first >> end.second;
    bfs.push_back(start);
    visited[start.first][start.second] = true;
    while(!bfs.empty()) {
        node.clear(); {
            for(auto i : bfs) {
                if(i.first == end.first && i.second == end.second) {
                    cout << cnt << endl;
                    return 0;
                } else {
                    int dx = i.first, dy = i.second;
                    if(dx + 1 <= 8) {
                        if(dy + 2 <= 8) {
                            if(!visited[dx+1][dy+2]) {
                                visited[dx+1][dy+2] = true;
                                node.emplace_back(dx+1, dy+2);
                            }
                        }
                        if(dy - 2 >= 1) {
                            if(!visited[dx+1][dy-2]) {
                                visited[dx+1][dy-2] = true;
                                node.emplace_back(dx+1, dy-2);
                            }
                        }
                    }

                    if(dx - 1 >= 1) {
                        if(dy + 2 <= 8) {
                            if(!visited[dx-1][dy+2]) {
                                visited[dx-1][dy+2] = true;
                                node.emplace_back(dx-1, dy+2);
                            }
                        }
                        if(dy - 2 >= 1) {
                            if(!visited[dx-1][dy-2]) {
                                visited[dx-1][dy-2] = true;
                                node.emplace_back(dx-1, dy-2);
                            }
                        }
                    }

                    if(dx + 2 <= 8) {
                        if(dy + 1 <= 8) {
                            if(!visited[dx+2][dy+1]) {
                                visited[dx+2][dy+1] = true;
                                node.emplace_back(dx+2, dy+1);
                            }
                        }
                        if(dy - 1 >= 1) {
                            if(!visited[dx+2][dy-1]) {
                                visited[dx+2][dy-1] = true;
                                node.emplace_back(dx+2, dy-1);
                            }
                        }
                    }

                    if(dx - 2 >= 1) {
                        if(dy + 1 <= 8) {
                            if(!visited[dx-2][dy+1]) {
                                visited[dx-2][dy+1] = true;
                                node.emplace_back(dx-2, dy+1);
                            }
                        }
                        if(dy - 1 >= 1) {
                            if(!visited[dx-2][dy-1]) {
                                visited[dx-2][dy-1] = true;
                                node.emplace_back(dx-2,dy-1);
                            }
                        }
                    }
                }
            }
        }
        bfs = node;
        cnt++;
    }
    return 0;
}