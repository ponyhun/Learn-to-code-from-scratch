#define _CRT_SECURE_NO_WARNINGS
//2月13，学习了新的头文件，分别是ctype.h  iso646.h
/*写一个能统计输入字符、单词、行数的程序*/

//#include<stdio.h>
//#include<ctype.h>
//#include<stdbool.h>
//#define STOP '|'
//int main()
//{
//	char c;  /*用来存储写入的字符*/
//	char prev;/*写入的前一个字符*/
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;/*不完整的行数*/
//	bool inword = false;/*得益于stdbool的头文件，将0写成false*/
//	printf("请输入需要分析的文本:(输入|即可结算)\n");
//	prev = '\n';/*这个初始化仅仅用于提示，没什么太大的意义*/
//	while ((c=getchar())!=STOP)
//	{
//		n_chars++; /*不忽略任意一个字符包括空格的输入*/
//		if (c=='\n')
//		{
//			n_lines++;
//		}
//		if (!isspace(c)&&!inword)/*如果c不是空白字符且条件为真*/
//		{
//			inword = true;           /*此时inword变成了真,就可以进行下一波判断，再次输入一个字符，三个if都不会执行，但会存储prev*/
//			n_words++;               
//		}
//		if (isspace(c)&&inword)     /*等到真的输入空格时，这个条件语句开始执行，这个时候就激活了第二个if，再输入字符就会增加word的数量了*/
//		{
//			inword = false;
//		}
//		prev = c;                 
//	}
//	if (prev!='\n')    /*因为超过上限之后会自动给prev一个换行，直接到下一行，怕不够用*/
//	{
//		p_lines = 1;
//	}
//	printf("总字符数量为:%d 总单词数量:%d 总行数为:%d\n",n_chars,n_words,n_lines );
//	printf("不完整行数%d\n",p_lines);
//	return 0;
//}

