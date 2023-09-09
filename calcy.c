#include<stdio.h>
int main()
{
    int i;
    while(i=1)
    {
    int n;
    int a,b,cal;
    printf("1.Addition\n2.Subtract\n3.Multiplication\n4.Division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("You choose Addition\n");
        printf("Enter two inputs\n");
        scanf("%d %d",&a,&b);
        cal=a+b;
        printf("Sum=%d\n",cal);
        break;
        case 2:
        printf("You choose Subtract\n");
        printf("Enter two inputs\n");
        scanf("%d %d",&a,&b);
        cal=a-b;
        printf("Sub=%d\n",cal);
        break;
        case 3:
        printf("You choose Multiplication\n");
        printf("Enter two inputs\n");
        scanf("%d %d",&a,&b);
        cal=a*b;
        printf("Mul=%d\n",cal);
        break;
        case 4:
        printf("You choose Division\n");
        printf("Enter two inputs\n");
        scanf("%d %d",&a,&b);
        cal=a/b;
        printf("Res=%d\n",cal);
        break;
        default:
        printf("Error\n");
        break;
    }
    printf("1.Continue\n2.Exit\n");
    int choose;
    scanf("%d",&choose);
    if(choose==2)
    {
        break;
    }
    }
}