#define _CRT_SECURE_NO_WARNINGS
//2��13��ѧϰ���µ�ͷ�ļ����ֱ���ctype.h  iso646.h
/*дһ����ͳ�������ַ������ʡ������ĳ���*/

//#include<stdio.h>
//#include<ctype.h>
//#include<stdbool.h>
//#define STOP '|'
//int main()
//{
//	char c;  /*�����洢д����ַ�*/
//	char prev;/*д���ǰһ���ַ�*/
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;/*������������*/
//	bool inword = false;/*������stdbool��ͷ�ļ�����0д��false*/
//	printf("��������Ҫ�������ı�:(����|���ɽ���)\n");
//	prev = '\n';/*�����ʼ������������ʾ��ûʲô̫�������*/
//	while ((c=getchar())!=STOP)
//	{
//		n_chars++; /*����������һ���ַ������ո������*/
//		if (c=='\n')
//		{
//			n_lines++;
//		}
//		if (!isspace(c)&&!inword)/*���c���ǿհ��ַ�������Ϊ��*/
//		{
//			inword = true;           /*��ʱinword�������,�Ϳ��Խ�����һ���жϣ��ٴ�����һ���ַ�������if������ִ�У�����洢prev*/
//			n_words++;               
//		}
//		if (isspace(c)&&inword)     /*�ȵ��������ո�ʱ�����������俪ʼִ�У����ʱ��ͼ����˵ڶ���if���������ַ��ͻ�����word��������*/
//		{
//			inword = false;
//		}
//		prev = c;                 
//	}
//	if (prev!='\n')    /*��Ϊ��������֮����Զ���prevһ�����У�ֱ�ӵ���һ�У��²�����*/
//	{
//		p_lines = 1;
//	}
//	printf("���ַ�����Ϊ:%d �ܵ�������:%d ������Ϊ:%d\n",n_chars,n_words,n_lines );
//	printf("����������%d\n",p_lines);
//	return 0;
//}

