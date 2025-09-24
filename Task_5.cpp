#include <iostream>

int main()
{
    int X, Y;
    std::cin >> X >> Y;
    if (X > Y) std::cout << "MAX VERSTAPPEN: " << X;
    else {
        if (Y > X) std::cout << "MAX VERSTAPPEN: " << Y;
 
        else std::cout << "RAVNI";
    }
    return 0;
}
