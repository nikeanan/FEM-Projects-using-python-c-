#include <iostream>
#include<vector>

int main() {
    int a;
    int b,c;
    int d=1,e=3,f;
    unsigned int g=10;
    double h=1.3, i;
    std::cout << 3/4. << std::endl;
    std::cout << "FEM Solver Ready in the Cloud!" << std::endl;
    std::vector<double> vec1;
    std::vector<double> vec2(3);
    std::vector<double> vec3(3,1.), vec4(2);

    std::cout << vec1.size() << std::endl;

    vec1.resize(5);
    std::cout << vec1.size() << std::endl;
    std::cout << vec1[0] << std::endl;

    vec1.push_back(3.2);

    std::cout << vec1.size() << std::endl;
    std::cout << vec1[5] << std::endl;

    return 0;
}