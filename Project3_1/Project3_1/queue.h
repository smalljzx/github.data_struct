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
	int front, rere;	//front为对头下标，rere为队尾下标(rere下标的位置不存放元素)

}SqQueue;
//入队rere+1，出队front+1，但是此种情况存在问题
//如果front==rere表示队空，而front==(rere+1)%QMAXSIZE时表示队满

//顺环队列初始化
Status initQueue(SqQueue* q)
{
	if (!(q->base = (QElemType*)malloc(sizeof(QElemType) * QMAXSIZE)))
		exit(OVERFLOW);
	q->front = q->rere = 0;
	return OK;
}

//队列入队
Status entryQ(SqQueue* q, QElemType e)
{
	if ((q->rere + 1) % QMAXSIZE == q->front)	//判断是否队满
		return ERROR;
	q->base[q->rere] = e;
	q->rere = (q->rere + 1) % QMAXSIZE;
	return OK;	 
}

//队列出队
Status OutQ(SqQueue* q, QElemType* e)
{
	if (q->rere = q->front)	//判断是否队满
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