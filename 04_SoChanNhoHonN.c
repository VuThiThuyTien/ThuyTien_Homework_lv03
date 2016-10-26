#include<stdio.h>
#include<math.h>
main()
{
    int i,n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("So chan nho hon n la: ");
    for(i=1;i<n;i++)
    {
        if(i%2==0) printf("%d  ",i);
    }
}
