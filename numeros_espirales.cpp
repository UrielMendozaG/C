#include <iostream>
using namespace std;

int numeros_espirales(int num);

int main()
{
    int n, respuesta;

    cin >> n;
    respuesta = numeros_espirales(n);
    cout << respuesta;

    return 0;
}

int numeros_espirales(int num)
{

    if (num == 1)
    {
        return 1;
    }
    else
    {
        bool medio = false;
        bool fin = false;
        int i = 0;
        int suma = 0;

        while (fin == false)
        {
            if (i < num && medio == false)
            {
                i = i + 1;
            }
            else if (i >= num || medio == true)
            {
                i = i - 1;
            }

            suma = suma + i;

            if (i == num)
            {
                medio = true;
            }
            else if (i == 1 && medio == true)
            {
                fin = true;
            }
        }

        return suma + numeros_espirales(num - 1);
    }
}