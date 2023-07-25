#include <stdio.h>
#include "Atmfunction.h"

extern int Balance;

int main() {
  int Choice = 0 ;
  int Amount = 0 ;
  char Alpha ;
  printf("****Welcome to ABC ATM SYSTEM****");
  do {
    printf("\n 1-->CHECK BALANCE \n 2-->DEPOSIT \n 3-->WITHDRAW \n 4-->EXITEXIT");
    printf("\n Pls enter your choice: ");
    scanf("%d",&Choice);
    switch(Choice) {
      case 1 :
        void CheckBalance();
        break;
      case 2 :
        printf("\nEnter amount to deposit: ");
        scanf("%d" , &Amount);
        void Deposit(int Amount);
        break;
      case 3 :
        printf("\nEnter amount to withdraw: ");
        scanf("%d" , &Amount);
        void Withdraw(int Amount);
        break;
      case 4 :
      
      }
    printf("\nWould you like to continue: ");
    scanf("%c" ,&Alpha);
    }while (Alpha = 'y');
  
  printf("\n*****Thank you visit again*****");
  }


