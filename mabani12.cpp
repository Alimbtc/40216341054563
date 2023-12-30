#include <iostream>
#include <algorithm>

bool isRightTriangle(int a, int b, int c) {
    // Put the sides in an array and sort them in ascending order
    int sides[] = {a, b, c};
    std::sort(std::begin(sides), std::end(sides));

    // Check if the Pythagorean theorem holds
    if (sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2]) {
        return true;  // It can form a right-angled triangle
    } else {
        return false;  // It cannot form a right-angled triangle
    }
}

int main() {
    int sideA, sideB, sideC;
    // Get input for side lengths
    std::cout << "Enter the lengths of the three sides: ";
    std::cin >> sideA >> sideB >> sideC;

    // Check if it can form a right-angled triangle
    if (isRightTriangle(sideA, sideB, sideC)) {
        std::cout << "The three sides can form a right-angled triangle." << std::endl;
    } else {
        std::cout << "The three sides cannot form a right-angled triangle." << std::endl;
    }

    return 0;
}
