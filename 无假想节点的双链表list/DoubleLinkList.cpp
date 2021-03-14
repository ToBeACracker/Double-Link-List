#include "DoubleLinkList.h"


void CList::push_front(TYPE data)
{
	m_nCount++;

	Node* p = new Node;
	memset(p, 0, sizeof(Node));

	p->data = data;

	if (m_pHead == NULL)
	{
		m_pHead = m_pTail = p;
	}
	else
	{
		//set previous and next node pointer first
		p->pNext = m_pHead;
		m_pHead->pPrev = p;

		//then move head pointer
		m_pHead = p;
	}
}

void CList::push_back(TYPE data)
{
	m_nCount++;

	Node* p = new Node;
	memset(p, 0, sizeof(Node)); //set previous and next pointer to null

	p->data = data;

	if (m_pTail == NULL)
	{
		m_pHead = m_pTail = p;
	}
	else
	{
		//set previous and next node pointer first
		p->pPrev = m_pTail;
		m_pTail->pNext = p;

		//then move tail pointer
		m_pTail = p;
	}
}

void CList::clear()
{
	Node* p;

	while (m_pHead != NULL)
	{
		p = m_pHead->pNext;
		delete m_pHead;

		m_pHead = p;
	}

	m_nCount = 0;
	m_pTail = NULL;
}


void CList::erase(iterator& it)
{
	Node* p = m_pHead;

	for (; p != NULL; p = p->pNext)
	{
		if (p == it)
		{
			++it;
			m_nCount--;

			Node* pre = p->pPrev;
			Node* next = p->pNext;


			if (pre)
			{
				pre->pNext = next;
			}
			else //p is the first node
			{
				m_pHead = next;
			}

			if (next)
			{
				next->pPrev = pre;
			}
			else //p is the last node
			{
				m_pTail = pre;
			}
			delete p;

			break;
		}
	}



}