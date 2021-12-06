#include <iostream>
#include <vector>

std::vector<int> fillvec()
{
    int y;
    std::vector<int> vec;
    while (std::cin >> y)
    {
        vec.push_back(y);
    }
    return vec;
}

int main()
{
    std::vector<int> v = fillvec();
    int count = 0;
    for (int i = 3; i < v.size(); i++)
    {
        if (v[i] + v[i-1] + v[i-2] > v[i-3] + v[i-1] + v[i-2])
            count++;
    }
    std::cout<<count<<"\n";
}