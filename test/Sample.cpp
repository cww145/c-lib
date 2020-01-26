/**
 * @file Sample2.cpp
 * @brief Sample.hppのテストコード
 * @version 0.1
 * @date 2020-01-13
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/* テスト対象のファイル */
#include "../src/Sample.hpp"

#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    cout << get_string(n) << endl;
}