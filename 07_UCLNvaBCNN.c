#include<stdio.h>
#include<math.h>
main()
{
   int m,n,m1,n1,r,ucln;
   printf("Nhap m, n: ");
   scanf("%d%d",&m,&n);
   m1=m; n1=n;
   while(r!=0)
   {
     r=m%n;
     m=n;
     n=r;

   }
    ucln=m;
    printf("UCLN=%d\n",ucln);
    printf("BCNN=%d",(m1*n1)/ucln);
}
