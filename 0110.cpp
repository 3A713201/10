#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

char jk;

printf("請輸入英文字母:"); 
scanf("%c",&jk);

if((jk>='A')&&(jk<='Z')){
jk+=32;
printf("轉換為%c\n",jk);
}
else if((jk>='a')&&(jk<='z')){
jk-=32;
printf("轉換為%c\n",jk);	
}
else{
printf("你輸入的不是英文字母\n");
}

system("PAUSE");
return 0;
}
