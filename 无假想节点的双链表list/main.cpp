#include <iostream>

using namespace std;

#include "DoubleLinkList.h"
#include <list>

int main()
{
#if 1
	//TYPEΪint�Ͳ��Դ���
	TYPE nArray[] = { 1 ,  2  ,  3 };

	CList list;

	list.push_front(nArray[0]);
	list.push_back(nArray[1]);
	list.push_back(nArray[2]);


	//�޼���ڵ�ֻ����it==NULLΪ������־

	//����
	for (CList::iterator it = list.begin(); it ; ++it)
	{
		cout << ' ' << *it;
	}

	//����
	for (CList::iterator it = list.end(); it; --it)
	{
		cout << ' ' << *it;
	}
#endif

#if 0
	/*
		TYPEΪ�ṹ���Ͳ��Դ���, ���޸�DoubleLinkList.h��
		��typedef int TYPE; Ϊtypedef MyStruct TYPE
	*/
	TYPE nArray[] = { {1} , { 2}  , { 3 } };

	CList list;

	list.push_front(nArray[0]);
	list.push_back(nArray[1]);
	list.push_back(nArray[2]);


	for (CList::iterator it = list.end(); it; --it)
	{
		cout << ' ' << it->a;
	}
#endif
}

