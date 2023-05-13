#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    srand(time(0)); // Seed the random number generator
    int favno;
    int random = 1 + (rand() % 100);

    std::cout << "tell me ya favourite number bitch!"<< std::endl;

    std::cin >>favno;

    if (favno == random){
    std::cout << "Yeah BOI!\n"<< random << " is my favourite too!\n" << std::endl;
    }else{
        std::cout << "Ya fucked up honkey!"<< std::endl;
        std::cout << "Random number: " << random << " is what I was after." << std::endl;

    }

    return 0;
}