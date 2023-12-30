// ali maleki

#include <iostream>

int main() {
    
    int arr[100];

    
    for (int i = 0; i < 100; i++) {
        std::cin >> arr[i];
    }

    
    for (int i = 0; i < 100; i++) {
        std::cout << arr[i] * 3 << std::endl;
    }

    return 0;
}
