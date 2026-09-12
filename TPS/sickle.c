#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char answer[5];
char buffer[256];

int main(){

  printf("Be enlightened? (yes/no) ");
  fgets(answer, sizeof(answer), stdin);
  answer[strcspn(answer, "\n")] = 0;

  if(strcmp(answer, "yes") == 0){
    FILE *fp = fopen("sickleascii.txt", "r");

    if(fp != NULL){
      while(fgets(buffer, sizeof(buffer), fp)){
         printf("%s", buffer);
      }
    }

    fclose(fp);

    printf("                ☭ Working men of all countries, unite! ☭ \n\n\n\n\n"); 
  }

  else if(strcmp(answer, "no") == 0){
    printf("\nBe gone!\n");
  }

  else{
    printf("Not a valid answer\n");
    exit(1);
  }

  return 0;
}
