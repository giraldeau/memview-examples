#include <iostream>
#include <algorithm>
#include <random>

int main(int argc, char **argv)
{
    int n = 10;
    
    if (argc >= 2) {
        n = std::atoi(argv[1]);
        if (n <= 0) {
            std::cout << "size must be greater than zero\n";
        }
    }
    
    std::vector<double> data(n);
    for (int i = 0; i < n; i++) {
        data[i] = i;
    }
    std::random_device rand;

    int iter = 0;
    while (true) {
        std::shuffle(data.begin(), data.end(), rand);
        std::sort(data.begin(), data.end());
        std::cout << "iter: " << iter++ << "\n";
    }

    return 0;
}
