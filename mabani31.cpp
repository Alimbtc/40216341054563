// ali maleki

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cin >> num1 >> num2 >> num3;

    int max_num;

    if (num1 > num2) {
        max_num = num1;
    } else {
        max_num = num2;
    }

    if (num3 > max_num) {
        max_num = num3;
    }

    cout  << max_num << endl;

    return 0;
}
