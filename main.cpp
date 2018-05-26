#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

int calculate_turns(int e, int p) {
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

    cout << calculate_turns(e, p);

    return 0;
}