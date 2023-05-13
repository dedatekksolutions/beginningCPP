#include <iostream>

int main()
{
    std::cout << "\n\n\nPRIMATIVE TYPES\n\n\n";

    // char example

    char variable{'J'};

    std::cout << "this is an example of how to store a char as a primative type by storing it \nchar variable_name {'" << variable << "'};\n"
              << std::endl;

    // unsigned short int example

    unsigned short int exam_score{55};

    std::cout << "this is an example of how to store a unsigned short int as a primative type by storing it \nunsigned short int exam_score {'" << exam_score << "'};\n"
              << std::endl;

    // int example

    int countries_represented{65};

    std::cout << "this is an example of how to store a int as a primative type by storing it \nint countries_represented {'" << countries_represented << "'};\n"
              << std::endl;

    // long example

    long people_in_florida{20610000};

    std::cout << "this is an example of how to store a long as a primative type by storing it \nlong people_in_florida {'" << people_in_florida << "'};\n"
              << std::endl;

    // long example

    long people_on_earth{7'600'000'000};

    std::cout << "this is an example of how to store a long as a primative type by storing it \nlong people_on_earth {'" << people_on_earth << "'};\n"
              << std::endl;

    // long long example

    long long distance_to_alpha_centuri{9'461'000'000'000};

    std::cout << "this is an example of how to store a long long as a primative type by storing it \nlong long distance_to_alpha_centuri {'" << distance_to_alpha_centuri << "'};\n"
              << std::endl;

    // float example

    float car_payment{401.23};

    std::cout << "this is an example of how to store a float as a primative type by storing it \nlong long car_payment {'" << car_payment << "'};\n"
              << std::endl;

    // double example

    double pi{3.142938};

    std::cout << "this is an example of how to store a double as a primative type by storing it \ndouble pi {'" << pi << "'};\n"
              << std::endl;

    // long double example

    long double large_amount{2.7e120};

    std::cout << "this is an example of how to store a long double as a primative type by storing it \nlong double large_amount {'" << large_amount << "'};\n"
              << std::endl;

    // boolean example

    bool game_over(false);

    std::cout << "The value of game_over is " << game_over << std::endl;

    // overflow example

    short value1(30000);
    short value2(1000);
    short product(value1 * value2);

    std::cout << "The sum of " << value1 << " and " << value2 << " is " << product << " which is incorrect due to overflow" << std::endl;

    return 0;
}
