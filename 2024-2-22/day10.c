#define _CRT_SECURE_NO_WARNINGS
////��ʮ�£���Ҫѧϰ�й�������¶�������ָ��    2��22�գ�����ȥ���Ǳ߼��ϰ᷿���˷�һ��ѧϰʱ�䣬������Ų���
//#include<stdio.h>
//#define SIZE 4
//int main()
//{
//	short dates[SIZE];
//	short* pti;
//	double bills[SIZE];
//	double* ptf;
//	pti = dates;    //datas�ȼ���&dates[0]
//	ptf = bills;	//bills==bills[0]
//	printf("%23s %15s\n", "short", "double");
//	for (int i = 0; i < SIZE; i++)
//		printf("pointers+%d:%10p %10p\n",i,pti+i,ptf+i);
//	return 0;
//}//��ӡ���˵���˴洢��Ԫ�Ĵ�С��short��2��double��8,���Ǽ�һ�ǼӴ洢��Ԫ��С
//

//#include<stdio.h>
//#define SIZE 10
//int sum(int ar[], int n);//ar[]���ݵ���һ����ַ����*ar�ȼ�
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


//#include<stdio.h>               /*const�Ĳ�ͬ�÷�*/
//int main()
//{
//	double rates[5] = { 88.99,100.12,59.45,183.11,340.5 };
//	const double locked[4] = { 0.08,0.075,0.0725,0.07 };    /*��������Ԫ�ز��ܱ��ı�*/
//	const double* pd = rates;
//	pd = rates + 1;		
//	pd = locked;					/*������������ָ���ֵ,�����Ը�����ָ��ĵ�ַ*/
//	printf("%lf\n", *pd);
//	double *const pc = rates;		/*ֻ�ܸ�����ָ��ĵ�ַ�ϵ�ֵ*/
//	*pc = 92.99;
//	printf("%lf\n", *pc);
//	double * pnc = rates;
//	pnc = locked;
//	*pnc = 100.0L;
//	printf("%lf\n", locked[0]);
//	printf("%lf\n", *pd);
//	const double* const pe=rates;     /*const��ǰ������ָ���β�ͣ�ɥʧ���޸ĵ�ַ�ϵ�ֵ������
//									    const�ں�������ָ���ͷ��ɥʧ�޸�ָ�������*/
//	return 0;
//}
//
// 
// 
//#include<stdio.h>				/*�йض�ά�����ָ��*/
//int main()
//{
//	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
//	int(*pz)[2];              /*����һ��ָ�������ָ�룬ÿ������������Ԫ�أ���ָ��*/
//	int* pd[2];					/*����һ�����飬�ں�����ָ��,��һά����*/
//	pz = zippo;
//	printf("	%zu\n", sizeof(int));							/*int�Ĵ�С��4�ֽ�*/
//	printf("	pz=%p,		pz+1=%p\n", pz, pz + 1);          /*�����ʾ���߱�ǰ�߶���8�ֽڣ���2��int�Ĵ�С��pz��Ϊָ��ָ�����һά����ĵ�ַ���������һά����֮��ļ��Ϊ����int*/
//	printf("	pz[0]=%p	pz[0]+1=%p\n", pz[0], pz[0] + 1);	/*���߶���4�ֽڣ�һ��int�Ĵ�С,��Ϊpz[0]��Ϊһ��ָ��ָ�����һά�����Ԫ�أ���һά�����Ԫ�ؼ��Ϊһ��int*/
//	printf("	*pz=%p		*pz+1=%p\n", *pz, *pz + 1);			/*   *pz��pz[0]��һ����˼*/
//	printf("	pz[0][0]=%d\n", pz[0][0]);						/*�����һ��һά����ĵ�һ��Ԫ��*/
//	printf("	*pz[0]=%d\n", *pz[0]);							/*   *pz��pz[0]��һ����˼     */
//	printf("	**pz=%d\n", **pz);								/*    **pz��������*��*pz��*/
//	printf("	pz[2][1]=%d\n", pz[2][1]);						/*  ���������һά����ĵڶ���Ԫ�� */
//	printf("	*(*(pz+2)+1)=%d\n", *(*(pz + 2) + 1));			/*����pz+2������&pz[2]��Ҳ���ǵ�����һά����ĵ�ַ��*(pz+2)�ǵ�����һά����ĵ�һ��Ԫ�صĵ�ַ&pz[2][0]
//																(*(pz+2)+1)���ǵ�����һά����ڶ���Ԫ�صĵ�ַ��ͬ�����&pz[2][1]
//																���*(*(pz+2)+1)����*&pz[2][1]��Ҳ���Ǽ������֮�����ҵ���ֵ*/
//	return 0;
//}
//
//

//����ʮ���ˣ������ҵд����һ�죬�����������������ر��Ǳ䳤���飬�����ȥ����С��èc++��˭��vs�����ݱ䳤������
//��һ˵һС��èc++ȷʵ���ã������ֿ���ѧ�¶����ˣ����ڸо�״̬��ã�ָ��ϸ΢ǳ�������Ū����
