#include <iostream>

using namespace std;

using number = int;

bool is_prime(number n)
{
    if (n==2) return true;
    if(n%2==0)  return false;

    for (int i=3; i < n/2; i+=2)
    {
        if (n%i == 0)  return false;
    }
    return true;
}

int main()
{
    number n;
    cin >> n;
    cout << (int)is_prime(n);
}