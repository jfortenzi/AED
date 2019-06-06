#include <iostream>
#include <cassert>

bool EsDivisible(int, int);
bool EsBisiesto(int);

int main()
{
    int a;

    std::cin >> a;
    assert(EsBisiesto(a));
    
    std::cin.get();
}

bool EsBisiesto(int a)
{
    return EsDivisible(a, 400) || (EsDivisible(a, 4) and !EsDivisible(a, 100));
}

bool EsDivisible(int a, int valor)
{
    return a % valor == 0;
}