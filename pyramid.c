#include<stdio.h>

int l, m = 1;

int gate(int n){

  int i = 1, c = 0;

  while(i<=n){

    if(c==(n/2)+1 && m == c && n%5==0)
    {
      printf("$");
      c++;
    }
    else {
        printf("|");
        c++;
    }
    i++;
  }

  return 0;
}


int py(int n, int i, int a){

  int j = 1, k = 1;

       while(j<=(n-i)+l){
              printf(" ");
              j++;
           }
           printf("/");
        while(k<=(2*i)-1)
           {
             if(k==i-((a-1)/2) && j<=a)
             {
               gate(a);
               k +=a-1;
               m++;
              }
             else{
               printf("*");
            }
            k++;
           }
           printf("\\\n");
    return 0;
    }


int main()
{

      int v, n, i = 1, j = 1, k = 3, a;

      scanf("%d", &n);

      l = 2*(n-1);
      v = n*(n+5)/2;
      a = n;

      while(i<=n)
      {
        while(j<=k)
        {
          py(v, j, a);
          j++;
        }
          j = j + 2;
          k = k + 5 + i;
          i++;
      }

      return 0;
}
