#include <stdio.h>


int sequencia(int n){

  int i,j;

  for(i=0;i<=n;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
        printf("%d  ",j);
    }

}


}


int main()
{
    int x;
    int sequencial;
    printf("digite um numero: \n");
    scanf("%d", &x);
    sequencial = sequencia(x);


    return 0;
}
