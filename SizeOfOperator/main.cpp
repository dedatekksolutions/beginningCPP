#include <iostream>
#include <climits>

int main()
{

    std::cout << "size of information" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    std::cout << "char: " << sizeof(char) << " bytes." << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes." << std::endl;
    std::cout << "unsigned unsigned int: " << sizeof(unsigned int) << " bytes." << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes." << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes." << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes." << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes." << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;

    std::cout << "-------------------------------------------------------------------" << std::endl;

    std::cout << "min val char: " << CHAR_MIN << std::endl;
    std::cout << "min val int: " << INT_MIN << std::endl;
    std::cout << "min val float: " << SHRT_MIN << std::endl;
    std::cout << "min val long: " << LONG_MIN << std::endl;
    std::cout << "long long: " << LLONG_MIN << std::endl;

    std::cout << "max val char: " << CHAR_MAX << std::endl;
    std::cout << "max val int: " << INT_MAX << std::endl;
    std::cout << "max val float: " << SHRT_MAX << std::endl;
    std::cout << "max val long: " << LONG_MAX << std::endl;
    std::cout << "long long: " << LLONG_MAX << std::endl;

    int age{21};
    double wage{22.24};

    std::cout << "size of age: " << sizeof age << std::endl;
    std::cout << "size of wage: " << sizeof wage << std::endl;

    return 0;
}
