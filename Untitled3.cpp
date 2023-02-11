#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, r;
    cin >> n;
    cin >> r;

    do {
        for (int i = 0; i < n; ++i) {
            if (v[i]) {
                cout << (i + 1) << " ";
            }
        }
        std::cout << "\n";
    } while (std::next_permutation(v.begin(), v.end()));
    return 0;
}