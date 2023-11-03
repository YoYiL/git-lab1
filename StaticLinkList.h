#pragma once
#include<iostream>
using namespace std;
const int Maxsize = 100;

template<class DataType>
struct SNode {
    DataType data;
    int next;
};

ode() {//相当于NEW操作
    int p;
    if (SList[av].next == -1)
        p = -1;
    else {
      
    SList[q].data = x;
    SList[q].next = SList[p].next;
    SList[p].next = q;
    len++;
}

template<class DataType>
void StaticLinkList<DataType>::Delete(int p) {
    int q;
    if (SList[p].next != -1) {
        q = SList[p].next;
        SList[p].next = SList[q].next;
        FreeNode(q);
        len--;
    }
}

template<class DataType>
void StaticLinkList<DataType>::Reverse(int L) {
    int i = FindEnd(L);//L表的末尾
    int j ;
    for (j = SList[L].next; j != i; j = SList[j].next) {
        int temp = i;
        DataType n = SList[j].data;//i,j前后交换
        SList[j].data = SList[i].data;
        SList[i].data = n;
        for (i = j; SList[i].next != temp; i = SList[i].next);//找到i的前驱
    }
}

template<class DataType>
void StaticLinkList<DataType>::print(int L) {
    int p = SList[L].next;
    int n = len;
    for (n; n != 0;n--) {
        cout << SList[p].data<<" ";
        p = SList[p].next;
    }
    cout << endl;
}

template<class DataType>
int StaticLinkList<DataType>::FindEnd(int L)//查找一个游标指向线性表的末尾位置
{
    int j;
    for (j = L; SList[j].next != -1; j = SList[j].next);//到达末尾
    return j;
}