#include <stdio.h>

int main(void) {
  int i,j;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(j==2 && i == 2){
      
        printf("0 ");
      }
      else{
        if(j==0||j==1||j==2||j==3){
        printf("# ");
        }
        else{
          printf("#");
        }
      }
    }
    printf("\n");
  }
  return 0;
}