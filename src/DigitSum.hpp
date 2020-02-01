#include <string>

template<typename T>
T digitsum(T N)
{
    T res{};
    while( N > 0 )
    {
        res += ( N % 10 );
        N /= 10;
    }
    return res;
}

template<>
std::string digitsum(std::string S)
{
    int res{};
    for(auto &x: S)
    {
        res += x - '0';
    }
    return std::to_string(res);
}