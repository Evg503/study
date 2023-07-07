#include <iostream>

using namespace std;

using number = long long;

int main()
{
    number w, h, n;
    cin >>w>>h>>n;

    number l = 0;
    number r = (w+h)*n;

    while (l+1 < r)
    {
        number mid = (l+r)/2;
        if((mid/w * (mid/h)) >=n)
            r = mid;
        else
            l = mid;
    }
    cout << r;
}

