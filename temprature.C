#include<stdio.h>
int main()
{
    int i;
    while(i=1)
    {
    printf("Select Operation\n");
    printf(" 1.Fahrenheit to Celsius\n 2. Celsius to Fahrenheit\n");
    int n;
    float f;
    float c;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
          printf("Enter Temprature in Fahrenheit: \n");
          scanf("%f",&f);
          c=(f-32)*5/9;
          printf("%f Degree F = %f Degree C\n",f,c);
          break;
        case 2:
          printf("Enter Temprature in Celsius: \n");
          scanf("%f",&c);
          f=c*9/5+32;
          printf("%f Degree C = %f Degree F\n",c,f);
          break;
          default:
          printf("Error\n");
          break;
    }
    int m;
    printf("1.exit\n2.continue\n ");
    scanf("%d",&m);
    if(m==1)
    break;
    }
}
