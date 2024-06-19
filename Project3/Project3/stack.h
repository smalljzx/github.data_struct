#include <stdio.h>
#include <stdlib.h>
#define __DEFINE_H
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;



#define MAXSTACK 100
typedef char StackElemType;	//ջ��������
typedef struct _SqStack		//˳��ջ
{
	StackElemType* base;
	StackElemType* top;
	int stacksize;
}SqStack;

//ջ�ĳ�ʼ��
Status initStack(SqStack* s)
{
	s->base = (StackElemType*)malloc(sizeof(StackElemType) * MAXSTACK);//���ٵĿռ������ڴ浥Ԫ�׵�ַ����
	if (!s->base)
		exit(OVERFLOW);
	s->top = s->base;		//ջ����ָ��ջ��
	s->stacksize = MAXSTACK;//ջ������
	return OK;
}
//��ջ
Status push(SqStack* s, StackElemType e)
{
	if (s->top - s->base == s->stacksize)
		return ERROR;	//��ʾ��ջ����
	*(s->top++) = e;	//topָ����ڴ浥Ԫ���e,��topָ����һ���ڴ浥Ԫ
	return OK;
}
//��ջ	
//�� base == top ʱ����ʾջ��
Status Pop(SqStack* s, StackElemType* e)
{
	if (s->base == s->top)	//ջ��
		return ERROR;
	*e = *(--(s->top));
	return OK;
}
Status isEmpty(SqStack* s)
{
	if (s->base == s->top)
		return TRUE;
	else
		return FALSE;
}
Status isFull(SqStack* s)
{
	if (s->top - s->base == s->stacksize)
		return TRUE;
	else
		return FALSE;
}
StackElemType getTop(SqStack* s)
{
	if (!isEmpty(s))
		return *(s->top - 1);
}