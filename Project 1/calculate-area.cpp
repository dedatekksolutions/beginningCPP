#include <iostream>

int main()
{

int room_width;
int room_length;

std::cout<< "Enter the width of the room";
std::cin>>room_width;


std::cout<< "Enter the length of the room";
std::cin>>room_length;

std::cout<<"The area of the room is " << room_width * room_length << " metres" << std::endl;

    return 0;
    
}