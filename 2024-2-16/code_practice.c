#define _CRT_SECURE_NO_WARNINGS
//�����ϰ
//�����һЩ����Ҫ��������EOF��ֹ�������Ĳ���ϵͳ���ѻ�����޷�ʹ���ض�����ʹ��һ˿���Ĳ�������ֹ���룬��������ַ�ʱֹͣ��
//1�����һ������ͳ���ڶ����ļ���β֮ǰ��ȡ���ַ�����
//
//#include<stdio.h>
//int main()
//{
//	int counter = 0;
//	char ch;
//	while ((ch=getchar())!=EOF)
//	{
//		counter++;
//	}
//	printf("%d", counter);
//	return 0;
//}
//
//
//2����дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ������Ҫ��ӡÿ��������ַ�������Ӧ��ASCII
//ʮ����ֵ��
// ע�⣬��ASCII�����У��ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ���
//����и��Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ��n���t������ʹ�ÿ����ַ���ʾ�������磬ASCII��1��
//Ctrl��A������ʾΪ��A��ע�⣬A��ASCIIֵ��Ctrl��A��ֵ����64��
//�����Ǵ�ӡ�ַ�Ҳ�����ƵĹ�ϵ����ÿ���������з���ӡ�µ�һ��֮�⣬ÿ�д�ӡ10��ֵ����ע�⣺��ͬ�Ĳ���ϵͳ������ַ����ܲ�ͬ����
// 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char ch;
//	while ((ch=getchar())!=EOF)
//	{
//		if (i++ == 10)
//		{
//			i = 0;
//			printf("\n");
//		}
//		if (ch > ' ')
//			printf("\'%c\'--%3d ", ch, ch);
//		else if(ch=='\n')
//		{
//			printf("\\n--\\n\n");
//			i = 0;
//		}
//		else if(ch=='\t')
//		{
//			printf("\\t--\\t");
//		}
//		else
//		{
//			printf("\'%c\'--^%c", ch, ch + 64);
//		}
//	}
//	return 0;
//}
// 
// 
//3����дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ�����
//�����Сд��ĸ��ֵ�������ġ�����ʹ��ctype.h���к��ʵķ��ຯ�������㡣
// 
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch;
//	int up = 0, low = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (islower(ch))
//			low++;
//		if (isupper(ch))
//			up++;
//	}
//	printf("��д��ĸ%d\nСд��ĸ%d\n", up, low);
//	return 0;
//}
// 
// 
//4����дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ����ƽ��ÿ�����ʵ���ĸ������Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��
//ʵ���ϣ�������Ҳ��Ӧ��ͳ�ƣ�����������ʱ��ͬ������ô�ࣨ�����Ƚ�������㣬����ʹ��ctype.hϵ���е�ispunct������������
// 
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch;
//	int word = 0, alp = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch == '\n' ||ch== ' ')
//		{
//			word++;
//		}
//		else if (ispunct(ch))
//		{
//			word++;
//		}
//		else if(isalpha(ch))
//		{
//			alp++;
//		}
//	}
//	printf("��������%d\n��ĸ����%d\nƽ��������ĸ����%f", word, alp, alp / word * 1.0);
//	return 0;
//}
// 
// 
//5���޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬���������50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ�
//��ô��һ�β²��ֵӦ��50��100��ֵ��Ҳ����75�������β´��ˣ���ô��һ�β²��ֵӦ��50��75����ֵ���ȵȡ�ʹ�ö��ֲ��ң�binary search�����ԣ�
//����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�
// 
//#include<stdio.h>
//int main()
//{
//	int head=1, tail=100;
//	int i = (head + tail) / 2;
//	char ch;
//	printf("�����²��������\n\"r\"��ʾ�Ҳ¶���\n");
//	do
//	{
//		printf("�Ҳ���%d\n", i);
//		printf("����\"b\"��ʾ�Ҳ´���\n\"s\"��ʾ�Ҳ�С��\n");
//		while ((ch=getchar())=='\n')
//		{
//			continue;
//		}
//		if (ch=='b'||ch=='B')
//		{
//			tail = i - 1;
//			i = (tail + head) / 2;
//			continue;
//		}
//		else if(ch=='s'||ch=='S')
//		{                                                /*�е���ˣ�������Ҿ�Ȼû��������ֻ��˵��һ�ͼ�һ��������֮�ʣ��Դ�ûת������*/
//			head = i + 1;
//			i = (tail + head) / 2;
//			continue;
//		}
//		else if(ch=='r'||'R')
//		{
//			break;
//		}
//		else
//		{
//			continue;
//		}
//
//	} while (getchar()!='r');
//	printf("�Ҿ�֪�����ܲ��У�\n");
//	return 0;
//}
// 
// 
//6���޸ĳ����嵥8.8�е�get��first�����������øú������ض�ȡ�ĵ�1���ǿհ��ַ�������һ���򵥵ĳ����в��ԡ�
// 
//#include<stdio.h>
//char get_first();
//int main()
//{
//	char ch;
//	ch = get_first();
//	printf("%c", ch);
//	return 0;
//}
//char get_first()
//{
//	char ch;
//	do
//	{
//		ch = getchar();
//	} while (ch==' '||ch=='\n'||ch=='t');
//	return ch;
//}
// 
// 
//7.�޸ĵ�7�µı����ϰ8�����ַ��������ֱ�ǲ˵���ѡ���q����5��Ϊ��������ı��
// 
//Enter the number corresponding to the desired pay rate or action: 
//a) $8.75 / hr				b) $9.33 / hr 
//c) $10.00 / hr			d) $11.20 / hr
//q) quit
//���ѡ��1��4���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ�����У����ǻ�����5��
//�������1��5��������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾҪʾ�û����롣ʹ�ã�define�������ų�����ʾ�����ʵȼ���˰�ʡ�

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
//	printf("Enter the number corresponding to the desired pay rate or action:\na) $8.75 / hr			b) $9.33 / hr \nc) $10.00 / hr			d) $11.20 / hr\nq) quit\n");
//	while (ch = getchar())                      
//	{float salary = 0, rev = 0, tax = 0;
//		if (ch=='q')                       /*��Ϊ����getchar�����Զ����ַ�*/
//			break; 
//		switch (ch)
//		{
//		case'a':
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
//		case'b':
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
//		case'c':			
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
//		case'd':			
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
//		case 'q':
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
//	while (getchar()=='\n'||getchar()==' ')
//	{
//		continue;
//	}
//	return 0;
//}
// 
//
//8.��дһ��������ʾһ���ṩ�Ӽ��˳��Ĳ˵�����ȡ�û���ѡ�����ʾ�û������������֣�
// Ȼ��ִ���û��ղ�ѡ��Ĳ������ó���ֻ���ܲ˵��ṩ��ѡ�
// ����ʹ��float���͵ı����洢�û���������֣�
// ����û�����ʧ�ܣ��������ٴ����롣���г�������ʱ������û�����0��Ϊ��2��������������
//����Ӧ��ʾ�û���������һ����ֵ���ó����һ������ʾ�����¡�
//Enter the operation of your choice :
//a.add
//s.subtract 
//m.multiply
//d.divide q.quit
//a
//Enter first number : 22.4
//Enter second number :
//one
//one is not an number.
//Please enter a number, such as 2.5, -1.78E8, or 3 :
//1
//22.4 + 1 = 23.4
//Enter the operation of your choice :
//a.add
//s.subtract
//m.multiply
//d.divide
//q.quit
//d
//Enter first number : 18.4
//Enter second number : 0
//da Enter a number other than 0 : 0.2
//18.4 / 0.2 = 92
//Enter the operation of your choice :
//a.add		s.subtract
//m.multiply	d.divide
//q.quit
//q
//Bye.
//
//#include<stdio.h>
//float get_number();
//void show_menu();
//int main()
//{
//	char operate;
//	float first, second;
//	do
//	{
//		show_menu();
//		operate = getchar();
//		while (getchar() != '\n')
//			continue; 
//		switch (operate)
//		{
//		case 'a':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			printf("%g+%g=%g\n", first, second, first + second);
//			break;
//		case 's':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			printf("%g-%g=%g\n", first, second, first - second);
//			break;
//		case 'm':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			printf("%g*%g=%g\n", first, second, first * second);
//			break;
//		case 'd':
//			printf("enter first number:\n");
//			first = get_number();		
//			printf("enter second number:\n");
//			second = get_number();
//			while (second == 0)
//			{
//				printf("please enter a number other than 0");
//				second = get_number();
//			}
//			printf("%g/%g=%g\n", first, second, first / second);
//			break;
//		case 'q':
//			break;
//		default:
//			printf("please enter a char,such a,s,m,d and q:\n");
//			while (getchar() != '\n');
//			break;
//		}
//		while (getchar() != '\n');
//	} while (operate != 'q');
//	printf("bye\n");
//	return 0;
//}
//float get_number()
//{
//	float f;
//	char c;
//	while (scanf("%f",&f) != 1)
//	{
//		while ((c=getchar())!='\n')
//		{
//			putchar(c);
//		}
//		printf("is not a number\n");
//		printf("please a number,such as 2.5,-1.78E8,or 3");
//	}
//
//	return f;
//}
//
//void show_menu()
//{
//	printf("Enter the operation of your choice :\na.add\ns.subtract\nm.multiply\nd.divide\nq.quit\n");
//}

