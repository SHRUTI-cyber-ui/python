#include <iostream>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; ++i) {
        int num = i + 1;
        int count = i;
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            std::cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; ++j) {
            std::cout << num++ << " ";
        }

        // Print decreasing numbers
        for (int j = 1; j < i; ++j) {
            std::cout << --count << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
