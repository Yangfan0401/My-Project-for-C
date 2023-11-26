#include "/Users/yangfanbaybyone/Desktop/Code/C/src/Porject/Stu_information/Head File/Stu_inform.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Max_numbers 100
#define Max_Size 100
void login(){
    time_t t;
    struct tm *local_time;
    time(&t);
    local_time = localtime(&t);
        printf("        * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("        *                                           *\n");
        printf("        *       Welcome To StudentInformation       *\n");
        printf("        *           Administration System           *\n");
        printf("        *                                           *\n");
        printf("        *           (1)Input:'a'--Addition          *\n");
        printf("        *           (2)Input:'d'--Delete            *\n");
        printf("        *           (3)Input:'c'--Change            *\n");
        printf("        *           (4)Input:'f'--Find              *\n");
        printf("        *                                           *\n");
        printf("                    %s", asctime(local_time));
        printf("        *Copyright© 2023 YangFan All Rights Reserved*\n");
        printf("        * * * * * * * * * * * * * * * * * * * * * * *\n");
}
    void Add_Inform(stu_inform *form){
    // 初始化form，并分配内存空间
        form = (stu_inform*)malloc(sizeof(stu_inform) * Max_numbers);
        //要给每个name分配内存空间
        for(int i = 0;i < Max_numbers;i++){
            (form+i)->name = (char*)malloc(sizeof(20));
        }
        int stu_numbers = 0;
        printf("请输入学生人数: ");
        scanf("%d",&stu_numbers);
        // scanf("%s",(form+1)->name);
        // fgets((form+1)->name,sizeof(20)*Max_Size,stdin);
        // printf("%s",(form+1)->name);
        for(int i = 0;i < stu_numbers;i++){
            printf("请输入名字: ");
            // fgets((form+i)->name,sizeof(20)*Max_Size,stdin);
            scanf("%s",(form+i)->name);
            printf("请输入出生日期: ");
            scanf("%d",&(form+i)->birth);
            printf("请输入id: ");
            scanf("%d",&(form+i)->id);
            printf("请输入性别(你必须输入1或者0): ");
            scanf("%d",&(form+i)->sex);
        }
    }
    void Delete_Inform(stu_inform *stu_inform){
        
    }

    void Change_Inform(stu_inform *stu_inform,char* key){

    }

    void Find_Inform(stu_inform *stu_inform,char* key){

    }
    
void operation(char op,stu_inform *stu_inform){
    char* key;
    switch(op){
        case 'a':
            Add_Inform(stu_inform);
        break;
        case 'd':
            Delete_Inform(stu_inform);
        break;
        case 'c':
            scanf("%s",key);
            Change_Inform(stu_inform,key);
        break;
        case 'f':
            scanf("%s",key);
            Find_Inform(stu_inform,key);
        break;
    }
}
