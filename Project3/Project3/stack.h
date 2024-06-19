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
typedef char StackElemType;	//栈数据类型
typedef struct _SqStack		//顺序栈
{
	StackElemType* base;
	StackElemType* top;
	int stacksize;
}SqStack;

//栈的初始化
Status initStack(SqStack* s)
{
	s->base = (StackElemType*)malloc(sizeof(StackElemType) * MAXSTACK);//开辟的空间是以内存单元首地址保存
	if (!s->base)
		exit(OVERFLOW);
	s->top = s->base;		//栈顶和指向栈底
	s->stacksize = MAXSTACK;//栈的容量
	return OK;
}
//入栈
Status push(SqStack* s, StackElemType e)
{
	if (s->top - s->base == s->stacksize)
		return ERROR;	//表示此栈已满
	*(s->top++) = e;	//top指向的内存单元存放e,且top指向下一个内存单元
	return OK;
}
//出栈	
//当 base == top 时，表示栈空
Status Pop(SqStack* s, StackElemType* e)
{
	if (s->base == s->top)	//栈空
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