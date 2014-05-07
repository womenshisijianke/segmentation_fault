#include <stdlib.h>
int ml(void)
{
char *p1;
char *p2;
char c;
p1 = (char *) malloc(512);
p2 = (char *) malloc(512);
p1=p2;
free(p1); //泄漏
//free(p2); 
c = *p1;
c = *p2;
}
int a1(void)
{
int i, *iw, *ir;
iw = (int *)malloc(10*sizeof(int));
ir = (int *)malloc(10*sizeof(int));
for (i=0; i<11; i++)
iw[i] = i;
//非法写
for (i=0; i<11; i++)
ir[i] = iw[i]; //非法读写
free(iw);
free(ir);
}
int main(void)
{int i[5];
if (i[0] == 0) //使用了未初始化的内存
i[1]=1;
ml();
a1();
return 0;
}
