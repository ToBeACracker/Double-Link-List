#include <iostream>

using namespace std;

#include "DoubleLinkList.h"
#include <list>

int main()
{
#if 1
	//TYPE为int型测试代码
	TYPE nArray[] = { 1 ,  2  ,  3 };

	CList list;

	list.push_front(nArray[0]);
	list.push_back(nArray[1]);
	list.push_back(nArray[2]);


	//无假想节点只能用it==NULL为结束标志

	//正序
	for (CList::iterator it = list.begin(); it ; ++it)
	{
		cout << ' ' << *it;
	}

	//逆序
	for (CList::iterator it = list.end(); it; --it)
	{
		cout << ' ' << *it;
	}
#endif

#if 0
	/*
		TYPE为结构体型测试代码, 需修改DoubleLinkList.h中
		的typedef int TYPE; 为typedef MyStruct TYPE
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

