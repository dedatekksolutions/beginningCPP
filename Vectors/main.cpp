#include <iostream>
#include <vector>

int main()
{

    std::vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    std::vector<int> numberz{1, 2, 3, 4, 5};

    std::vector<double> eighty(365, 80.0);

    double tmp = {0};
    for (auto &&e : eighty)
    {
        tmp += e;
        std::cout << tmp << std::endl;
    }

    std::cout << numberz.at(3) << std::endl;
    std::cout << vowels[3] << std::endl;

    std::cout << "enter an integer" << std::endl;
    std::cin >> numberz.at(3);

    std::cout << "enter a vowel" << std::endl;
    std::cin >> vowels[3];

    std::cout << "you entered \n";

    std::cout << numberz.at(3) << std::endl;

    std::cout << vowels[3] << std::endl;

    std::cout << "enter an integer then a vowel separated by a space" << std::endl;
    std::cin >> numberz.at(3);
    std::cin >> vowels[3];

    std::cout << "you entered \n";

    std::cout << numberz.at(3) << std::endl;

    std::cout << vowels[3] << std::endl;

    std::cout << "there are " << eighty.size() << " elements in the eighty vector\n";

    std::cout << "there are " << vowels.size() << " elements in the vowel vector\n";

    std::cout << "now enter 3x characters separated by a space\n";

    char ch_one{'x'};
    char ch_two{'x'};
    char ch_three{'x'};

    std::cin >> ch_one;
    std::cin >> ch_two;
    std::cin >> ch_three;

    vowels.push_back(ch_one);
    vowels.push_back(ch_two);
    vowels.push_back(ch_three);

    std::cout << "NOW there are " << vowels.size() << " elements in the vowel vector\n";

    std::vector<std::vector<int>> movie_ratings{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    std::cout << movie_ratings.at(1).at(1) << std::endl;
    std::cout << movie_ratings[2][0] << std::endl;

    return 0;
}
