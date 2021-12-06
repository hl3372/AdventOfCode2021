#include <iostream>
#include <string>

int main()
{
    int x;
    std::string y;

    int hor = 0;
    int dep = 0;
    int aim = 0;
    while (std::cin >> y >> x)
    {
        if (y == "forward")
        {
            hor += x;
            dep += aim * x;
        }
        else if (y == "up")
            aim -= x;
        else
            aim += x;
    }
    std::cout<<hor * dep<<"\n";
}