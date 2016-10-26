#include<stdio.h>
#include<math.h>
main()
{
    int n,i,giaiThua;
    printf("Nhap n: ");
    scanf("%d",&n);
    giaiThua=1;
    for(i=1;i<=n;i++)
        giaiThua=giaiThua*i;
    printf("Giai thua = %d",giaiThua);
}
