#include <iostream>

using number = unsigned long long;
using namespace std;

number a, b, c;

int main()
{
    cin >> a >> b >> c;
    number x = a*b*c/(a*b+b*c+c*a);
    cout <<x;
}