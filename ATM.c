#include<stdio.h>

int main()
{
    int i;
    while(i=1)
    {
    int s;
    float dep;
    float wit;
    float money=0;
    printf("Select operation  to performe\n");
    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n");
    scanf("%d",&s);
    switch (s)
    {
    case 1:
    printf("Enter Amount for Deposite\n");
    scanf("%f",&dep);
    money= money +dep;
    printf("Balance in your account : %f\n",money);
    break;
    case 2:
    printf("Enter Withdraw money\n");
    scanf("%f",&wit);
    money = dep-wit;
    printf("Balance in your account : %f\n",money);
    break;
    case 3:
    printf("Balance in your account : %f\n",money);
    break;
    default:
    printf("Select Correct Operation\n");
        break;
    }
    int e;
    printf("1.Exite\n2.Continue\n");
    scanf("%d",&e);
    if(e==1)
    {
       break;
    }
}
}
