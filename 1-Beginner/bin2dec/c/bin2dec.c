#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

  
int main()
{
    printf("==============================================================================\n");
    printf("                            Seja Bem vindo!\n");
    printf("                     CONVERSOR DE BINÁRIO PARA DECIMAL\n");
    printf("==============================================================================\n\n");

    printf("Este programa converte um número binário em seu valor decimal.\n");
    char numeroBinario[33];
    int i,j,x;
    
    
    printf("Digite um número binário com até 32 dígitos:\n-> ");
    scanf("%s", numeroBinario);
    int tamanho = strlen(numeroBinario);
    int decimal = 0;
    
    //validar
    int valido = 1;
    for (i = 0; i < tamanho; i++) {
        if (numeroBinario[i] != '0' && numeroBinario[i] != '1') {
            valido = 0;
            break;
        }
    }

    if (!valido) {
        printf("Erro: número inválido. Digite apenas 0 e 1.\n");
        return 1;
    }
    
   for ( i = 0; i < tamanho; i++){
        int digito = numeroBinario[tamanho - 1 - i] - '0';
        decimal += digito * pow(2,i);
   }
    printf("\n");
    printf("Número binario escolhido: %s\n",numeroBinario);
    printf("Número convertido para decimal: %d\n",decimal);
}
