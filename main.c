#include <stdio.h>
#include <conio.h>
void Hoanvi(int &a, int &b)
{
 int Tam;
 Tam = *a;
 *a= *b;
 *b = Tam;
}
int main()
{
    int x,y;
printf("nhap so x va y\n");
scanf("%d",&x);
printf("sddsa");
scanf("%d",&y);
//int *k = &x;
//int *p = &y;
Hoanvi(x,y);
printf("gia tri x %d\n %d \n",x,y);
}
