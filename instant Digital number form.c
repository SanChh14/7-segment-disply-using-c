#include<stdio.h>
#include<conio.h>

typedef struct
{
    char d[10][5];
}dig;

int len(int num)
{
    int n=0;
    while(num!=0)
    {
        num=num/10;
        n++;
    }
    return n;
}

void setb(int *b,int num,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        *(b+i)=num%10;
        num=num/10;
    }
}

void digital(int num)
{
    dig di[3];
    int n,*b,i,j,k;
    n=len(num);
    b=(int *)malloc(n*sizeof(int));
    setb(b,num,n);

    strcpy(di[0].d[0]," _ ");
    strcpy(di[1].d[0],"| |");
    strcpy(di[2].d[0],"|_|");

    strcpy(di[0].d[1]," ");
    strcpy(di[1].d[1],"|");
    strcpy(di[2].d[1],"|");

    strcpy(di[0].d[2]," _ ");
    strcpy(di[1].d[2]," _|");
    strcpy(di[2].d[2],"|_ ");

    strcpy(di[0].d[3],"_ ");
    strcpy(di[1].d[3],"_|");
    strcpy(di[2].d[3],"_|");

    strcpy(di[0].d[4],"   ");
    strcpy(di[1].d[4],"|_|");
    strcpy(di[2].d[4],"  |");

    strcpy(di[0].d[5]," _ ");
    strcpy(di[1].d[5],"|_ ");
    strcpy(di[2].d[5]," _|");

    strcpy(di[0].d[6]," _ ");
    strcpy(di[1].d[6],"|_ ");
    strcpy(di[2].d[6],"|_|");

    strcpy(di[0].d[7],"_ ");
    strcpy(di[1].d[7],"_|");
    strcpy(di[2].d[7]," |");

    strcpy(di[0].d[8]," _ ");
    strcpy(di[1].d[8],"|_|");
    strcpy(di[2].d[8],"|_|");

    strcpy(di[0].d[9]," _ ");
    strcpy(di[1].d[9],"|_|");
    strcpy(di[2].d[9]," _|");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<n;j++)
        {
            k=b[j];
            printf("%s ",di[i].d[k]);
        }
        printf("\n");
    }

}

int main()
{
    int n=0,a,c[20],i=1;
    char b;
    b=getch();
    a=b;
    while(a!=13)
    {
        n=a-48;
        if(i==1)
        {
            c[i]=n;
        }
        else
        {
            c[i]=c[i-1]*10+n;
        }
        digital(c[i]);
        i++;
        b=getch();
        a=b;
        if(a!=13)
        {system ("CLS");}
    }
}

