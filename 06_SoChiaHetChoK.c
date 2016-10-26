#include<stdio.h>
#include<math.h>
main()
{
    int n,i,k;
    printf("Nhap n va k: ");
    scanf("%d%d",&n,&k);
    printf("So nho hon n va chia het cho k la: ");
    for(i=1;i<n;i++)
    {
        if(i%k==0) printf("%d  ",i);
    }
}
