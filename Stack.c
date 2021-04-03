#include<stdio.h>
void Stack_Push(int* top, int n,int stack[]){
    int item;
    printf("Enter Item: ");
    scanf("%d", &item);
    if(*top == (n-1))
        printf("Overflow condition\n");
    else{
        *top = *top + 1;
        stack[*top] = item;
        
    }
}
void Stack_Pop(int* top,  int stack[]){
    if(*top == -1)
        printf("Underflow condition");
    else{
        printf("%d item pop : ", stack[*top]);
        *top = *top - 1;
        printf("\n");
    }
}
void Stack_Print(int top,  int stack[]){
    printf("Stack Element : ");
    for (int  i = top ; i >= 0; i--)
        printf("%d, ", stack[i]);

    printf("\n");
}
int main(){
    int top = -1, n;
    printf("Please, Enter lenght of array : ");
    scanf("%d", &n);
    int stack[n];
    while (true)
    {
        int cmd;
        printf("1. Stack push method \n2. Stack pop method \n3. Print Stack\n4. Exist\n");
        scanf("%d", &cmd);
        switch (cmd)
        {
            case 1 :
                Stack_Push(&top, n, stack);
                break;
            case 2 :
                Stack_Pop(&top, stack);
                break;
            case 3 :
                Stack_Print(top, stack);
                break;
            case 4:
                break;
            default :
                printf("Please Enter valid Key:\n");
        }
        if(cmd == 4)
            break;
    }
    return 0;
}