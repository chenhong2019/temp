#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salary;
	printf("请输入您的工资（单位：元)：");
	scanf("%f",&salary);
	salary = salary * (1+0.05);
	printf("您的提成为5%，提成后的工资为：%.2f\n",salary);
	return 0;
}
