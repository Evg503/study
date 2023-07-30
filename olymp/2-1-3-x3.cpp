#include <iostream>

using namespace std;

using number = unsigned long long;

number g(number n)
{
    switch (n%3)
    {
    case 0:
        return n/3;
    case 1:
        return 12297829382473034411ull + n/3;
    case 2:
        return 6148914691236517206ull + n/3;
    }
}

int main()
{
    number n;
    cin >> n;
    cout << g(n) ;
}