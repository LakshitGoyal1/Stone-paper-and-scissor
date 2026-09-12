#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{  while(1){
    srand(time(0));
    int a;
    a = ((rand()%3)+0);
    printf("Welcome to stone , paper and  scissor game \n RULES> \n choose 0 for stone \n 1 for paper \n 2 for scissor \n If you want to finish leave the game choose 3\n Enter your choice"); 
    int b;
    scanf("%d", &b);
    if(b==3)
    { 
        break;
    }
    else if(a==0 & b==0){
        printf("Computer chose stone\n");
        printf("Game is Draw");
    }
    else if(a==0 & b==1){
        printf("Computer chose stone \n");
        printf("You Win");
    }
    else if(a==0 & b==2){
        printf("Computer chose paper \n");
        printf("You loose");
    }
    else if(a==1 & b==0){
        printf("Computer chose paper \n");
        printf("You loose");
    }
    else if(a==1 & b==1){
        printf("Computer chose paper\n");
        printf("Game is Draw");
    }
    else if(a==1 & b==2){
        printf("Computer chose paper \n");
        printf("You Win");
    }
    else if(a==2 & b==0){
        printf("Computer chose scissor\n");
        printf("You win");
    }
    else if(a==2 & b==1){
        printf("Computer chose scissor\n");
        printf("You loose");
    }
    else if(a==2 & b==2){
        printf("Computer chose scissor \n");
        printf("Game is draw");
    }


  } 
  return 0;
}