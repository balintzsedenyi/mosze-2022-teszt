#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibás konstans név, hiányzik _ karakter
    std::cout << "1-100 ertekek duplazasa"<<std::endl; // ''-ok karaktert kezelnek, stringet "" közé kell fűzni, hiányzó sorvégi ;
    for (int i = 0; i<=N_ELEMENTS; i++) //hiányzó feltétel, és növekmény a ciklushoz
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<=N_ELEMENTS; i++) // hiányzó feltétel a for ciklushoz
    {
        std::cout << "Ertek:"<<b[i]<<std::endl; // hiányzó sorvégi ; (értelmetlen kiírás lenne belőle, hiányzó érték adat?)
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) // , helyett ; szükséges a második paraméter után a for ciklusban
    {
        atlag += b[i]; //hiányzó ; a sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
