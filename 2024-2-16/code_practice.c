#define _CRT_SECURE_NO_WARNINGS
//编程练习
//下面的一些程序要求输入以EOF终止。如果你的操作系统很难或根本无法使用重定向，请使用一丝他的测试来终止输入，如读到＆字符时停止。
//1．设计一个程序，统计在读到文件结尾之前读取的字符数。
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
//2．编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符及其相应的ASCII
//十进制值。
// 注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处理这些字符。
//如果有个非打印字符是换行符或制表符，则分别打印＼n或＼t。否则，使用控制字符表示法。例如，ASCII的1是
//Ctrl＋A，可显示为＾A。注意，A的ASCII值是Ctrl＋A的值加上64。
//其他非打印字符也有类似的关系，除每次遇到换行符打印新的一行之外，每行打印10对值。（注意：不同的操作系统其控制字符可能不同。）
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
//3．编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写字母的个数。
//假设大小写字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便。
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
//	printf("大写字母%d\n小写字母%d\n", up, low);
//	return 0;
//}
// 
// 
//4．编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。
//实际上，标点符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，考虑使用ctype.h系列中的ispunct（）函数）。
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
//	printf("单词数量%d\n字母数量%d\n平均单词字母数量%f", word, alp, alp / word * 1.0);
//	return 0;
//}
// 
// 
//5．修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，
//那么下一次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。使用二分查找（binary search）策略，
//如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
// 
//#include<stdio.h>
//int main()
//{
//	int head=1, tail=100;
//	int i = (head + tail) / 2;
//	char ch;
//	printf("我来猜猜你的数字\n\"r\"表示我猜对了\n");
//	do
//	{
//		printf("我猜是%d\n", i);
//		printf("输入\"b\"表示我猜大了\n\"s\"表示我猜小了\n");
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
//		{                                                /*有点搞了，这道题我居然没做出来，只能说加一和减一真是神来之笔，脑袋没转过来啊*/
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
//	printf("我就知道我能猜中！\n");
//	return 0;
//}
// 
// 
//6．修改程序清单8.8中的get＿first（）函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试。
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
//7.修改第7章的编程练习8，用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记
// 
//Enter the number corresponding to the desired pay rate or action: 
//a) $8.75 / hr				b) $9.33 / hr 
//c) $10.00 / hr			d) $11.20 / hr
//q) quit
//如果选择1～4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非户输入5。
//如果输入1～5以外的数字，程序应提醒用户输入正确的选项，然后再重复显示要示用户输入。使用＃define创建符号常量表示各工资等级和税率。

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
//		if (ch=='q')                       /*因为用了getchar，所以都是字符*/
//			break; 
//		switch (ch)
//		{
//		case'a':
//			printf("请输入工作小时数:");
//			scanf("%d", &hours);
//			if (hours<=168)
//			{
//				salary = level1 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary-300) * tax2+45;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else
//			{
//				printf("小时输入有误");
//				break;
//			}
//		case'b':
//			printf("请输入工作小时数:");
//			scanf("%d", &hours);			
//			if (hours <= 168)
//			{
//				salary = level2 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary - 300) * tax2+ 45;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else
//			{
//				printf("小时输入有误");
//				break;
//			}
//		case'c':			
//			printf("请输入工作小时数:");
//			scanf("%d", &hours);
//			if (hours <= 168)
//			{
//				salary = level1 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary - 300) * tax2 + 45;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else
//			{
//				printf("小时输入有误");
//				break;
//			}
//		case'd':			
//			printf("请输入工作小时数:");
//			scanf("%d", &hours);
//			if (hours <= 168)
//			{
//				salary = level1 * hours;
//				if (salary <= 300)
//				{
//					tax = salary * tax1;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else if (salary > 300 && salary <= 450)
//				{
//					tax = (salary - 300) * tax2 + 45;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				else
//				{
//					tax = (salary - 450) * tax3 + 75;
//					rev = salary - tax;
//					printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//				}
//				break;
//
//			}
//			else 
//			{
//				printf("小时输入有误");
//				break;
//			}
//		case 'q':
//			break;
//		case ' ':
//			break;
//		case '\n':
//			break;
//		default:
//			printf("输入无效\n");
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
//8.编写一个程序，显示一个提供加减乘除的菜单，获取用户的选项后提示用户输入两个数字，
// 然后执行用户刚才选择的操作。该程序只接受菜单提供的选项。
// 程序使用float类型的变量存储用户输入的数字，
// 如果用户输入失败，则允许再次输入。进行除法运算时，如果用户输入0作为第2个数（除数），
//程序应提示用户重新输入一个新值。该程序的一个运行示例如下。
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
//	getchar();                                       //这是改进之后的
//
//
//	return f;
//}
//void show_menu()
//{
//	printf("Enter the operation of your choice :\na.add\ns.subtract\nm.multiply\nd.divide\nq.quit\n");
//}