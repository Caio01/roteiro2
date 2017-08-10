#include <stdio.h>


int EhDivisivel(int numero, int divisor)
{
    if(numero%divisor == 0){
        return 2; //VERDADEIRO
    }else{
        return 1; //FALSO
    }
}

int EhPrimo(int numero)
{
    int primo,divisivel,divisor;
    divisivel = EhDivisivel(numero, 2);
    divisor = 2;   
    primo = 1;

    if(numero <= 1){
        primo = 0;
    }
	
    while(primo == 1 && divisor <= numero/2){
        if (divisivel == 2){
            primo = 0;
            divisivel += 1;
        }else{
	   return primo;
	}
    }
    
    

    return primo;

}
int main()
{
    int PRIMO, NUMERO, DIVISOR, DIVISIVEL;

    printf("DIGITE O NUMERO E SEU DIVISOR POSITIVO > ");
    scanf("%d %d", &NUMERO, &DIVISOR);

    DIVISIVEL = EhDivisivel(NUMERO,DIVISOR);
    if(DIVISIVEL == 2){
        printf("EH DIVISIVEL");
    }else{
        if(DIVISIVEL == 1){
            printf("NAO EH DIVISIVEL");
        }

    }

    PRIMO = EhPrimo(NUMERO);

    if (PRIMO == 1){
	printf("\n\t%d EH PRIMO\n", NUMERO);
    }else{
	printf("\n\t%d NAO EH PRIMO\n", NUMERO);
    }

    return 0;
}

