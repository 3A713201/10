#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

char jk;

printf("�п�J�^��r��:"); 
scanf("%c",&jk);

if((jk>='A')&&(jk<='Z')){
jk+=32;
printf("�ഫ��%c\n",jk);
}
else if((jk>='a')&&(jk<='z')){
jk-=32;
printf("�ഫ��%c\n",jk);	
}
else{
printf("�A��J�����O�^��r��\n");
}

system("PAUSE");
return 0;
}
