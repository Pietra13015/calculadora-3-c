#include <assert.h>
#include <stdio.h>
#include "function_dividir.c"
#include "function_multiplicar.c"

int main()
{
    assert(multiplicar(2,0) == 0);
    assert(multiplicar(3,6) == 18);
    assert(multiplicar(32,64) == 2048);
    printf("Teste Executado Com Sucesso");

    assert(dividir(14,2) == 7);
    assert(dividir(99,3) == 33);
    assert(dividir(144,12) == 12);
    printf("Teste executado com sucesso");

    return 0;
}