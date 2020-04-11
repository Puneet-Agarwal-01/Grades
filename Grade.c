#include<stdio.h>
int main()
{
  float a;
  printf("Enter marks:");
  scanf("%f",&a);
  if(a>=85 && a<=100)
  {
    printf("Grade A");
  }
  else if(a>=70 && a<85)
  {
      printf("Grade B");
  }
  else if(a>=55 && a<70)
  {
      printf("Grade C");
  }
  else if(a>=40 && a<55)
  {
      printf("Grade D");
  }
  else
  {
      printf("Grade F");
  }
  return 0;
}
