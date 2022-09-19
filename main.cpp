#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //int* b, N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //lemaradt a vége <<std::endl;
    for (int i = 0;) // lemaradt a for ciklus két eleme: i<=N_ELEMENTS; i++ 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //for ciklus középső eleménél hiányos
    {
        std::cout << "Ertek:" //a vége hiányos: <<b[i]<<std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //kezdőérték adás hiányzik és az átlag miatt legyen double
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //pontosvessző
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl; 
    return 0;
}
