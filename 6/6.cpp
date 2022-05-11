#include <iostream>
#include <math.h>

float per(float site)
{
    return  site * 4;
}

float horizon(float r, float h)
{
    return  sqrt((r + h) * 2 - r * 2);
}
float reb(float site)
{
    return pow(site, 3);
}
void chislo(float R)
{
    const double PI = 3.141592653589793;
    std::cout << 2 * PI * R << "\n";
    std::cout << PI * pow(R, 2) << "\n";
}

float fuu(float d, float y)
{
    return log(d) + (3.5 * pow(d, 2) + 1) / cos(2 * y + 2.3);
}
float xt(float x, float t)
{
    float a = log(x);
    float b = sqrt(pow((t + x), 2));
    return pow(abs(a - b), 1 / 3);
}

int main()
{
    std::cout << per(10) << "\n";

    std::cout << horizon(12, 5) << "\n";

    std::cout << reb(4) << "\n";

    chislo(10);

    std::cout << fuu(5, 8);

    std::cout << xt(3, 5);
}























