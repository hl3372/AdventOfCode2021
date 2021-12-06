#include <iostream>
#include <string>

int main()
{
    int x;
    std::string y;

    int hor = 0;
    int dep = 0;
    while (std::cin >> y >> x)
    {
        if (y == "forward")
            hor += x;
        else if (y == "up")
            dep -= x;
        else
            dep += x;
    }
    std::cout<<hor * dep<<"\n";
}