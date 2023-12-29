// ali maleki

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    
    cout << "Enter 10 number:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    
    double average = static_cast<double>(sum) / 10;

    
    cout << ": " << sum << endl;
    cout << ": " << average << endl;

    return 0;
}
