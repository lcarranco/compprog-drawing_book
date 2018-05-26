#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int calculate_turns_from_beg(int p) {
    int t = 0;
    t = p / 2;
    return t;
}

int calculate_turns_from_end(int e, int p) {
    int t = 0;
    t = abs((p / 2) - (e / 2));
    return t;
}

int main() {
    int e = 0;
    int p = 0;
    cin >> e;
    cin >> p;

    // cout << e << endl;
    // cout << p << endl;

    cout << min(calculate_turns_from_beg(p), calculate_turns_from_end(e, p));

    return 0;
}