/* テスト対象のファイル */
#include "../src/Eratosthenes.hpp"

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