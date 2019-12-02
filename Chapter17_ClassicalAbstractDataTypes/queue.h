#ifndef QUEUE_H
#define QUEUE_H

/* 
** 一个队列模块的接口
*/ 
#include "stdlib.h" 
#define QUEUE_TYPE int /* 队列元素的类型 */

/*
** create_queue
** 创建一个队列. The argument indicates the maximum number
** of values that the queue will hold. NOTE: this applies only
** to the dynamically allocated array implementation.
*/
void create_queue(size_t size);
/*
** destroy_queue
** 销毁一个队列. NOTE: this applies only to the linked and
** dynamically allocated array implementations.
*/
void destroy_queue(void);
/*
** insert
** 向队列中添加一个新元素. The argument is the value
** to be inserted.
*/
void insert(QUEUE_TYPE value);
/*
** delete
** 从队列中移除一个元素并将其丢弃
*/
void delete(void);
/*
** first
** 返回队列中第一个元素的值
*/
QUEUE_TYPE first(void);
/*
** is_empty
** 如果队列为空，返回TRUE,否则返回FALSE
*/
int is_empty(void);
/*
** is_full
** 如果队列已满，返回TRUE,否则返回FALSE
*/
int is_full(void);

#endif // !QUEUE_H
