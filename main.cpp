#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //const variable name typo
    std::cout << '1-100 ertekek duplazasa' //missing semicolon, optionally a new line and ' instead of "
    for (int i = 0;) //incomplete for syntax
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //no break statement to exit for loop
    {
        std::cout << "Ertek:" //unfinished code to output array elements
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //atlag is not inicialized
    for (int i = 0; i < N_ELEMENTS, i++) //comma instead of semicolon
    {
        atlag += b[i] //missing semicolon
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
