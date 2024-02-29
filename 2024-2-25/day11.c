/*25号,今天正式换成小熊猫c++来写日记,这两天是真的冷啊,昨天给自己放一天假去了解java了,起码认识了一下主函数*/

/*今天学习字符串,看到数组和指针来处理字符串的内容的时候又感觉有新东西了,我原本以为数组和指针是一回事的,数组就是指针,没想到在字符串这里有区别*/

/*今天是29号,这个编程练习就花费我两天时间,而且还是看了参考书,真的好难,但也学到写法了,我感觉这样子弄太慢了,我这个脑子卷算法还是算了,以学习为主吧
以后应该很难说用c语言去写东西了,一个是能力,这个可以练,另一个是学历,这个不允许太难了,命令行的内容属实让我耳目一新,还好去c语言吧提问了,
第一回做到命令行题目的时候弄了我三个点没弄出来,压根不是难,是我不了解命令行,连怎么运行都不知道,还好c语言的吧主帮我解答了问题是用cmd运行exe程序,
我又给忘了前几天看java的时候才学了一点点命令行的知识,看来是太生疏了,没想到这一章的东西还挺多的,学个库函数挺费劲,那么多函数用来用去真的很费脑子啊*/

//#include <stdio.h>
//#define MSG "I'm special"
//int main()            /*字符串的地址*/
//{
//	char ar[]=MSG;
//	const char *pt=MSG;
//	printf("\"I'm special\"的地址是%p\n","I'm special");
//	printf("       数组ar的地址是%p\n",ar);/*字符串跟数组所存储的位置不一样,说明字符串会生成两个副本,一是数组,二是字符串的地址,这个地址在静态区*/
//	printf("   指针变量pt的地址是%p\n",pt);
//	printf("     	  MSG的地址是%p\n",MSG);
//	printf("\"I'm special\"的地址是%p\n","I'm special");/*相同的字符串会被存在同一个地址*/
//	return 0;
//}
//
//#include <stdio.h>
//#define STLEN 10
//int main()
//{
//	char words[STLEN];
//	puts("enter string (empty line to quit):");						/*fgets函数和fputs函数*/
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
//		fputs(words, stdout);
//	}
//	puts("done!");
//	return 0;
//}
//


/*学一堆字符串函数,头有点晕啊*/               /*这个函数是strcat,可以将第二个字符串拼接到第一个字符串上面*/
//#include <stdio.h>
//#include <string.h>
//#define SIZE 80
//char *s_gets(char* st, int n);
//int main()
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//	puts("What is your favorite flower?");
//	if (s_gets(flower, SIZE)) {
//		strcat(flower, addon);
//		puts(flower);
//		puts(addon);
//	}
//	else
//		puts("end of file encountered!");
//	puts("bye!");
//	return 0;
//}
//char*s_gets(char *st,int n)
//{
//	char*ret_val;
//	ret_val=fgets(st,n,stdin);
//	if(ret_val)
//	{
//		while(*st!='\n'&&*st!='\0')    /*正常录入字符,用首字符来做检测是否正常输入*/
//			st++;
//		if(*st=='\n')
//			*st='\0';
//		else
//			while(getchar()!='\n')
//			{
//				continue;      /*用来吃掉没有意义的字符*/
//			}
//	}
//	return ret_val;
//}

//char*s_gets(char *st,int n)
//{
//	char*ret_val;
//	int i=0;
//	ret_val=fgets(st,n,stdin);
//	if(ret_val)
//	{
//		while(st[i]!='\n'&&st[i]!='\0')    /*正常录入字符,用首字符来做检测是否正常输入*/
//			i++;
//		if(st[i]=='\n')
//			st[i]='\0';
//		else
//			while(getchar()!='\n')
//			{
//				continue;      /*用来吃掉没有意义的字符*/
//			}
//	}
//	return ret_val;
//}


/*吐槽一下第七题,狗屎中的狗屎,题意相当模糊,什么叫目标字符串不能以空字符结尾,那到底要不要处理末尾的空字符,少了空字符还能叫字符串吗,给我卡了好久,搞得我直接去抄答案了*/

