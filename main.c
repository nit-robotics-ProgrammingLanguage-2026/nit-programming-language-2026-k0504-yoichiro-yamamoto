#include <stdio.h>
int main(void)
{int number;
scanf("%d",&number);//入力された数を読み込む
int is_valid=!(number<0||(number>=10&&number<12)||number>=15);//0未満、または10以上かつ12未満、または15以上の数はNGと表示する。
if(is_valid==1)
{printf("OK");
}
else
{printf("NG");}
return 0;
}