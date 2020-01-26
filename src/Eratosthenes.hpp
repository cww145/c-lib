#include <vector>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
vector<int> Eratosthenes( const int N )
{
    vector<bool> is_prime( 10000 + 1 );
    for( int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;//初期化
    }
    vector<int> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}
