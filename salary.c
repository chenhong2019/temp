#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salary;
	printf("���������Ĺ��ʣ���λ��Ԫ)��");
	scanf("%f",&salary);
	salary = salary * (1+0.05);
	printf("�������Ϊ5%����ɺ�Ĺ���Ϊ��%.2f\n",salary);
	return 0;
}
