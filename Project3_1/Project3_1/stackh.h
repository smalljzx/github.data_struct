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
//typedef char StackElemType; //ջ��������
//
////��ջ�����Ͷ���
//typedef struct _StackNode
//{
//	StackElemType data;
//	_StackNode* next;
//}StackNode,*LinkStack;
//
////��ջ��ʼ��
//Status initStack(LinkStack* s)
//{
//	*s = NULL;
//	return OK;
//}
//
////��ջpush
////�ڵ�һ��pushʱ����һ���ڵ��nextָ��nULL
//Status push(LinkStack *s,StackElemType e)
//{
//	LinkStack pnew = (LinkStack)malloc(sizeof(StackNode));//ָ�����pnewָ����(LinkStack)malloc(sizeof(StackNode))��ֻ��һ��ֵ
//	pnew->data = e;
//	pnew->next = *s;	//�ڵ�һ��pushʱ����һ���ڵ��nextָ��NULL�ģ���˳�ʼ����*S=NULL
//	*s = pnew;
//	return OK;
//}
//
////Pop
//Status Pop(LinkStack* s, StackElemType* e)
//{
//	LinkStack pfree = *s;	//��ʱ����ջ���ڵ�s
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