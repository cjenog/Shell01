#include <stdio.h>

int main(void)
{
 int radix, decimal, i = 0;
 char array[100];
 printf("변환하고 싶은 진법을 입력하세요 : ");
 scanf("%d", &radix);
 if(radix < 2 || radix > 16)
 {
  printf("변환할 수 없는 진법입니다.");
  return 0;
 }
 printf("변환할 수를 입력하세요 : ");
 scanf("%d", &decimal); 
 while(decimal >= radix)
 {
  array[i] = decimal % radix;
  decimal /= radix;
  i++;
 }
 array[i] = decimal;
 printf("%d진법으로 변환된 수 : ", radix);
 for(; i >= 0; i--)
 {
  if(array[i] < 10)
   printf("%c", array[i] + 48);
  else
   printf("%c", array[i] + 55);
 }
 return 0;
}