//#include<stdio.h>
//float get_number();
//void show_menu();
//int main()
//{
//	char choice;
//	float first, second;
//	do
//	{
//		show_menu();
//		choice = getchar();
//		//while (getchar() != '\n')
//		//{
//		//continue;
//		//}
//		switch (choice)
//		{
//		case 'a':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			printf("%g+%g=%g\n", first, second, (first + second) * 1.0);
//			break;
//		case 's':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			printf("%g-%g=%g\n", first, second, first - second);
//			break;
//		case 'm':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			printf("%g*%g=%g\n", first, second, first * second);
//			break;
//		case 'd':
//			printf("enter first number:\n");
//			first = get_number();
//			printf("enter second number:\n");
//			second = get_number();
//			while (second == 0)
//			{
//				printf("please enter a number other than 0");
//				second = get_number();
//			}
//			printf("%g/%g=%g\n", first, second, first / second);
//			break;
//		case 'q':
//			break;
//		default:
//			("please enter a char,such a,s,m,d and q:\n");
//			while (getchar() != '\n');
//			break;
//		}
//		//while (getchar() != '\n');
//	} while (choice != 'q');
//	return 0;
//}
//float get_number()
//{
//	float f;
//	char c;
//	while (scanf("%f", &f) != 1)
//	{
//		while ((c = getchar()) != '\n')
//		{
//			putchar(c);
//		}
//		printf("is not a number\n");
//		printf("please a number,such as 2.5,-1.78E8,or 3");
//	}
//	getchar();                                       //���ǸĽ�֮���
//
//
//	return f;
//}
//void show_menu()
//{
//	printf("Enter the operation of your choice :\na.add\ns.subtract\nm.multiply\nd.divide\nq.quit\n");
//}