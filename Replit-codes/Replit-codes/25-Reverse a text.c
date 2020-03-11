#include <stdio.h>
#include <string.h>

 void reverse_string(char*, int, int);

int main(void) {
   char a[150];
   int f=0;
    printf("Enter your string\n");
    scanf("%s", a);
    printf("Entered String is\n %s\n",a);
    reverse_string(a, 0, strlen(a)-1);
    printf("Reversed String is:\n %s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++){
      if(a[i]!=a[len-i-1]){
        f=1;
        break;
      }
      }
      if(f){
        printf("\nPalindrome string-No");
      }
      else{
         printf("\nPalindrome string-Yes");
      }
 
    return 0;
}

void reverse_string(char *b, int s, int n)
{
    char ch;
    if (s >= n)
       return;
 
    ch = *(b+s);
    *(b+s) = *(b+n);
    *(b+n) = ch;
    reverse_string(b, ++s, --n);
}
  