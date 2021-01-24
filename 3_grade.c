#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int STD_NUM = 9;
const int scores[STD_NUM] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char *grades_arr[STD_NUM] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
int i;

void calculator();

int main(void){
    printf("Grade Program\nType \"-1\" if you want to exit\n"); //성적 프로그램, 나가고 싶으면 -1 타이핑
    printf("======================================================\n");
    printf("[Grade Table]\n");
    printf("Grade : %4s %4s %4s %4s %4s %4s %4s %4s %4s \n", "A+", "A", "B+", "B", "C+", "C", "D+", "D", "F");
    printf("Score : %4d %4d %4d %4d %4d %4d %4d %4d %4d \n", 95, 90, 85, 80, 75, 70, 65, 60, 0);
    printf("======================================================\n");

    calculator();

    return 0;
}

char *grade;

void calculator(void){
    printf("Type your score. (0 ~ 100) : ");
    scanf("%d\n", &i);
    if (i == -1){
        printf("Exit the program.\n");
        exit(0);
    }
    else if (i >= 0 && i <= 100){
        for (int u = 0; u < STD_NUM; u++){
            if (i >= scores[u]){
                grade = malloc(sizeof(char) * strlen(grades_arr[u])); 
                strcpy(grade, grades_arr[u]);
                break;
            }   
        }
    }
    else{
        printf("You typed wrong score.\n");
    }
    printf("Your grade is %s.\n", grade);
}
