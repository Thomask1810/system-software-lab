#include<stdio.h>



int ms,ps,nop,np,rempages,i,j,x,y,offset;
int s[10],fno[10][20];
int a=0;
int pgt[20];

void display()
{
    printf("\nPage no\t:\tStatus\n");
    for(i=0;i<nop;i++)
        printf("\n%d \t:\t%d",i,pgt[i]);
}

void delete()
{
    int n1;
    printf("Enter the process number : ");
    scanf("%d",&n1);


    if(n1>=a)
    {
        printf("Process invalid");
        return;
    }
    for(i=0;i<s[n1];i++)
    {
        pgt[fno[n1][i]]=0;
        rempages++;
    }
    display(); 
}

void enter()
{
     printf("\nEnter no. of pages required for process -> %d : ",a);
        scanf("%d",&s[a]);
        

        if(s[a] >rempages)
        {   
            printf("\nMemory is Full");
            display();
            a++;
            return;

        }

        rempages = rempages - s[a];
        
        printf("\nEnter pagetable for process -> %d : ",a);
        
        for(j=0;j<s[a];j++)
        {
            scanf("%d",&fno[a][j]);
            pgt[fno[a][j]]=1;
        }
        a++;
}

void findadd()
{
    int choice;
    while(1)
    {
        printf("\nEnter process number, page number and offset : ");

        scanf("%d %d %d",&i,&j,&offset);
        if(x>np || y>=s[i] || offset>=ps)
            printf("\n\nInvalid Entry \n");

        else
            printf("\n\nThe Physical Address is %d",fno[i][j-1]*ps+offset);

        printf("\nDo you want to continue (1.Yes / 2.No /) : ");
        scanf("%d",&choice);
        if(choice!=1)
            break;
    }
}

void main()
{
    
    for(i=0;i<20;i++)
    {
        pgt[i]=0;
    }


    printf("\nEnter the memory size : ");
    scanf("%d",&ms);

    printf("\nEnter the page size : ");
    scanf("%d",&ps);

    nop = ms/ps;
    printf("\nThe no. of pages available in memory = %d ",nop);

    printf("\nEnter number of processes : ");
    scanf("%d",&np);
    rempages = nop;
    for(i=0;i<np;i++)
    {
        printf("\nEnter no. of pages required for process -> %d : ",i);
        scanf("%d",&s[i]);

        if(s[i] >rempages)
        {   
            printf("\nMemory is Full");
            display();
            break;

        }
        a++;

        rempages = rempages - s[i];

        printf("\nEnter pagetable for process -> %d : ",i);
        
        for(j=0;j<s[i];j++)
        {
            scanf("%d",&fno[i][j]);
            pgt[fno[i][j]]=1;
        }
        
    }
    while(1)
    {
        int y;

        printf("\n1. Terminate process");
        printf("\n2. Enter process");
        printf("\n3. Display Page table");
        printf("\n4. Find Address");
        printf("\n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&y);

        switch(y)
        {
            case 1: delete();break;
            case 2: enter();break;
            case 3: display();break;
            case 4:findadd(); break;
            case 5: return;
        }
        
    }
    

    
}
