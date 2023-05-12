

#include <string>
#include <string_view>
#include <iostream>
#include <memory.h>


void replace(std::string& s, const char* search, const char* repl)
{
    size_t pos = s.find(search);
    while( pos != std::string::npos)
    {
        s.replace(pos, strlen(search), repl);
        pos = s.find(search);
    }
}
void inc(std::string& s)
{
    s.append("I");
    replace(s, "IIII", "IV");
    replace(s, "VIV", "IX");
    replace(s, "IXI", "X");
    replace(s, "IVI", "V");

    replace(s, "XXXX", "XL");
    replace(s, "XLX", "L");
    replace(s, "LXL", "XC");
    replace(s, "XCX", "C");

    replace(s, "CCCC", "CD");
    replace(s, "CDC", "D");
    replace(s, "DCD", "CM");
    replace(s, "CMC", "M");

}


int main()
{
    std::string rome;
    for (int i=1; i<5002;++i)
    {
        inc(rome);
        std::cout << i<<" - " << rome << "\n";
    }
}