/*11题难到我了,我看了下参考书,把自己有关函数的理解写一下,参考书的代码依旧是有bug的,我因为技术不行,也不知道怎么改正*/

/*11，编写一个程序，读入10个字符串或者读到EOF时停止。该程序为用户提供一个有5个选项的菜单：
打印源字符串列表、以ASCI1中的顺序打印字符串、按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符串、退出。菜单可以循环显示，除非用户选择退出选项。
当然，该程序要能真正完成菜单中各选项的功能*/

/*第一句话,说明要创建两个东西,第一个是容纳十个字符串的数组,也就是chars[10][80],同时由于二维数组的特殊性,需要创建一个用来输入字符串的函数,可以直接用fgets函数代劳,
然后fgets()的元素替换为chars的元素chars[][],fgets要的是地址,所以元素为chars[],即for循环下的fgets(chars[i],80,stdin).

第二个东西是选择按钮,可以创建一个int select变量来做选择*/

/*只提供五个选项,用Switch是最好的选择*/

/*根据最后面说的菜单循环显示,肯定是需要创建一个void菜单函数,同时还需要来一个退出选项进入while(select!=5),这个时候让5作为退出选项*/

/*打印源字符串,简简单单的函数,只需要按照顺序打印即可,一个for循环,外圈chars[i]从0到末尾打印%s即可*/

/*按顺序打印字符串,这是我在参考书上面学到的,专门针对二维数组来做顺序的排列:
创建一个二维数组order[10][2],每个元素都有两个int值,第一个是用来做序号的order[][0],第二个是做排序依据的order[][1]
至于函数的设计,首先肯定是要有能提供换位置的临时变量temp[2],也是两个变量,一个存序号,一个存排序依据,
然后再用循环来判断,老规矩for循环,可以将order的元素全部循环一次,因为导入的第二个参数是字符串的数量,作为索引是要-1的,所以在设置循环的时候要将字符串-1
再用一个嵌套for循环让被循环的元素同所有的元素进行比较
第二个for循环中的判断条件if的设置,根据题意ASCII顺序从小到大,长度递增,字符串首单词的长度.这都说明的要将小的排在前面
这样就可以用最小值的原理来设置if,比如说min>arr[i],这个时候min就不是最小的,就需要跟arr[i]换位置,
如果使用小于,就会像max<arr[i]一样,会把大的换到前面去,非要用小于可以改for循环中i的顺序,将i设置为10,然后i>10的时候来循环i--*/
/*每次换位置就是用temp[0]来存储两者之一任意一者的序号order[j][0],temp[1]来存储order[j][1],然后用order[j][0]来换取order[j+1][0],另一个元素同理*/

/*有了排序函数,一切变得轻松了*/

/*以ASCII的顺序来打印的话,先创建一个可以进入排序函数的二维数组order[][2]
可以将每个字符串的首字符chars[i][0]作为排序依据导入order[][1],顺序标号i则放入order[][0],这样可以防止错位*/

/*以长度顺序打印,将strlen(chars[i])来导入进order[i][1]*/

/*以首单词长度打印,需要一个获取首单词长度的函数,设计一个get_word_length函数,参数是chars[j],
首先创建一个int变量length,用length来存储长度,创建一个char*指针in来存储参数上面的字符串,然后直接用while循环结合ctype.h
的isalpha来跳过非字母,即while(isalpha(*in)==0) *in++,来跳过首单词前面的杂项,

也可以用for循环,这样不需要创建in,但是需要再导入一个参数80,让chars[][80]来判断chars[][i],
for(int i=0;isalpha(chars[i])==0;i++)             此时的实参chars[i]实际上是由外层chars[j][]来导入的

然后继续用循环while(isalpha(*in)!=0),*in++;来判断,同时让length++;最后return length*/
/*得到length之后将其带入order[i][1],使用for循环将10个get_word_length(chars[i])带入order[i][1],将序号带入order[i][0]
最后带入排序函数,本质上是将order[i][0]与order[i+1][0]的位置进行替换,更换出序号来
再用for循环打印,将这些带入chars[order[i][0]],就会以order[i][0]所代表的数字来打印,可能是chars[4],chars[2],chars[3]这种顺序来打印*/

