#include <iostream>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                std::cout << j;
            } else {
                std::cout << 6 - j;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
