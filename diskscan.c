#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,n,initial,size,move,temp,index;
int arr[100],totalmovement=0;
printf("Enter the number of requests\n");
scanf("%d",&n);

printf("enter the request sequence\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

printf("Enter initial head position\n");
scanf("%d",&initial);
  printf("Enter total disk size\n");
  scanf("%d",&size);
  printf("Enter the head movement direction 1-right and 0-left\n");
  scanf("%d",&move);
  
  
  for(i=0;i<n;i++)
  for(j=0;j<(n-i-1);j++)
  if(arr[j]>arr[j+1])
  {
  temp=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=temp;
  }
  
  for(i=0;i<n;i++)
  {
  if(initial<arr[i])
  {
   index=i;
   break;
   }
   }
   
   if(move==1)
   {
   printf("Printing sequence\n");
   for(i=index;i<n;i++)
   {
   totalmovement=totalmovement+abs(arr[i]-initial);
   initial=arr[i];
   printf("%d ->",initial);
   }
   totalmovement=totalmovement+abs(size-arr[i-1]-1);
   initial=size-1;
   printf("%d ->",initial);
   for(i=index-1;i>=0;i--)
   {
   totalmovement=totalmovement+abs(arr[i]-initial);
   initial=arr[i];
   printf("%d ->",initial);
   }
   }
   else
   {
   printf("Printing sequence\n");
   for(i=index-1;i>=0;i--)
   {
   totalmovement=totalmovement+abs(arr[i]-initial);
   initial=arr[i];
   printf("%d ->",initial);
   }
   totalmovement=totalmovement+abs(arr[i+1]-0);
   initial=0;
   printf("%d ->",initial);
   for(i=index;i<n;i++)
   {
   totalmovement=totalmovement+abs(arr[i]-initial);
   initial=arr[i];
    printf("%d ->",initial);
   }
   }
   printf("Total head movement is %d",totalmovement);
   return 0;
   }
   
  
