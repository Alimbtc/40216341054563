// ali maleki


#include <iostream>
using namespace std;


bool is_valid(int n) {
    
    if (n == 0) {
        return true;
    }
    
    int d = n % 10;
    
    if (d != 2 && d != 5) {
        return false;
    }
    
    return is_valid(n / 10);
}

int main() {
    
    int n;
  
    cin >> n;
 
    for (int i = 1; i < n; i++) {
        if (is_valid(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
