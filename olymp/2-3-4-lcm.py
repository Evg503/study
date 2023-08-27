from math import gcd

def lcm(a,b):
    return a*b//gcd(a,b)

a, b = map(int, input().split())

c = lcm(a, b)
if c >10**18:
    print(-1)
else:
    print (c)
