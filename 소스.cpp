//�������� 10��
//#include <stdio.h>
//
//int main()
//{
//	int money;
//
//	printf("���� �Է��Ͻÿ�: ");
//	scanf("%d", &money);
//
//	int money50000 = money / 50000;
//	money = money % 50000;
//	int money10000 = money / 10000;
//	money = money % 10000;
//	int money5000 = money / 5000;
//	money = money % 5000;
//	int money1000 = money / 1000;
//	money = money % 1000;
//
//	printf("�������� %d��,", money50000);
//	printf("������ %d��,", money10000);
//	printf("��õ���� %d��,", money5000);
//	printf("õ���� %d��,", money1000);
//	printf("�������� �����Դϴ�.");
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d %d", 100, 200, 300);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input1, input2;
//	scanf("%d %d", &input1, &input2);
//
//	char oper;
//	scanf("%c", &oper);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, res;
//
//	a =  b = c = 10;
//	res = a * b * c;
//	printf("a,b,c�� ������ ==> %d\n", res);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float a = 2.0f, b = 3.0f, c = 4.0f;
//	float result;
//
//	result = a + b + c;
//	printf("%5.2f + %5.2f = %5.2f\n", a, b, result);
//	result = a - b - c;
//	printf("%5.2f - %5.2f = %5.2f\n", a, b, result);
//	result = a * b* c;
//	printf("%5.2f * %5.2f = %5.2f\n", a, b, result);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 100;
//
//	printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d\n", --a);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int num = 100;
	num++;
	printf("%d",num);
	++num;
	printf("%d", num);
	printf("%d", num++);
	printf("%d", ++num);

	return 0;
}