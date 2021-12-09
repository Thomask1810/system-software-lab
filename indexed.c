#include<stdio.h>
#include<stdlib.h>
int f[50],i,c,k,j,p,indx[50],n,count=0;
int main()
{
for(i=0;i<50;i++)
{
f[i]=0;
}
X:
printf("Enter the index block\n");
scanf("%d",&p);
if(f[p]==0)
{
f[p]=1;
printf("Enter the number of files on index\n");
scanf("%d",&n);
}
else
{
printf("Block already allocated\n");
goto X;
}
Y:
printf("\n Enter the file blocks to be indexed:\n");
for(i=0;i<n;i++)
{
scanf("%d",&indx[i]);
}

for(i=0;i<n;i++)
{
if(f[indx[i]]==1)
{
printf("Block already allocated\n");
goto Y;
}
}
for(j=0;j<n;j++)
{
f[indx[j]]=1;
}
printf(" allocated\n");
printf("file indexed\n");
for(k=0;k<n;k++)
{
printf(" %d->%d : %d\n",p,indx[k],f[indx[k]]);
}
printf("\n Enter 1 to enter more files and 0 to exit\n");
scanf("%d",&c);
if(c==1)
goto X;
else 
exit(0);
return(0);
}



