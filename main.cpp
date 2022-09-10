#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibás konstans név, hiányzik _ karakter
    std::cout << '1-100 ertekek duplazasa' // ''-ok karaktert kezelnek, stringet "" közé kell fűzni, hiányzó sorvégi ;
    for (int i = 0;) //hiányzó feltétel, és növekmény a ciklushoz
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hiányzó feltétel a for ciklushoz
    {
        std::cout << "Ertek:" // hiányzó sorvégi ; (értelmetlen kiírás lenne belőle, hiányzó érték adat?)
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ; szükséges a második paraméter után a for ciklusban
    {
        atlag += b[i] //hiányzó ; a sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
