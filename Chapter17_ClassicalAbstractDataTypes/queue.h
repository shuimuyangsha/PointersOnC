#ifndef QUEUE_H
#define QUEUE_H

/* 
** һ������ģ��Ľӿ�
*/ 
#include "stdlib.h" 
#define QUEUE_TYPE int /* ����Ԫ�ص����� */

/*
** create_queue
** ����һ������. The argument indicates the maximum number
** of values that the queue will hold. NOTE: this applies only
** to the dynamically allocated array implementation.
*/
void create_queue(size_t size);
/*
** destroy_queue
** ����һ������. NOTE: this applies only to the linked and
** dynamically allocated array implementations.
*/
void destroy_queue(void);
/*
** insert
** ����������һ����Ԫ��. The argument is the value
** to be inserted.
*/
void insert(QUEUE_TYPE value);
/*
** delete
** �Ӷ������Ƴ�һ��Ԫ�ز����䶪��
*/
void delete(void);
/*
** first
** ���ض����е�һ��Ԫ�ص�ֵ
*/
QUEUE_TYPE first(void);
/*
** is_empty
** �������Ϊ�գ�����TRUE,���򷵻�FALSE
*/
int is_empty(void);
/*
** is_full
** �����������������TRUE,���򷵻�FALSE
*/
int is_full(void);

#endif // !QUEUE_H
