
#include<stdio.h>
int main(){
        char op;
    int num1,num2,rut;
        printf("Enter Operator: ");
    scanf("%c", &op);
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    if(op=='+'){
        rut = num1 + num2;
        printf("%d + %d = %d", num1, num2, rut);
    }
    else if (op=='-'){
        printf("%d - %d = %d", num1,num2,num1-num2);
    }
    else if (op == '/'){
        if (num2== 0)
        {
            printf("Divisor can't be zero enter number: ");
            scanf("%d", &num2);
        }
        
        printf("%d / %d = %d", num1 , num2, num1/num2);
    }
    else if (op== '*'){
        printf("%d * %d = %d", num1,num2, num1*num2);
    }
    else if (op=='%'){
        printf("%d %% %d = %d", num1,num2,num1%num2);
    }
    return 0;
}