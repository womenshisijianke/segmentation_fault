#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void  fun1()//访问不存在的地址;
{
  int *ptr=NULL;
  *ptr=0;
}

void fun2()//访问只读的地址
{
  char *ptr="test";
  strcpy(ptr,"TEST");
}

void fun3()//内存越界
{
  int a[4];
  a[5]=2;
}

void fun4()//访问保护地址
{
  int i=5;
  printf("%s",i);
}

void fun5()//内存未被释放
{
  char *p=(char*)malloc(sizeof(char));
    *p='h';
	
}

int main(void)
{
  main();//栈溢出;
  fun1();
  fun2();
  fun3();
  fun4();
  fun5();
}


