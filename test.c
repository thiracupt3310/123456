#include <stdio.h>
int main(){
    int money,fy,ty,f;
    printf("Enter an amount: ");
    scanf("%d", &money);
    fy = money/50;
    money -= fy*50;
    ty = money/20;
    money -= ty*20;
    f = money/5;
    money -= f*5;
    printf("1: %d\n5: %d\n20: %d\n50: %d", money,f,ty,fy);
}#include <stdio.h>
int main(){
    int money,fy,ty,f;
    printf("Enter an amount: ");
    scanf("%d", &money);
    fy = money/50;
    money -= fy*50;
    ty = money/20;
    money -= ty*20;
    f = money/5;
    money -= f*5;
    printf("1: %d\n5: %d\n20: %d\n50: %d", money,f,ty,fy);
}