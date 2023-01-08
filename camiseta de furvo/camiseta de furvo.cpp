
#include <iostream>
#include <math.h>
using namespace std;

bool CuadradoPerfecto(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

bool EsFibonacci(int n)
{
    return CuadradoPerfecto(5 * n * n + 4) || CuadradoPerfecto(5 * n * n - 4);
}

int main()
{
    int fibo;

    cout << "dime el numero: ";

    cin >> fibo;

    if (EsFibonacci(fibo)) {
        cout << fibo << " es un numero Fibonacci  \n";
    }
    else {
        cout << fibo << " No es un numero Fibonacci \n";
    }
         
       
    return 0;
}