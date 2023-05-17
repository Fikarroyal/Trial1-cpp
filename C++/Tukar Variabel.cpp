#include <iostream>

int main() {
    int A = 50;
    int B = 30;

    std::cout << "Sebelum Pertukaran:" << std::endl;
    std::cout << "Nilai A: " << A << std::endl;
    std::cout << "Nilai B: " << B << std::endl;

    // Menukar isi antara variabel A dan B
    int temp = A;
    A = B;
    B = temp;

    std::cout << "Setelah Pertukaran:" << std::endl;
    std::cout << "Nilai A: " << A << std::endl;
    std::cout << "Nilai B: " << B << std::endl;

    return 0;
}