//?���÷���ò����֮ǰǳǳ�˽������ʱ���нӴ�����������if else
//#include<stdio.h>
//#define COVERAGE 350 /*ÿһ���������ˢ�����*/
//int main()
//{
//	int wall;
//	int cans = 0;
//	printf("������ǽ�����:");
//	while (scanf("%d",&wall) == 1)
//	{
//		cans = wall / COVERAGE;
//		cans += (wall % COVERAGE == 0) ? 0 : 1;
//		printf("��Ҫ%d��\n", cans);
//	}
//	printf("Done!");
//	return 0;
//}
//
// 
/*�����ϰ*/
//1����дһ�������ȡ���룬�������ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������
//
//#define SPACE ' '
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int n_space=0, n_line=0, n_chars=0;
//	printf("��������Ҫ���Ե��ַ�");
//	while ((ch=getchar())!='#')
//	{
//		if (ch==SPACE)
//		{
//			n_space++;
//		}
//		else if (ch=='\n')
//		{
//			n_line++;
//		}
//		else
//		{
//			n_chars++;
//		}
//	}
//	printf("�ո���=%d\n���з���=%d\n�����ַ�����=%d\n",n_space,n_line,n_chars);
//	return 0;
//}
// 
// 
//2����дһ�������ȡ���룬�������ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���
// ÿ�д�ӡ8�����ַ���ASCII�롱��ϡ����飺ʹ���ַ���������ģ�������������ÿ8��ѭ������ʱ��ӡһ�����з���
//
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int asc = 0, i = 0;
//	while ((ch = getchar())!= '#')
//	{
//		if (i % 8 == 0)
//		{
//			printf("\n");
//			i = 0;
//		}
//		if (ch != ' '&& ch != '\n')
//		{
//			printf("%c--%d  ", ch, ch);
//		}
//		i++;
//
//	}
//	return 0;;
//}
// 
// 
//3����дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ�����û������ż����������0����������Щż����ƽ��ֵ�������������������������ƽ��ֵ��
//
//#include<stdio.h>
//int main()
//{
//	int integer, odd = 0, even = 0, sum1 = 0, sum2 = 0;
//	printf("����������");
//	while (scanf("%d", &integer)== 1)
//	{
//		if (integer==0)
//		{
//			break;
//		}
//		else if (integer % 2 == 0)
//		{
//			even++;
//			sum1 += integer;
//		}
//		else
//		{
//			odd++;
//			sum2 += integer;
//		}
//	}
//	printf("ż������Ϊ%d����������Ϊ%d\n", even, odd);
//	printf("ż��ƽ����Ϊ%f,����ƽ����Ϊ%f", 1.0*sum1 / even, 1.0*sum2 / odd);
//	return 0;
//}
// 
// 
//4��ʹ��if else����дһ�������ȡ���룬������ֹͣ���ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻��
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char ch;
//	printf("���������ݣ�����#�˳���\n");
//	while ((ch=getchar())!='#')
//	{
//		if (ch=='!')
//		{
//			printf("!!");
//			i++;
//		}
//		else if (ch == '.')
//		{
//			printf("!");
//			i++;
//		}
//		else
//		putchar(ch);
//
//	}
//	printf("������%d���滻", i);
//	return 0;
//}
// 
// 
//5��ʹ��switch��д��ϰ4��
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char ch;
//	printf("���������ݣ�����#�˳���\n");
//	while ((ch=getchar())!='#')
//	{
//		switch (ch)
//		{
//		case '!':
//			printf("!!");
//			i++;
//			break;
//		case'.':
//			printf("!");
//			i++;
//			break;
//		default:
//			putchar(ch);
//		}
//
//	}
//	printf("������%d���滻", i);
//	return 0;
//}
//
// 
//6����д�����ȡ���룬������ֹͣ������ei���ֵĴ�����
// ע��ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award�����������������ԡ�
// 
//#include<stdio.h>
//int main()
//{
//	char ch=0, prev=0;
//	int i = 0;
//	printf("�������ı�(#ֹͣ)\n");
//	while ((ch=getchar())!='#')
//	{
//		if (ch=='i'&&prev=='e')
//		{
//			i++;
//		}
//		prev = ch;
//	}
//	printf("ei���ֵĴ���Ϊ%d\n", i);
//	return 0;
//}
// 
// 
//7����дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣�����¼���
//a���������ʣ�10.00��Ԫ��Сʱ
//b���Ӱࣨ����40Сʱ����1.5����ʱ��
//c.˰�ʣ�ǰ300��ԪΪ15��
// ��150��ԪΪ20��
//���µ�Ϊ25��
//�ã�define������ų��������������Ƿ���ϵ�ǰ��˰����
//
//#include<stdio.h>
//#define base_sly 10.0
//#define overtime 1.5
//int main()
//{
//	int hours = 0;
//	float salary=0, rev=0, tax=0;
//	printf("enter your work times of one week times.\n");
//	scanf("%d", &hours);
//	if (hours <= 40)
//		salary = hours * base_sly;
//	else if (hours>168)
//	{
//		printf("�������ֵ����");
//	}
//	else
//	{
//		salary = 400 + overtime * (hours - 40) * base_sly;
//	}
//	if (hours<=168)
//		if (salary <= 300)
//		{
//			rev = salary * 0.85;
//			tax = salary - rev;
//			printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//		}
//		else if (salary > 300 && salary <= 450)
//		{
//			rev = 255 + 0.8 * (salary-300);
//			tax = salary - rev;
//			printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//		}
//		else
//		{
//			rev = 255 + 120 + 0.75 * (salary-450);
//			tax = salary - rev;
//			printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//		}
//	return 0;
//}
// 
// 
//8���޸���ϰ7�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���ʹ��switch��ɹ��ʵȼ�ѡ��
// ���г������ʾ�Ĳ˵�Ӧ������������
//Enter the number corresponding to the desired pay rate or action: 
//1) $8.75 / hr				2) $9.33 / hr 
//3) $10.00 / hr			4) $11.20 / hr
//5) quit
//���ѡ��1��4���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ�����У����ǻ�����5��
//�������1��5��������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾҪʾ�û����롣ʹ�ã�define�������ų�����ʾ�����ʵȼ���˰�ʡ�
//
//#include<stdio.h>
//#define level1 8.75
//#define level2 9.33
//#define level3 10.00
//#define level4 11.20
//#define tax1 0.15
//#define tax2 0.20
//#define tax3 0.25
//int main()
//{
//	int hours = 0;
//	char ch=0;
//	float salary = 0, rev = 0, tax = 0;
//	printf("Enter the number corresponding to the desired pay rate or action:\n1) $8.75 / hr			2) $9.33 / hr \n3) $10.00 / hr			4) $11.20 / hr\n5) quit\n");
//	while (ch = getchar())                      
//	{float salary = 0, rev = 0, tax = 0;
//		if (ch=='5')                       /*��Ϊ����getchar�����Զ����ַ�*/
//			break; 
//		switch (ch)
//		{
//		case'1':
//			printf("�����빤��Сʱ��:");
//			scanf("%d", &hours);
//			if (hours<=168)
//			{
//				salary = level1 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary-300) * tax2+45;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else
//			{
//				printf("Сʱ��������");
//				break;
//			}
//		case'2':
//			printf("�����빤��Сʱ��:");
//			scanf("%d", &hours);			
//			if (hours <= 168)
//			{
//				salary = level2 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary - 300) * tax2+ 45;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else
//			{
//				printf("Сʱ��������");
//				break;
//			}
//		case'3':			
//			printf("�����빤��Сʱ��:");
//			scanf("%d", &hours);
//			if (hours <= 168)
//			{
//				salary = level1 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary - 300) * tax2 + 45;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else
//			{
//				printf("Сʱ��������");
//				break;
//			}
//		case'4':			
//			printf("�����빤��Сʱ��:");
//			scanf("%d", &hours);
//			if (hours <= 168)
//			{
//				salary = level1 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary - 300) * tax2 + 45;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("��Ĺ�����%.2f\n���˰����%.2f\n˰��������%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else 
//			{
//				printf("Сʱ��������");
//				break;
//			}
//		case '5':
//			break;
//		case ' ':
//			break;
//		case '\n':
//			break;
//		default:
//			printf("������Ч\n");
//			break;
//		}
//	}
//	return 0;
//}
// 
// 
// 9.��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������
// 
//#include<stdio.h>
//int main()
//{
//	int un, i = 1, j = 1, c = 0;
//	printf("enter a integer:\n");
//	scanf("%d", &un);
//	if (un>0)
//	{
//		while (i<un)
//		{
//			i++;
//			c = 0;
//			while (j<=i)
//			{
//				if (i%j==0)
//				{
//					c++;
//				}
//				j++;
//			}
//			j = 1;
//			if (c==2)
//			{
//				printf("%4d", i);
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	else
//	{
//		printf("bye");
//	} 
//	return 0;
//}
// 
// 
//10.1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����ÿ������������ȼ�
//�����Ǹ�˰�ռƻ���ժҪ����Ԫ��ΪӦ��˰�����룩��
//
//���                                        ˰��
//����                                        17850��Ԫ��15���ƣ��������ְ�28����
//����                                        23900��Ԫ��15���ƣ��������ְ�28����
//�ѻ飬����                                  29750��Ԫ��15���ƣ��������ְ�28����
//�ѻ飬����                                  14875��Ԫ��15���ƣ��������ְ�28����
//
//���磬һλ����Ϊ20000��Ԫ�ĵ�����˰�ˣ�Ӧ����˰��0.15x17850��0.28x��20000��17850����Ԫ����дһ������
//���û�ָ������˰��������Ӧ��˰���룬Ȼ�����˰�𡣳���Ӧͨ��ѭ�����û����Զ�����롣
// 
//#include<stdio.h>
//#define alone 17850
//#define host 23900
//#define married 29750
//#define marr_b 14875
//int main()
//{
//	int choi = 0;
//	float salary = 0.0f, tax=0.0f;
//	printf("����������˵����Ļ���״��:(������ĸ�˳�)\n");
//	printf("1)����\n2)����\n3)�ѻ�,����\n4)�ѻ�,����\n");
//	while(scanf("%d", &choi)==1)
//	{
//		switch (choi)
//		{
//		case 1:
//			printf("��Ļ���״���ǵ���\n��������Ĺ���:\n");
//			scanf("%f", &salary);
//			if (salary <= alone)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = alone * 0.15 + (salary - alone) * 0.28;
//			}
//			printf("������ɵ�˰��Ϊ%.2f\n", tax);
//			break;
//		case 2:
//			printf("��Ļ���״���ǻ���\n��������Ĺ���:\n");
//			scanf("%f", &salary);
//			if (salary <= host)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = host * 0.15 + (salary - host) * 0.28;
//			}
//			printf("������ɵ�˰��Ϊ%.2f\n", tax);
//			break;
//		case 3:
//			printf("��Ļ���״�����ѻ飬����\n��������Ĺ���:\n");
//			scanf("%f", &salary);
//			if (salary <= married)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = married * 0.15 + (salary - married) * 0.28;
//			}
//			printf("������ɵ�˰��Ϊ%.2f\n", tax);
//			break;
//		case 4:
//			printf("��Ļ���״�����ѻ飬����\n��������Ĺ���:\n");
//			scanf("%f", &salary);
//			if (salary <= marr_b)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = marr_b * 0.15 + (salary - marr_b) * 0.28;
//			}
//			printf("������ɵ�˰��Ϊ%.2f\n", tax);
//			break;
//		default:
//			printf("��Ч������������\n");
//			break;
//		}
//		printf("����������˵����Ļ���״��:(������ĸ�˳�)\n");
//		printf("1)����\n2)����\n3)�ѻ�,����\n4)�ѻ�,����\n");
//	}
//	return 0;
//}
// 
// 
//11��ABC�ʹ��ӻ�����۵����ۼ�Ϊ2.05��Ԫ����������ۼ�Ϊ1.15��Ԫ���������ܲ��ۼ�Ϊ1.09��Ԫ������
//������˷�֮ǰ��100��Ԫ�Ķ�����5���Ĵ����Żݡ�
// ���ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�
// 5����20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����14��Ԫ�Ļ�����ÿ����1������0.5��Ԫ��
// ��дһ��������ѭ������switch ���ʵ���û����벻ͬ����ĸʱ�в�ͬ����Ӧ��
// ������a����Ӧ�����û������󼻵İ�����b����˵İ�����c�Ǻ��ܲ��İ�����q���˳�������
// ����Ҫ��¼�ۼƵ�������
// ��������û�����4������ˣ�Ȼ������5������ˣ�����Ӧ����9������ˡ�
// Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�װ�ѡ�
// ��󣬳���Ӧ��ʾ���еĹ�����Ϣ��
// ��Ʒ�ۼۡ���������������λ���������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ��Լ����еķ����ܶ
//
//#include<stdio.h>
//#define cost_a 2.05
//#define cost_b 1.15
//#define cost_c 1.09
//int main()
//{
//	char ch;
//	float weight=0.0f;
//	float weight_a= 0.0f, weight_b = 0.0f, weight_c = 0.0f;
//	float cost = 0.0f;
//	float expense = 0.0f;
//	printf("���ۼ�Ϊ2.05��Ԫ����\n����ۼ�Ϊ1.15��Ԫ����\n���ܲ��ۼ�Ϊ1.09��Ԫ����\n");
//	printf("a*��\nb*���\nc*���ܲ�\n");
//	printf("��������ĸ�����㹺��Ĳ�Ʒ(����q�˳�):\n");
//	scanf("%c", &ch);
//	while (ch!='q')
//	{
//		switch (ch)
//		{
//		case 'a':
//			printf("������������\n");
//			scanf("%f", &weight);
//		    weight_a += weight;
//			break;
//		case 'b':
//			printf("������������\n");
//			scanf("%f", &weight);
//			weight_b += weight;
//			break;
//		case 'c':
//			printf("������������\n");
//			scanf("%f", &weight);
//			weight_c += weight;
//			break;
//		case '\n':
//			break;
//		default:
//			printf("��������,����������\n");
//			break;
//		}
//		cost = cost_a * weight_a + cost_b * weight_b + cost_c * weight_c;
//		weight = weight_a + weight_b + weight_c;
//		if (weight>0)
//		{
//			if (weight <= 5)
//			{
//				expense = 6.5;
//			}
//			else if (weight > 5 && weight <= 20)
//			{
//				expense = 14;
//			}
//			else
//			{
//				expense = 14 + (expense - 20) * 0.5;
//			}
//		}
//		else
//		{
//			printf("������������\n");
//			weight = 0;
//		}
//		printf("��������ĸ�����㹺��Ĳ�Ʒ(����q�˳�):\n");
//		printf("a*��\nb*���\nc*���ܲ�\n");
//		getchar(ch);
//		scanf("%c",&ch);
//	}
//	if (cost>=100)
//	{
//		printf("������������Ϊ%f��\n", weight);
//		printf("�߲˷���%.2f\n", cost);
//		cost *= 0.95;
//		printf("��������Ϊ%.2f\n", cost );
//		printf("�˷ѺͰ�װ��Ϊ%.2f\n", expense);
//		printf("�ܷ���Ϊ%.2f\n", cost+expense);
//		printf("�ۿ�Ϊ95��(���۲����������)\n");
//	}
//	else if(cost<100&&cost>0)
//	{
//		printf("������������Ϊ%.2f��\n", weight);
//		printf("�߲˷���%.2f\n", cost);
//		printf("��������Ϊ%.2f\n", cost);
//		printf("�˷ѺͰ�װ��Ϊ%.2f\n", expense);
//		printf("�ܷ���Ϊ%.2f\n", cost + expense);
//	}
//	else 
//	{
//
//	}
//	if (ch == 'q')
//	{
//		printf("�������!");
//	}
//	return 0;
//}

/*��һ���е���˼���ѵ���Ŀ�У��򵥵�Ҳ�У�������һ����ѧ�������ˣ�Ȼ����scanf�������ַ��Ļ���һ��Ҫ��һ��getchar���Ե��س��ģ��������Һþ�*/