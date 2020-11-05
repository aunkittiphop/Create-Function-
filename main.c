#include <stdio.h>
int MinIn4(int w,int x,int y,int z){
  int i , min = w,ar[4] = {w,x,y,z};
  for(i=0;i<4;i++) if(min>ar[i]) min = ar[i];
  return min;
}
int main()
{
  int a,b,c,d;
  printf("Enter 1st number : ");
  scanf("%d",&a);
  printf("Enter 2nd number : ");
  scanf("%d",&b);
  printf("Enter 3rd number : ");
  scanf("%d",&c);
  printf("Enter 4th number : ");
  scanf("%d",&d);
  printf("Minimum is %d\n",MinIn4(a,b,c,d));
  return 0;
}