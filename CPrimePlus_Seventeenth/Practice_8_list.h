#ifndef CPRIMEPLUS_SEVENTEENTH_PRACTICE_8_LIST_H
#define CPRIMEPLUS_SEVENTEENTH_PRACTICE_8_LIST_H
#include <stdbool.h>
/* 类型属性声明 */

#define KIND_NAME 45
// 一个实体内容的结构体
typedef struct {
    char pet_kind[KIND_NAME];
} List_Item;
// 一个节点的结构体
typedef struct list_node {
    List_Item list_item;
    struct list_node * next;
} List_Node;
// 列表定义为指向第一个item的指针
typedef struct {
    List_Node * head;
    List_Node * end;
}List;

/* 函数原型 */
// 操作        初始化一个链表
// 前置条件     plist指向一个链表
// 后置条件     链表初始化为空
void InitializeList(List * plist);

// 操作        判断链表是否为空
// 前置条件     plist指向一个初始化的链表
// 后置条件     如果链表为空 函数返回ture 否则返回false
bool ListIsEmpty(const List * plist);

// 操作        判断链表是否已满
// 前置条件     plist指向一个初始化的链表
// 后置条件     如果链表已满 函数返回true 否则返回false
bool ListIsFull(const List * plist);

// 操作        统计链表中的项数
// 前置条件     plist指向一个初始化的链表
// 后置条件     返回链表中的项数
unsigned int ListItemCount(const List * plist);

// 操作        在链表的末尾添加项
// 前置条件     plist指向一个初始化的链表
// 后置条件     如果可以在链表的末尾添加一项 成功则返回true 失败则返回false
bool AddListItem(List * plist, const List_Item * item);

// 操作        在链表中找到一个指定的项并且删除
// 前置条件     plist指向一个初始化的链表
// 后置条件     链表中数据项为item的项被删除
bool DeleteListNode(List * plist, const List_Item * item);

// 操作        对链表中的每一项进行函数p_function的操作 并且该操作不改变链表中的任何值
// 前置条件     plist指向一个初始化的链表 p_function指向一个函数指针 该函数返回值为void 接受一个Item类型的参数
// 后置条件     p_function指向函数会作用用于每一个节点的Item类型
void List_Traverse(const List * plist, void(* p_function)(List_Item * item));

// 操作        释放已经分配的内存
// 前置条件     plist指向一个已经初始化的数组
// 后置条件     设置链表为空 释放分配给链表的内存
void EmptyTheList(List * plist);

#endif //CPRIMEPLUS_SEVENTEENTH_PRACTICE_8_LIST_H
