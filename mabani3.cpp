// ali maleki
 
#include <iostream>

using namespace std;
int main() {
    int input, sum = 0;

    do {
        
        std::cin >> input;
        sum += input;
    } while (input != 0);

   cout  << sum << std::endl;

    return 0;
}
