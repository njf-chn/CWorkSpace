#include <stdexcept>
#include <iostream>

double divideNumbers(double inNumberator, double indenominator)
{
    if (indenominator == 0){
        throw std::exception();
    }
    return (inNumberator / indenominator);
}

int main(int argc, char const *argv[])
{
    try{
        std::cout << divideNumbers(2.5, 0.5) << std::endl;
        std::cout << divideNumbers(2.5, 0) << std::endl;
    }catch(std::exception exception){
        std::cout << "an exception was caught" << std::endl;
    }
    return 0;
}