//?的用法，貌似我之前浅浅了解爬虫的时候有接触过，用来简化if else
//#include<stdio.h>
//#define COVERAGE 350 /*每一罐油漆可以刷的面积*/
//int main()
//{
//	int wall;
//	int cans = 0;
//	printf("请输入墙的面积:");
//	while (scanf("%d",&wall) == 1)
//	{
//		cans = wall / COVERAGE;
//		cans += (wall % COVERAGE == 0) ? 0 : 1;
//		printf("需要%d罐\n", cans);
//	}
//	printf("Done!");
//	return 0;
//}
//
// 
/*编程练习*/
//1．编写一个程序读取输入，读到＃字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
//
//#define SPACE ' '
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int n_space=0, n_line=0, n_chars=0;
//	printf("请输入你要测试的字符");
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
//	printf("空格数=%d\n换行符数=%d\n其他字符数量=%d\n",n_space,n_line,n_chars);
//	return 0;
//}
// 
// 
//2．编写一个程序读取输入，读到＃字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。
// 每行打印8个“字符—ASCII码”组合。建议：使用字符计数和求模运算符（％）在每8个循环周期时打印一个换行符。
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
//3．编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
//
//#include<stdio.h>
//int main()
//{
//	int integer, odd = 0, even = 0, sum1 = 0, sum2 = 0;
//	printf("请输入整数");
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
//	printf("偶数个数为%d，奇数个数为%d\n", even, odd);
//	printf("偶数平均数为%f,奇数平均数为%f", 1.0*sum1 / even, 1.0*sum2 / odd);
//	return 0;
//}
// 
// 
//4．使用if else语句编写一个程序读取输入，读到＃停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char ch;
//	printf("请输入内容（输入#退出）\n");
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
//	printf("进行了%d次替换", i);
//	return 0;
//}
// 
// 
//5．使用switch重写练习4。
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char ch;
//	printf("请输入内容（输入#退出）\n");
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
//	printf("进行了%d次替换", i);
//	return 0;
//}
//
// 
//6．编写程序读取输入，读到＃停止，报告ei出现的次数。
// 注意该程序要记录前一个字符和当前字符。用“Receive your eieio award”这样的输入来测试。
// 
//#include<stdio.h>
//int main()
//{
//	char ch=0, prev=0;
//	int i = 0;
//	printf("请输入文本(#停止)\n");
//	while ((ch=getchar())!='#')
//	{
//		if (ch=='i'&&prev=='e')
//		{
//			i++;
//		}
//		prev = ch;
//	}
//	printf("ei出现的次数为%d\n", i);
//	return 0;
//}
// 
// 
//7．编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设
//a．基本工资＝10.00美元／小时
//b．加班（超过40小时）＝1.5倍的时间
//c.税率：前300美元为15％
// 续150美元为20％
//余下的为25％
//用＃define定义符号常量。不用在意是否符合当前的税法。
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
//		printf("你输入的值有误");
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
//			printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//		}
//		else if (salary > 300 && salary <= 450)
//		{
//			rev = 255 + 0.8 * (salary-300);
//			tax = salary - rev;
//			printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//		}
//		else
//		{
//			rev = 255 + 120 + 0.75 * (salary-450);
//			tax = salary - rev;
//			printf("你的工资是%.2f\n你的税款是%.2f\n税后收入是%.2f", salary, tax, rev);
//		}
//	return 0;
//}
// 
// 
//8．修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。
// 运行程序后，显示的菜单应该类似这样：
//Enter the number corresponding to the desired pay rate or action: 
//1) $8.75 / hr				2) $9.33 / hr 
//3) $10.00 / hr			4) $11.20 / hr
//5) quit
//如果选择1～4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非户输入5。
//如果输入1～5以外的数字，程序应提醒用户输入正确的选项，然后再重复显示要示用户输入。使用＃define创建符号常量表示各工资等级和税率。
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
//		if (ch=='5')                       /*因为用了getchar，所以都是字符*/
//			break; 
//		switch (ch)
//		{
//		case'1':
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
//		case'2':
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
//		case'3':			
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
//		case'4':			
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
//		case '5':
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
//	return 0;
//}
// 
// 
// 9.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
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
//10.1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级
//下面是该税收计划的摘要（美元数为应征税的收入）：
//
//类别                                        税金
//单身                                        17850美元按15％计，超出部分按28％计
//户主                                        23900美元按15％计，超出部分按28％计
//已婚，共有                                  29750美元按15％计，超出部分按28％计
//已婚，离异                                  14875美元按15％计，超出部分按28％计
//
//例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15x17850＋0.28x（20000—17850）美元。编写一个程序，
//让用户指定缴纳税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。
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
//	printf("请输入数字说明你的婚姻状况:(输入字母退出)\n");
//	printf("1)单身\n2)户主\n3)已婚,共有\n4)已婚,离异\n");
//	while(scanf("%d", &choi)==1)
//	{
//		switch (choi)
//		{
//		case 1:
//			printf("你的婚姻状况是单身\n请输入你的工资:\n");
//			scanf("%f", &salary);
//			if (salary <= alone)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = alone * 0.15 + (salary - alone) * 0.28;
//			}
//			printf("所需缴纳的税款为%.2f\n", tax);
//			break;
//		case 2:
//			printf("你的婚姻状况是户主\n请输入你的工资:\n");
//			scanf("%f", &salary);
//			if (salary <= host)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = host * 0.15 + (salary - host) * 0.28;
//			}
//			printf("所需缴纳的税款为%.2f\n", tax);
//			break;
//		case 3:
//			printf("你的婚姻状况是已婚，共有\n请输入你的工资:\n");
//			scanf("%f", &salary);
//			if (salary <= married)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = married * 0.15 + (salary - married) * 0.28;
//			}
//			printf("所需缴纳的税款为%.2f\n", tax);
//			break;
//		case 4:
//			printf("你的婚姻状况是已婚，离异\n请输入你的工资:\n");
//			scanf("%f", &salary);
//			if (salary <= marr_b)
//			{
//				tax = salary * 0.15;
//			}
//			else
//			{
//				tax = marr_b * 0.15 + (salary - marr_b) * 0.28;
//			}
//			printf("所需缴纳的税款为%.2f\n", tax);
//			break;
//		default:
//			printf("无效，请重新输入\n");
//			break;
//		}
//		printf("请输入数字说明你的婚姻状况:(输入字母退出)\n");
//		printf("1)单身\n2)户主\n3)已婚,共有\n4)已婚,离异\n");
//	}
//	return 0;
//}
// 
// 
//11．ABC邮购杂货店出售的洋蓟售价为2.05美元／磅，甜菜售价为1.15美元／磅，胡萝卜售价为1.09美元／磅。
//在添加运费之前，100美元的订单有5％的打折优惠。
// 少于或等于5磅的订单收取6.5美元的运费和包装费，
// 5磅～20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
// 编写一个程序，在循环中用switch 语句实现用户输入不同的字母时有不同的响应，
// 即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，q是退出订购。
// 程序要记录累计的重量。
// 即，如果用户输入4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅的甜菜。
// 然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
// 随后，程序应显示所有的购买信息：
// 物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
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
//	printf("洋蓟售价为2.05美元／磅\n甜菜售价为1.15美元／磅\n胡萝卜售价为1.09美元／磅\n");
//	printf("a*洋蓟\nb*甜菜\nc*胡萝卜\n");
//	printf("请输入字母代表你购买的菜品(输入q退出):\n");
//	scanf("%c", &ch);
//	while (ch!='q')
//	{
//		switch (ch)
//		{
//		case 'a':
//			printf("请输入重量：\n");
//			scanf("%f", &weight);
//		    weight_a += weight;
//			break;
//		case 'b':
//			printf("请输入重量：\n");
//			scanf("%f", &weight);
//			weight_b += weight;
//			break;
//		case 'c':
//			printf("请输入重量：\n");
//			scanf("%f", &weight);
//			weight_c += weight;
//			break;
//		case '\n':
//			break;
//		default:
//			printf("输入有误,请重新输入\n");
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
//			printf("重量输入有误\n");
//			weight = 0;
//		}
//		printf("请输入字母代表你购买的菜品(输入q退出):\n");
//		printf("a*洋蓟\nb*甜菜\nc*胡萝卜\n");
//		getchar(ch);
//		scanf("%c",&ch);
//	}
//	if (cost>=100)
//	{
//		printf("订购的总质量为%f磅\n", weight);
//		printf("蔬菜费用%.2f\n", cost);
//		cost *= 0.95;
//		printf("订单费用为%.2f\n", cost );
//		printf("运费和包装费为%.2f\n", expense);
//		printf("总费用为%.2f\n", cost+expense);
//		printf("折扣为95折(打折不包括服务费)\n");
//	}
//	else if(cost<100&&cost>0)
//	{
//		printf("订购的总质量为%.2f磅\n", weight);
//		printf("蔬菜费用%.2f\n", cost);
//		printf("订单费用为%.2f\n", cost);
//		printf("运费和包装费为%.2f\n", expense);
//		printf("总费用为%.2f\n", cost + expense);
//	}
//	else 
//	{
//
//	}
//	if (ch == 'q')
//	{
//		printf("程序结束!");
//	}
//	return 0;
//}

/*这一章有点意思，难的题目有，简单的也有，质数那一题我学到东西了，然后用scanf来导入字符的话是一定要用一个getchar来吃掉回车的，这点搞了我好久*/