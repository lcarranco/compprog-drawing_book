#include <iostream>
#include <vector>

using namespace std;

vector<int> read_ints(int n) {
    vector<int> ints;
    for (int i = 1; i <= n; ++i) {
        ints.push_back(i);
        // cout << ints[i] << ' ';
    }
    return ints;
}

int main() {
    int n = 0;
    cin >> n;

    vector<int> ints = read_ints(n);

    for (vector<int>::iterator it = ints.begin(); it != ints.end(); ++it) {
        cout << *it << ' ';
    }

    cout << endl;
    return 0;
}