/* テスト対象のファイル */
#include "../src/DigitSum.hpp"

#include <iostream>
using namespace std;

int main()
{
    {
        string N{};
        cin >> N;
        cout << digitsum( N ) << endl;
    }
    {
        int32_t N{};
        cin >> N;
        cout << digitsum( N ) << endl;
    }
    {
        int64_t N{};
        cin >> N;
        cout << digitsum( N ) << endl;
    }
    return 0;
}