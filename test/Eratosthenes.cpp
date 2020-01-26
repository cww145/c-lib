/* テスト対象のファイル */
#include "../src/Eratosthenes.hpp"

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for( const auto &x: Eratosthenes( N ) )
    {
        cout << x << " ";
    }
    return 0;
}