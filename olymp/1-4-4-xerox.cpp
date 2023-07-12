#include <iostream>
#include<algorithm>

using number = long long;

number f(number a, number b, number t)
{
    number r = 0;
    r+=t/a;
    if(t>=a)
    {
        r+=(t-a)/b;
    }
    return r;
}


int main()
{
    number n, x, y;
    std::cin >> n >> x >> y;
    if(x>y)
        std::swap(x, y);
    number l = 0;
    number r = n*x;

    while (l+1 < r)
    {
        number mid = (l+r)/2;
        if(f(x, y, mid) >=n)
            r = mid;
        else
            l = mid;
    }
    std::cout << r;

}
