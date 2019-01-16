
//c 

#include<stdio.h>
int main()
{
  int x = 10;
  int result = +x; //y =10;

  printf("%d\n", result);

  return 0;

}



#include<stdio.h>
int main()
{
  int x = 10;
  int y = x++; //y =10;

  printf("x = %d\n", x);
  printf("y = %d\n", y);

  return 0;

}




#include<stdio.h>
int main()
{
  int x = 10;

  printf("x = %d\n", x++);//x = 10;
  printf("x = %d\n", x);// x= 11;
  printf("x = %d\n", ++x);//x =12;
  printf("x = %d\n", x);//x = 12;
  printf("x = %d\n", x--);// x = 12
  printf("x = %d\n", --x); // x = 10

  return 0;

}