#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double a, z1, z2;
    std::cout << "a = ";
    std::cin >> a;
    z1 = sin(2*a) + sin(5*a) - sin(3*a) / cos(a) + 1 - 2*sin^(2*a);
    z2 = sin(2*a);
    std::cout << "\nz1 = " << z1;
    std::cout << "\nz2 = " << z2 << std::endl;

    return 0;
}
