#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,k,n,m,sum=0;
int a[100],x,y,h,temp;
printf("Enter the size of disk\n");
scanf("%d",&m);
printf("Enter number of requests\n");
scanf("%d",&n);
printf("Enter the requests\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>m)
{
printf("Error,unknown position\n");
}
}
printf("Enter the head position\n");
scanf("%d",&h);
temp=h;
printf("%d",temp);
for(i=0;i<n;i++)
{
printf("->%d",a[i]);
sum=sum+abs(a[i]-temp);
temp=a[i];
}
printf("\nTotal seek time =%d\n",sum);

}

