#include <iostream>

int main()
{
    int curr;
    int prev;
    bool flag = 0;
    int count = 0;
    while (std::cin >> curr)
    {
        if (curr > prev && flag)
            count++;
        prev = curr;
        flag = 1;
    }
    std::cout<<count<<"\n";
}