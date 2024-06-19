#pragma once
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
#define QMAXSIZE 100
typedef char QElemType;
typedef struct _SqQueue
{
	QElemType* base;
	int front, rere;	//frontΪ��ͷ�±꣬rereΪ��β�±�(rere�±��λ�ò����Ԫ��)

}SqQueue;
//���rere+1������front+1�����Ǵ��������������
//���front==rere��ʾ�ӿգ���front==(rere+1)%QMAXSIZEʱ��ʾ����

//˳�����г�ʼ��
Status initQueue(SqQueue* q)
{
	if (!(q->base = (QElemType*)malloc(sizeof(QElemType) * QMAXSIZE)))
		exit(OVERFLOW);
	q->front = q->rere = 0;
	return OK;
}

//�������
Status entryQ(SqQueue* q, QElemType e)
{
	if ((q->rere + 1) % QMAXSIZE == q->front)	//�ж��Ƿ����
		return ERROR;
	q->base[q->rere] = e;
	q->rere = (q->rere + 1) % QMAXSIZE;
	return OK;	 
}

//���г���
Status OutQ(SqQueue* q, QElemType* e)
{
	if (q->rere = q->front)	//�ж��Ƿ����
		return ERROR;
	*e = q->base[q->front];
	q->front = (q->front + 1) % QMAXSIZE;	
	return OK;
}

Status isEmpty(SqQueue* q)
{
	if (q->front == q->rere)
		return TRUE;
	else
		return FALSE;

}

Status isFull(SqQueue* q)
{
	if (((q->rere + 1) % QMAXSIZE == q->front))
		return TRUE;
	else
		return FALSE;

}

int length(SqQueue* q)
{
	return (q->rere - q->front + QMAXSIZE) % QMAXSIZE;
}