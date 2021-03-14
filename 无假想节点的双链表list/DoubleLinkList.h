#pragma once
#include <iostream>

struct MyStruct
{
	int a;
};

typedef int TYPE;

struct Node
{
	TYPE data;
	Node*pPrev, *pNext;
};


class CList
{
private:
	Node* m_pHead, *m_pTail;
	int m_nCount;
	

public:
	class iterator
	{
		Node* p;
	public:
		iterator(Node* p)
		{
			this->p = p;
		}
		TYPE& operator*() //return reference of data
		{
			return p->data;
		}
		TYPE* operator->() //return address of data
		{
			return &p->data;
		}
		operator Node*() //convert to pointer of node
		{
			return p;
		}
		iterator& operator++() //move to next node
		{
			p = p->pNext;
			return *this;
		}
		iterator operator++(int) //return temporary object of current node, then move to next node
		{
			iterator it = p;
			p = p->pNext;

			return it;
		}
		iterator& operator--()
		{
			p = p->pPrev;
			return *this;
		}
		iterator operator--(int)
		{
			iterator it = p;
			p = p->pPrev;

			return it;
		}

	};

public:
	iterator begin() const { return m_pHead; } //成员只读
	iterator end() const { return m_pTail; }

	TYPE& front() const { return m_pHead->data; }
	TYPE& back() const { return m_pTail->data; }

	int size() const { return m_nCount; } //成员只读

	void push_front(TYPE data);
	void push_back(TYPE data);

	void erase(iterator& it);

	void clear();
	CList() { m_pHead = m_pTail = NULL; m_nCount = 0; }
	~CList() { clear(); }
};

