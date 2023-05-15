#include <iostream>

int main()
{

    // int test_scoresp[3]{1, 2, 3};
    int test_scores3[]{
        0,
        0,
        0,
        8,
        0,
    };

    std::cout << test_scores3[3] << std::endl;
    std::cout << "gimmie a thingy: ";
    std::cin >> test_scores3[3];
    std::cout << test_scores3[3] << std::endl;

    // initialise this way
    int test_scores[4]{};

    return 0;
}
