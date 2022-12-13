#include <stdio.h>
#define KGRN  "\x1B[32m"

void print_name() 
{
    printf("Tereshchenko Dmytro\r\n");
}

void hello_saurier()
{
	 printf("%sHi from Saurier!\n", KGRN);
}
void myfunc()
{
    print_name();
    printf("Maksym!\r\n");
    printf("Current date 07.12.2022\r\n");
}

void printGreeting(){
    printf("Hello, BaseCamp!");
}

int main()
{
  printGreeting();
  printf("Andrii\n");
  printf("My name is Roman\n");
  printf("Andrii\n");
  printf("And Yurii__\n");
  myfunc();
  printf("This is my BUG ! by yyefimov 18:48");
	printf("hey you\n");
	printf("green\n");
  hello_saurier();
  return 0;
}
