#include <iostream>


int N_ELEMENTS = 100;


int main()
{
    int* b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 1; i<=N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 1; i<101; i++)
    {
        std::cout << "Ertek:"<< b[i] <<std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0;
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        atlag = b[i] + atlag;
    }
    std::cout << "Atlag: " << atlag/N_ELEMENTS << std::endl;
    std::cout << "Udvozletem";
    return 0;
}
