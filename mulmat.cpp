#include <iostream>
#include <Eigen/Dense>

int main(int argc, char **argv)
{
    int n = 10;
    
    if (argc >= 2) {
        n = std::atoi(argv[1]);
        if (n <= 0) {
            std::cout << "size must be greater than zero\n";
        }
    }
    
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(n, n);
    Eigen::MatrixXd B = Eigen::MatrixXd::Random(n, n);
    Eigen::MatrixXd C = Eigen::MatrixXd::Zero(n, n);

    int iter = 0;
    while (true) {
        C = A * B;
        std::cout << "iter: " << iter++ << "\n";
    }

    return 0;
}
