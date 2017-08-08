#include <stdio.h>


int sequencia(int n){

  int i,j;

  for(i=1;i<=n;i++)
  {
    printf("\n");
    for(j=0;j<i;j++)
    {
        printf("%d  ",i);
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
