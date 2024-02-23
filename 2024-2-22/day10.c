#define _CRT_SECURE_NO_WARNINGS
////第十章，主要学习有关数组的新东西还有指针    2月22日，昨天去姐那边加上搬房间浪费一天学习时间，今天接着补上
//#include<stdio.h>
//#define SIZE 4
//int main()
//{
//	short dates[SIZE];
//	short* pti;
//	double bills[SIZE];
//	double* ptf;
//	pti = dates;    //datas等价于&dates[0]
//	ptf = bills;	//bills==bills[0]
//	printf("%23s %15s\n", "short", "double");
//	for (int i = 0; i < SIZE; i++)
//		printf("pointers+%d:%10p %10p\n",i,pti+i,ptf+i);
//	return 0;
//}//打印结果说明了存储单元的大小，short是2，double是8,但是加一是加存储单元大小
//

//#include<stdio.h>
//#define SIZE 10
//int sum(int ar[], int n);//ar[]传递的是一个地址，与*ar等价
//int sump(int* start, int* end);
//int main()
//{
//	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer;
//	answer = sum(marbles, SIZE);
//	answer = sump(marbles, marbles + SIZE);
//	printf("The total number of marbles is %ld.\n",answer);
//	printf("The size of marbles is %zd bytes.\n", sizeof(marbles));
//	return 0;
//}
//
//int sum(int ar[], int n)
//{
//	int i;
//	int total = 0;
//	for ( i = 0; i < n; i++)
//	{
//		total += ar[i];
//	}
//	printf("The size of ar is %zd bytes.\n",sizeof(ar));
//	return total;
//}

//int sump(int*start,int*end)
//{
//	int total=0;
//	for(; start < end; start++)
//	{
//		total += *start;
//	}
//	return total;
//}


//#include<stdio.h>               /*const的不同用法*/
//int main()
//{
//	double rates[5] = { 88.99,100.12,59.45,183.11,340.5 };
//	const double locked[4] = { 0.08,0.075,0.0725,0.07 };    /*这个数组的元素不能被改变*/
//	const double* pd = rates;
//	pd = rates + 1;		
//	pd = locked;					/*不可用来更改指向的值,但可以更改所指向的地址*/
//	printf("%lf\n", *pd);
//	double *const pc = rates;		/*只能更改所指向的地址上的值*/
//	*pc = 92.99;
//	printf("%lf\n", *pc);
//	double * pnc = rates;
//	pnc = locked;
//	*pnc = 100.0L;
//	printf("%lf\n", locked[0]);
//	printf("%lf\n", *pd);
//	const double* const pe=rates;     /*const在前锁定了指针的尾巴，丧失了修改地址上的值得能力
//									    const在后锁定了指针的头，丧失修改指向的能力*/
//	return 0;
//}
//
// 
// 
//#include<stdio.h>				/*有关多维数组的指针*/
//int main()
//{
//	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
//	int(*pz)[2];              /*创建一个指向数组的指针，每个数组有两个元素，是指针*/
//	int* pd[2];					/*创建一个数组，内含两个指针,是一维数组*/
//	pz = zippo;
//	printf("	%zu\n", sizeof(int));							/*int的大小是4字节*/
//	printf("	pz=%p,		pz+1=%p\n", pz, pz + 1);          /*结果显示后者比前者多了8字节，即2个int的大小，pz作为指针指向的是一维数组的地址，该数组的一维数组之间的间隔为两个int*/
//	printf("	pz[0]=%p	pz[0]+1=%p\n", pz[0], pz[0] + 1);	/*后者多了4字节，一个int的大小,因为pz[0]作为一个指针指向的是一维数组的元素，而一维数组的元素间隔为一个int*/
//	printf("	*pz=%p		*pz+1=%p\n", *pz, *pz + 1);			/*   *pz和pz[0]是一个意思*/
//	printf("	pz[0][0]=%d\n", pz[0][0]);						/*代表第一个一维数组的第一个元素*/
//	printf("	*pz[0]=%d\n", *pz[0]);							/*   *pz和pz[0]是一个意思     */
//	printf("	**pz=%d\n", **pz);								/*    **pz可以理解成*（*pz）*/
//	printf("	pz[2][1]=%d\n", pz[2][1]);						/*  代表第三个一维数组的第二个元素 */
//	printf("	*(*(pz+2)+1)=%d\n", *(*(pz + 2) + 1));			/*首先pz+2，就是&pz[2]，也就是第三个一维数组的地址，*(pz+2)是第三个一维数组的第一个元素的地址&pz[2][0]
//																(*(pz+2)+1)就是第三个一维数组第二个元素的地址，同理就是&pz[2][1]
//																最后*(*(pz+2)+1)就是*&pz[2][1]，也就是间接运算之后所找到的值*/
//	return 0;
//}
//
//

//晚上十点了，这个作业写了我一天，熟练度又有提升，特别是变长数组，搞的我去下了小熊猫c++，谁让vs不兼容变长数组呢
//有一说一小熊猫c++确实好用，明天又可以学新东西了，现在感觉状态真好，指针细微浅层两天就弄开了
