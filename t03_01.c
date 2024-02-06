// 12S23036 - Jopel Simarmata

#include <stdio.h>

int main(int _argc, char **_argv)
{
 int x,i,j,k;
 scanf("%d", &x);
 int angka[x];
  for (int i = 0; i < x; i++)
  {
    scanf("%d", &angka[i]);
  }
  for (int i = 0; i < x; i++){
    for (int j = i+1; j < x; j++){
      if (angka[i] > angka[j]){
        k = angka[i];
        angka[i] = angka[j];
        angka[j] = k;
      }
    }
  }
  printf("%d\n", angka[0]);
  printf("%d", angka[x-1]);
  // your code here

  return 0;
}
