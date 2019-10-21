#include<stdio.h>
typedef struct
    {
        float real;
        float img;
    }complex;
complex *ptr;
void scan(complex *a)
{
    printf("Complex : Real= ");
    scanf("%f",&(*a).real);
    printf("        : IMG = ");
    scanf("%f",&(*a).img);
}
void print(complex *a)
{
    printf("Complex : %f + i %f",(*a).real,(*a).img);
}
void add(complex *a,complex *b)
{
    (*ptr).real=(*a).real+(*b).real;
    (*ptr).img=(*a).img+(*b).img;
}
void sub(complex *a,complex *b)
{
    (*ptr).real=(*a).real-(*b).real;
    (*ptr).img=(*a).img-(*b).img;
}
void mul(complex *a,complex *b)
{
    (*ptr).real=(*a).real*(*b).real-(*a).img*(*b).img;
    (*ptr).img=(*a).real*(*b).img+(*a).img*(*b).real;
}
void div(complex *a,complex *b)
{    float sq=(*b).real*(*b).real+(*b).img*(*b).img;
    (*ptr).real=((*a).real*(*b).real+(*a).img*(*b).img)/sq;
    (*ptr).img=((*a).img*(*b).real-(*a).real*(*b).img)/sq;
}

void main()
{
    complex x,y,output;
    printf("Enter two COMPLEX NUMBERS : \n");
    ptr=&x;
    scan(ptr);
    ptr=&y;
    scan(ptr);
    ptr=&output;
    int choice;
        printf("Input the operation u want to perform : \n");
        printf(" [1] Addition\n");
        printf(" [2] Subtraction\n");
        printf(" [3] Multiplication\n");
        printf(" [4] Division\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : add(&x,&y);
                     print(ptr);
                     break;
            case 2 : sub(&x,&y);
                     print(ptr);
                     break;
            case 3 : mul(&x,&y);
                     print(ptr);
                     break;
            case 4 : div(&x,&y);
                     print(ptr);
                     break;
        }

}
