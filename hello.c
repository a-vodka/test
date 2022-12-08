#include <stdio.h>

void hello_slava(void)
{
	printf("Hello Slava ");
	printf("Current date 08.12.2022\n");
}

void prtMeinNachname() {
  printf("Vyshnevskyi Mykhailo\r\n");
}

void print_name()
{
    printf("Tereshchenko Dmytro\r\n");
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
	hello_slava();
	prtMeinNachname();
	printGreeting();
	myfunc();

	printf("Andrii\n");
	printf("My name is Roman\n");
	printf("Andrii\n");
	printf("And Yurii__\n");
	printf("This is my BUG ! by yyefimov 18:48");
	printf("hey you\n");
	printf("green\n");

	return 0;
}

