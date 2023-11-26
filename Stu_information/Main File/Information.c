#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "/Users/yangfanbaybyone/Desktop/Code/C/src/Porject/Stu_information/Head File/functions.h"
#define Max_numbers 100
#define Max_Size 100
//Function:

/*
* Author:YangFan
* File Path: ~/Desktop/Code/C/src/Porject/Stu_information/Main File/Information.c
* Date: Create in 2023-11-19 22:05:48
*/
int main(){
    char op_alph;
    stu_inform *inform;
    login();
    printf("请输入你要进行的操作字符: ");
    scanf("%c",&op_alph);
    operation(op_alph,inform);
    return 0;
}