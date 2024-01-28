#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 要求将2英寻转换成英尺
//int main()
//{
//	int feet, fathoms;//feet是英尺，fathoms是英寻
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("在%d英寻中有%d英尺!\n", fathoms, feet);
//	printf("是的，我说的是%d英尺\n", 6 * fathoms);
//	return 0;
//}

////多个函数
//void butler();           //创建一个名为butler（名为管家）的函数
//int main()
//{
//	printf("I will summon the butler function.\n");
//	butler();             // 在main函数中调用  
//	printf("Yes,Bring me some tea and writeable DVDs.\n");
//
//	return 0;
//}
//
//void butler()           // 定义butler函数的作用
//{
//	printf("You rang,Sir?\n");
//}



//下面是练习*多练可以熟练语感
// 
// 
// 
//1、编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。再调用一次printf()函数,
//把你的名和姓分别打印在两行。然后，再调用两次printf()函数, 把你的名和姓打印在一行。
//输出应如下所示（当然要把示例的内容换成你的名字):
//Gustav Mahler
//Gustav
//Mahler
//Gustav Mahler
//int main()
//{
//	printf("Pony Hun\n");
//	printf("Hun\n");
//	printf("Pony\n");
//	printf("Pony Hun\n");
//	return 0;
//}
// 
// 
//2.编写一个程序,打印你的姓名和地址。
//int main()
//{
//	printf("name is ponyhun\n");
//	printf("address is earth\n");
//	return 0;
//}
// 
// 
//3．编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年
//int main()
//{
//	int age, days;
//	age = 21;
//	days = age * 365;
//	printf("%d\n%d\n", age, days);
//	return 0;
//}
// 
// 
//4．编写一个程序,生成以下输出:
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//Which nobody can deny!
//除了main()函数以外，该程序还要调用两个自定义函数:一个名为jolly()，用于打印前3条消息,调用一次打印一条;另一个函数名为deny(), 打印最后一条消息。
//void jolly();
//void deny();
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//void jolly()
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny()
//{
//	printf("Which nobody can deny!\n");
//}
// 
// 
//5．编写一个程序,生成以下输出:
//Brazil,Russia, India, China
//India, China
//Brazil, Russia
//除了main()以外，该程序还要调用两个自定义函数:一个名为 br()，调用一次打印一次“Brazi.Russia";另一个名为ic()，调用一次打印一次“India,China”。其他内容在main ()函数中完成。
//void br();
//void ic();
//int main()
//{
//	br();
//	printf(", ");
//	ic();
//	ic();
//	br();
//	return 0;
//}
//void br()
//{
//	printf("Brazil, Russia");
//}
//void ic()
//{
//	printf("India, China\n");
//}
//
//
//6.编写一个程序，创建一个整型变量toes，并将toes 设置为10。程序中还要计算toes的两倍和toes的平方。该程序应打印3个值,并分别描述以示区分。
//int main()
//{
//	int toes;
//	toes = 10;
//	printf("toes的值=%d\n", toes);
//	printf("toes两倍的值=%d\n", toes * 2);
//	printf("toes的平方的值%d\n", toes * toes);
//	return 0;
//}
// 
// 
//7.许多研究表明, 微笑益处多多。编写一个程序，生成以下格式的输出:
//Smile!Smile!Smile!
//Smile!Smile!
//Smile!
//该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
//void smile();
//int main()
//{
//	smile();
//	smile();
//	smile();
//	printf("\n");
//	smile();
//	smile();
//	printf("\n");
//	smile();
//
//	return 0;
//}
//void smile()
//{
//	printf("Smile!");
//}
// 
// 
//8．在C语言中，函数可以调用另一个函数。编写一个程序，
//调用一个名为one_three()的函数。该函数在一行打印单词“one”，再调用第2个函数two(),然后在另一行打印单词“three"。
//two ()函数在一行显示单词在“two”。main函数在调用one_three()函数前要打印短语“starting now : "，并在调用完毕后显示短语“done！”
//因此，该程序的输出应如下所示:
//starting now:
//one
//two
//three
//done!
//void one_three();
//void two();
//int main()
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!\n");
//	return 0;
//}
//void one_three()
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two()
//{
//	printf("two\n");
//}


//学到了老哥们，多敲代码确实会很有手感，现在敲函数感觉非常舒服了
//这是我用书本《c primer plus》学习C语言并且写GitHub日记的第二天