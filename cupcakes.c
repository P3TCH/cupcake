#include <stdio.h>
//6309650395
//Sorawit Namseetan
  int main ()
  {
    int cupcakes,people,re,ans;

    printf("Enter number of cupcakes : ");
    scanf("%d",&cupcakes);

    printf("Enter number of people : ");
    scanf("%d",&people);

    ans = cupcakes/people;
    re = cupcakes%people;

    printf("Everyone will get %d pieces\n",ans);
    printf("There are %d remaining pieces\n",re);
  }
