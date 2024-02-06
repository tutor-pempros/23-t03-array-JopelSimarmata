// 12S23036 - Jopel Simarmata

#include <stdio.h>
#include <stdlib.h> // Add this line to include the necessary library

int main(int _argc, char **_argv)
{
 int x,i,j;
 float a = 0;
 float k = 0;
 scanf("%d", &x);
 int angka[x];
 float rata_rata;
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
  for (int i = 0; i < x; i++){
    a += 1;
    k += angka[i];
  }
  rata_rata = k/a;
  printf("%d\n", angka[0]);
  printf("%d\n", angka[x-1]);
  printf("%.2f", rata_rata);
  // your code here

  return 0;
}
