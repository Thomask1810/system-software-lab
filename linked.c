#include<stdio.h>
#include<stdlib.h>

int main()
{
int f[50],i,c,k,j,p,n,len,a,st;
for(i=0;i<50;i++)
{
f[i]=0;
}

printf("Enter  no. of blocks are already allocated\n");
scanf("%d",&p);
if(p!=0)
{
printf("Enter the block numbers that are already allocated\n");
for(i=0;i<p;i++)
{
scanf("%d",&a);
f[a]=1;
}
}
X:
printf("Enter the starting index block and length\n");
scanf("%d%d",&st,&len);
k=len;
for(j=st;j<(st+len);j++)
{
if(f[j]==0)
{
f[j]=1;
printf("\n %d->%d\n",j,f[j]);
}
else
{
printf("\n %d-> file is alredy allocated\n",j);
k++;
}
}
printf("Do you want to enter one more file? yes:1 & no:0 \n");
scanf("%d",&c);
if(c==1)
goto X;
else 
exit(0);
return(0);
}


