//
// Created by ryan javid on 2021-09-25.
//

#include <bits/stdc++.h>
using namespace std;
int t, g, a, b, sa, sb;
int cur[6] = {0,0,0,0,0,0};
vector<int> v;
vector<vector<int>> f;
// 1 = win
// 2 = loose
// 3 = toe

bool result(vector<int> v) {
    int cur1[4] = {0,0,0,0};
    if(v[0] == 1) {
        cur1[0]+=3;
    }
    else if(v[0] == 2) {
        cur1[1] += 3;
    }
    else {
        cur1[0] +=1;
        cur1[1] +=1;
    }

    if(v[1] == 1) {
        cur1[0]+=3;
    }
    else if(v[1] == 2) {
        cur1[2] += 3;
    }
    else {
        cur1[0] +=1;
        cur1[2] +=1;
    }

    if(v[2] == 1) {
        cur1[0]+=3;
    }
    else if(v[2] == 2) {
        cur1[3] += 3;
    }
    else {
        cur1[0] +=1;
        cur1[3] +=1;
    }

    if(v[3] == 1) {
        cur1[1]+=3;
    }
    else if(v[3] == 2) {
        cur1[2] += 3;
    }
    else {
        cur1[1] +=1;
        cur1[2] +=1;
    }

    if(v[4] == 1) {
        cur1[1]+=3;
    }
    else if(v[4] == 2) {
        cur1[3] += 3;
    }
    else {
        cur1[1] +=1;
        cur1[3] +=1;
    }

    if(v[5] == 1) {
        cur1[2]+=3;
    }
    else if(v[5] == 2) {
        cur1[3] += 3;
    }
    else {
        cur1[2] +=1;
        cur1[3] +=1;
    }

    if(cur1[t-1] == *max_element(cur1, cur1+4) && count(cur1, cur1+4, cur1[t-1]) == 1) {
        return true;
    }
    else {
        return false;
    }



}



int main() {
    int cnt = 0;
    cin >> t >> g;
    for (int i = 0; i < g; i++) {
        cin >> a >> b >> sa >> sb;
        if (a == 1) {
            if (b == 2) {
                if (sa > sb) {
                    cur[0] = 1;
                } else if (sa < sb) {
                    cur[0] = 2;
                } else {
                    cur[0] = 3;
                }
            } else if (b == 3) {
                if (sa > sb) {
                    cur[1] = 1;
                } else if (sa < sb) {
                    cur[1] = 2;
                } else {
                    cur[1] = 3;
                }
            } else if (b == 4) {
                if (sa > sb) {
                    cur[2] = 1;
                } else if (sa < sb) {
                    cur[2] = 2;
                } else {
                    cur[2] = 3;
                }
            }
        } else if (a == 2) {
            if (b == 3) {
                if (sa > sb) {
                    cur[3] = 1;
                } else if (sa < sb) {
                    cur[3] = 2;
                } else {
                    cur[3] = 3;
                }
            } else if (b == 4) {
                if (sa > sb) {
                    cur[4] = 1;
                } else if (sa < sb) {
                    cur[4] = 2;
                } else {
                    cur[4] = 3;
                }
            }
        } else if (a == 3) {
            if (sa > sb) {
                cur[5] = 1;
            } else if (sa < sb) {
                cur[5] = 2;
            } else {
                cur[5] = 3;
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        if (cur[i] == 0) {
            v.push_back(3);
        } else {
            v.push_back(1);
        }
    }
    for (int i = 0; i < v[0]; i++) {
        for (int j = 0; j < v[1]; j++) {
            for (int n = 0; n < v[2]; n++) {
                for (int k = 0; k < v[3]; k++) {
                    for (int q = 0; q < v[4]; q++) {
                        for (int m = 0; m < v[5]; m++) {
                            vector<int> v1;
                            if(v[0] == 1) {
                                v1.push_back(cur[0]);
                            }
                            else if(i == 0) {
                                v1.push_back(1);
                            }
                            else if(i == 1) {
                                v1.push_back(2);
                            }
                            else if(i == 2) {
                                v1.push_back(3);
                            }

                            if(v[1] == 1) {
                                v1.push_back(cur[1]);
                            }
                            else if(j == 0) {
                                v1.push_back(1);
                            }
                            else if(j == 1) {
                                v1.push_back(2);
                            }
                            else if(j == 2) {
                                v1.push_back(3);
                            }

                            if(v[2] == 1) {
                                v1.push_back(cur[2]);
                            }
                            else if(n == 0) {
                                v1.push_back(1);
                            }
                            else if(n == 1) {
                                v1.push_back(2);
                            }
                            else if(n == 2) {
                                v1.push_back(3);
                            }

                            if(v[3] == 1) {
                                v1.push_back(cur[3]);
                            }
                            else if(k == 0) {
                                v1.push_back(1);
                            }
                            else if(k == 1) {
                                v1.push_back(2);
                            }
                            else if(k == 2) {
                                v1.push_back(3);
                            }

                            if(v[4] == 1) {
                                v1.push_back(cur[4]);
                            }
                            else if(q == 0) {
                                v1.push_back(1);
                            }
                            else if(q == 1) {
                                v1.push_back(2);
                            }
                            else if(q == 2) {
                                v1.push_back(3);
                            }

                            if(v[5] == 1) {
                                v1.push_back(cur[5]);
                            }
                            else if(m == 0) {
                                v1.push_back(1);
                            }
                            else if(m == 1) {
                                v1.push_back(2);
                            }
                            else if(m == 2) {
                                v1.push_back(3);
                            }
                            f.push_back(v1);
                        }
                    }
                }
            }
        }
    }
    for(int i = 0; i < f.size(); i++) {
        if(result(f[i])) {
            cnt++;
        }
    }
    cout << cnt;


}