#include<stdio.h>
int equivalent_value_of(char c)
{
    switch(c)
    {
        case 'A' :
        case 'J' :
        case 'S' : return 1;
        case 'B' :
        case 'K' :
        case 'T' : return 2;
        case 'C' :
        case 'L' :
        case 'U' : return 3;
        case 'D' :
        case 'M' :
        case 'V' : return 4;
        case 'E' :
        case 'N' :
        case 'W' : return 5;
        case 'F' :
        case 'O' :
        case 'X' : return 6;
        case 'G' :
        case 'P' :
        case 'Y' : return 7;
        case 'H' :
        case 'Q' :
        case 'Z' : return 8;
        case 'I' :
        case 'R' : return 9;
    }
}
int main()
{
    char ch='A';
    int sum=0;
    printf("Enter your Name : ");
    while(ch)
    {
        scanf("%c",&ch);
        if(!((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A')))
            break;
        if(ch<='z'&&ch>='a')
            ch=ch-32;
        sum=sum+equivalent_value_of(ch);

    }

    int m=0,n;
    int tempsum,flag;
    while (!((sum<=9&&sum>=1)||sum==11||sum==22))
    {   tempsum=sum;
        flag=0;
        while (tempsum>0)
        {flag=flag+(tempsum%10);
         tempsum=tempsum/10;
        }
        sum=flag;
    }
    printf("\n\nYour Personality number is: %d",sum);
}
