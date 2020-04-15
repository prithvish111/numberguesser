#include<stdio.h>
#include<stdlib.h>
int magic();
void main()
{
    int ch,y,t,k,year;
    char si[5],name[20];
    printf("\t\t\tAGE CALCULATOR\n\n");
    printf("Hey, which year is this? : ");
    scanf("%d",&year);
    printf("What's your name? : ");
    scanf("%s",name);
    printf(" \nSelect the range of your age.\n\n");
    printf(" 1)---  01  to  08\n");
    printf(" 2)---  09  to  18\n");
    printf(" 3)---  19  to  28\n");
    printf(" 4)---  29  to  38\n");
    printf(" 5)---  39  to  48\n");
    printf(" 6)---  49  to  58\n");
    printf(" 7)---  54  to  68\n");
    printf(" 8)---  69  to  78\n");
    printf(" 9)---  79  to  88\n");
    printf("10)---  89  to  98\n");
    printf("11)---  99  to 108\n");
    printf("12)--- 109  to 118\n\n");
    scanf("%d",&ch);
    if(ch==1)
    y=201;
    else if(ch==2)
    y=200;
    else if(ch==3)
    y=199;
    else if(ch==4)
    y=198;
    else if(ch==5)
    y=197;
    else if(ch==6)
    y=196;
    else if(ch==7)
    y=195;
    else if(ch==8)
    y=194;
    else if(ch==9)
    y=193;
    else if(ch==10)
    y=192;
    else if(ch==11)
    y=191;
    else if(ch==10)
    y=190;
    else
    printf("\n\nEnter the valid option\n\n");
    printf("\n\nIN THE FOLLOWNG ROWS, PRESS 1 IF YOUR LAST NUMBER OF YEAR OF BIRTH IS PRESENT. ELSE PRESS 0....\n\n");
    printf("Eg :- if Year of birth is 1999, here last digit is 9, if 9 is present press 1, else press 0\n");
    printf("Press any key to continue\n");
    getch();
    t=magic();
    k=(y*10)+t;
    printf("\n\n\n*****%s, you born in %d.*****",name,k);
    int age=year-k;
    printf("\n%s, your age is %d.\n\n",name,age);
}
int magic()
{
    int sum=0,i,n,n1,n2,n3,n4,n5,n6,n7;
    char k;
    int a[18]={3,9,3,8,9,7,6,9,8,9,3,3,6,7};
    int b[18]={9,0,7,6,1,2,0,6,7,9,2,1,0,6};
    int c[18]={1,4,8,9,8,4,1,9,4,8,9,1,8,1};
    int d[18]={2,9,5,7,8,7,5,2,9,8,5,7,9,2};
    int e[18]={5,9,4,6,4,5,9,6,4,9,5,6,9,4};
    int f[18]={0,1,7,3,2,1,3,2,0,7,3,7,1,2};
    int g[18]={5,7,4,9,8,6,7,4,9,5,8,4,7,6};
    printf("1)PRESS '1' if your number is present in this column else PRESS '0'...\n");
    for(i=0;i<14;i++)
    {
         printf("\t---> %d\n",a[i]);
    }
       scanf("%d",&n1);
       if(n1==1)
       {
           sum=sum+3;
           printf("2)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
    {
         printf("\t---> %d\n",b[i]);
    }
           scanf("%d",&n2);
       }
       else if(n1==0)
       {
           printf("2)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
    {
         printf("\t---> %d\n",b[i]);
    }
           scanf("%d",&n2);
       }
        if(n2==1)
        {
            sum=sum+0;
            printf("3)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
            {
               printf("\t---> %d\n",c[i]);
            }
           scanf("%d",&n3);
        }
        else if(n2==0)
        {
             printf("3)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
            {
               printf("\t---> %d\n",c[i]);
            }
           scanf("%d",&n3);
        }
        if(n3==1)
        {
            sum=sum+1;
            printf("4)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
           {
               printf("\t---> %d\n",d[i]);
           }
           scanf("%d",&n4);
        }
        else if(n3==0)
        {
            printf("4)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
           {
               printf("\t---> %d\n",d[i]);
           }
           scanf("%d",&n4);
        }
           if(n4==1)
           {
               sum=sum+2;
                printf("5)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
           {
               printf("\t---> %d\n",e[i]);
           }
           scanf("%d",&n5);
           }
           else if(n4==0)
           {
               printf("5)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
           {
               printf("\t---> %d\n",e[i]);
           }
           scanf("%d",&n5);
        }
           if(n5==1)
           {
               sum=sum+1;
               printf("6)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
            {
               printf("\t---> %d\n",f[i]);
            }
           scanf("%d",&n6);
           }
           else if(n5==0)
           {
               printf("6)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
            {
               printf("\t---> %d\n",f[i]);
            }
           scanf("%d",&n6);
           }
           if(n6==1)
           {
               sum=sum+0;
               printf("7)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
            {
               printf("\t---> %d\n",g[i]);
            }
           scanf("%d",&n7);
           }
           else if(n6==0)
           {
                printf("7)PRESS '1' if your number is present in this column else PRESS '0'...\n");
           for(i=0;i<14;i++)
            {
               printf("\t---> %d\n",g[i]);
            }
           scanf("%d",&n7);
           }
           if(n7==1)
           {
               sum=sum+2;
           }


           else if(n7==0)
           {
               sum=sum;
           }
          return sum;

}
//end of project......
