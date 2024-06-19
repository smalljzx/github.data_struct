//#pragma once
//#include <stdio.h>
//#include <stdlib.h>
//#define __DEFINE_H
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//typedef int Status;
//#define MAXSTACK 100
//typedef char StackElemType; //栈数据类型
//
////链栈的类型定义
//typedef struct _StackNode
//{
//	StackElemType data;
//	_StackNode* next;
//}StackNode,*LinkStack;
//
////链栈初始化
//Status initStack(LinkStack* s)
//{
//	*s = NULL;
//	return OK;
//}
//
////链栈push
////在第一个push时，第一个节点的next指向nULL
//Status push(LinkStack *s,StackElemType e)
//{
//	LinkStack pnew = (LinkStack)malloc(sizeof(StackNode));//指针变量pnew指向了(LinkStack)malloc(sizeof(StackNode))，只有一个值
//	pnew->data = e;
//	pnew->next = *s;	//在第一次push时。第一个节点的next指向NULL的，因此初始化了*S=NULL
//	*s = pnew;
//	return OK;
//}
//
////Pop
//Status Pop(LinkStack* s, StackElemType* e)
//{
//	LinkStack pfree = *s;	//临时保存栈顶节点s
//	*e = (*s)->data;
//	*s = (*s)->next;
//	free(pfree);
//	return OK;
//}
//StackElemType GetTop(LinkStack* S) {
//	if (*S)
//		return (*S)->data;
//}
//Status IsEmpty(LinkStack* S) {
//	if (!(*S))
//		return TRUE;
//	else
//		return FALSE;
//}