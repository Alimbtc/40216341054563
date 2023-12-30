#include <iostream>
#include <vector>
using namespace std;

void printSeries(int n) {
    vector<int> series;
    for (int i = 1; i <= n; i++) {
        int term = pow(-1, i) * i;
        series.push_back(term);
    }
    for (int term : series) {
        cout << term << " ";
    }
}

int main() {
    int n;
    
    cin >> n;
    printSeries(n);
    return 0;
}
