#include <iostream>

int main()
{
    int X, Y, max;
    std::cin >> X >> Y;
    if (X > Y) {
        max = X; 
        std::cout << "MAX VERSTAPPEN: " << max;
    }
    else {
        if (Y > X) {
            max = Y;
            std::cout << "MAX VERSTAPPEN: " << max;
        }
        else std::cout << "RAVNI";
    }
    return 0;
}
