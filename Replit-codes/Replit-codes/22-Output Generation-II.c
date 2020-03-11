#include <stdio.h>

int main(void) {
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
      if(j==i){
        if(j==1 || j==2 || j==3|| j==4){
        printf("* ");
        }
        else if(j==5){
          printf("*");
        }
      }
      else{
        if(j==2 || j ==3 || j== 4 ||j==1){
        printf("$ ");
        }
        else if(j==5){
          printf("$");
        }
      }
    }
     printf("\n");
  }
 
    
  return 0;
}