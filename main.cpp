#include <iostream>


int main(){
std::cout << "Insert your number here: ";
int x = 0;
char c;
std::cin >> x;
std::cout << "You entered: " << x << std::endl;
std::cout << "Goodbye." << std::endl; //we wish you a merry christmas
std::cout << "Wait a minute. Christmas Suprise! /\\" << std::endl; //and a happy new year
std::cout << "                                 /  \\" << std::endl;
std::cout << "                                /  o \\" << std::endl;
std::cout << "                               /      \\" << std::endl;
std::cout << "                              /  o  o  \\" << std::endl;
std::cout << "                             /  o    o  \\" << std::endl;
std::cout << "                            /____________\\" << std::endl;
std::cout << "                                  ||" << std::endl;
std::cout << "                                  ||" << std::endl;
std::cout << "Merry Christmas from me." << std::endl;
std::cout << "Press q and enter to continue.";
while (c != 'q')
{
    std::cin >> c;
}
return 0;
}
