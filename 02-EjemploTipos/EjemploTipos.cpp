/*  Autor: Juan Francisco Ortenzi
*   Fecha: 2-5-2019
*   Trabajo práctico: EjemploTipos
*/

#include <iostream>
#include <string>
#include <assert.h>

int main()
{
    char test[] = {'T', 'e', 's', 't'};
    std::string str = "This is a  ";      
    str.append(test);   
    assert(str.length() != 0);
    std::cout << str;
    std::cin.get();

    unsigned int a = 2019;
    double b = -123456;
    bool esMayorQue = a < b;
    assert(esMayorQue);
    std::cin.get();
}