#include<stdio.h>
#include<time.h>
#define RESET "\033[0m"
#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define MAGENTA "\033[1;35m"
int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int point = 0;
    char username[15];
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    time_t start_time, current_time;
    int time_limit = 15;
    
    printf("\n\n*********WELCOME TO THE GAME*********\n\n");
    printf("PRESS 7 TO START THE GAME -->\n\n");
    printf("PRESS 0 TO QUIT THE GAME <--\n\n");
    scanf("%d",&i);
    if(i==7){printf("<-:::::::THE GAME HAS STARTED::::::::->\n\n");
             printf("NOTE: You have %d seconds per question!\n\n", time_limit);}
    else if(i==0){printf("->:::::::THE GAME HAS ENDED::::::::<-\n\n");}
    else{printf("INVALID\n\n");}
    
    if(i==7){
        printf("\nENTER USER NAME:");
        scanf("%c",&username);
        printf(YELLOW"Q1.Who developed the C  programming language?\n1.Tennis Ritchie\n2.Dennis Ritchie\n3.James Gosling\n4.Guido van Rossum\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans1);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point1=0; printf("you have scored %d point\n\n",point1); goto end_game;}
        else if(ans1==2){printf(GREEN"Correct Answer\n"RESET); point=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point1=0; printf("you have scored %d point \n\n",point1); goto end_game;}
        
        printf(YELLOW"Q2.C was developed at?\n1.MIT\n2.AT&T Bell lab\n3.IBM\n4.Microsoft\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans2);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point2=0; printf("you have scored %d point\n\n",point2); goto end_game;}
        else if(ans2==2){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point2=0; printf("you have scored %d point \n\n",point2); goto end_game;}
        
        printf(YELLOW"Q3.Which header file is needed for printf and scanf?\n1.stdio.h\n2.stdlib.h\n3.conio.h\n4.string.h\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans3);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point3=0; printf("you have scored %d point\n\n",point3); goto end_game;}
        else if(ans3==1){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point3=0; printf("you have scored %d point\n \n",point3); goto end_game;}
        
        printf(YELLOW"Q4.What is the Capital of Kazakhstan?\n1.Astana\n2.Kabul\n3.Beirut\n4.Muscat\n "RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans4);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point4=0; printf("you have scored %d point\n\n",point4); goto end_game;}
        else if(ans4==1){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point4=0; printf("you have scored %d point \n\n",point4); goto end_game;}
        
        printf(YELLOW"Q5.An array index in C starts from\n1.1\n2.0\n3.-1\n4.Any value\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans5);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point5=0; printf("you have scored %d point\n\n",point5); goto end_game;}
        else if(ans5==2){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point5=0; printf("you have scored %d point \n\n",point5); goto end_game;}
        
        printf(YELLOW"Q6.Why did the math book look sad?\n1.No friends\n2.Too many problems\n3.Homework stress\n4.It failed algebra\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans6);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point6=0; printf("you have scored %d point\n\n",point6); goto end_game;}
        else if(ans6==2){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point6=0; printf("you have scored %d point \n\n",point6); goto end_game;}
        
        printf(YELLOW"Q7.Which country invented paper?\n1.India\n2.China\n3.South Korea\n4.Japan\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans7);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point7=0; printf("you have scored %d point\n\n",point7); goto end_game;}
        else if(ans7==2){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point7=0; printf("you have scored %d point\n\n",point7); goto end_game;}
        
        printf(YELLOW"Q8.Which planet rotates clockwise ?\n1.Earth\n2.Venus\n3.Mercury\n4.Mars\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans8);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point8=0; printf("you have scored %d point\n\n",point8); goto end_game;}
        else if(ans8==2){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point8=0; printf("you have scored %d point \n\n",point8); goto end_game;}
        
        printf(YELLOW"Q9.What is the fastest-growing plant on earth?\n1.Cactus\n2.Wheat\n3.Bamboo\n4.Water hyacinth\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans9);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point9=0; printf("you have scored %d point\n\n",point9); goto end_game;}
        else if(ans9==3){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point9=0; printf("you have scored %d point \n\n",point9); goto end_game;}
        
        printf(YELLOW"Q10.The first engineering degree in the world started in?\n1.1678\n2.1840\n3.1904\n4.1794\n"RESET);
        printf("ENTER YOUR ANSWER:");
        start_time = time(NULL);
        scanf("%d",&ans10);
        current_time = time(NULL);
        if(difftime(current_time, start_time) > time_limit){printf("Time's up! Game Over!\n"); point10=0; printf("you have scored %d point\n\n",point10); goto end_game;}
        else if(ans10==4){printf(GREEN"Correct Answer\n"RESET); point+=100; printf("you have scored %d point\n\n",point);}
        else{printf(RED"Wrong Answer! Game Over!\n"RESET); point10=0; printf("you have scored %d point \n\n",point10); goto end_game;}
    }
    
    end_game:
    printf(MAGENTA"\ntotal point scored :%d"RESET,point);
    
    return 0;
}