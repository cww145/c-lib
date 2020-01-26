/* テスト対象のファイル */
#include "../src/Sample.hpp"

#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    cout << get_string(n) << endl;
}