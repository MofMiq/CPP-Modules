#include <iostream>

int main(void)
{
    int nbBalls = 42;

    int *ptrBall = &nbBalls;
    int& refBall = nbBalls;

    std::cout << nbBalls << " " << *ptrBall << " " << refBall << std::endl;

    *ptrBall = 21;
    std::cout << nbBalls << std::endl;
    refBall = 84;
    std::cout << nbBalls << std::endl;
    
    return 0;
}