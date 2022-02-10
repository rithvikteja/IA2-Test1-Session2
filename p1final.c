#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter b,h values\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
*area=(base*height)/2.0;
}
void output(float base,float height,float area)
{
  printf("in the area of triangle=%f",area);
}
int main()
{
  float b,h,area;
  input(&b,&h);
  find_area(b,h,&area);
  output(b,h,area);
  return 0;
}