#include <iostream>

using namespace std;

using number = long long;
number power (number v, number n, number MOD)
{
    if (n < 1) return 1;
    if (n%2==1)
        return v * power(v, n-1, MOD) %MOD;
    number v2 = power(v, n/2, MOD);
    return v2*v2%MOD;

}

void test()
{
    number v =31;
    number n  = 1<<27;
    number MOD =1l<<33;
    number f = power(v, n, MOD);
    cout  << f;
}

int Str[26] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, 32, 1055, 1088, 1080, 1074, 1077, 1090, 44, 32, 1052, 1080, 1088, 33};

    int hashCode() {
        int h = 0;
        for( int j = 0; j<(1<<27);++j)
        {
            for (int i = 0; i < 26; i++) {
                h = 31 * h + Str[i];
            }
        }
        return h;
    }

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    //test();
    cout << hashCode() << endl;
    return 0;
}