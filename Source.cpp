#include <iostream>
#include "DequeBase.h"
#include "Deque1.h"
#include "Deque2.h"

using namespace std;

template<typename T>
void MyFuncWithPointer(DequeBase<T>* s)
{
	cout << s->PeekFront() << endl;
	cout << s->PeekBack() << endl;
}

template<typename T>
void MyFuncWithReference(DequeBase<T>& s)
{
	cout << s.PeekFront() << endl;
	cout << s.PeekBack() << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Deque1<int> d1;
	d1.PushFront(5);
	d1.PushBack(2);
	d1.PushFront(9);
	d1.PushBack(1);
	d1.PushBack(10);

	cout << d1;

	cout << "Первый элемент c начала : " << d1.PeekFront() << "; первый элемент с конца : " << d1.PeekBack() << ";  всего элементов : " << d1.GetSize() << endl;

	Deque2<int> d2;
	d2.PushFront(5);
	d2.PushBack(2);
	d2.PushFront(9);
	d2.PushBack(1);
	d2.PushBack(10);

	cout << d2;

	cout << "Первый элемент c начала : " << d2.PeekFront() << "; первый элемент с конца : " << d2.PeekBack() << ";  всего элементов : " << d2.GetSize() << endl;

	cout << "Вызов функции с аргументом указателя" << endl;
	cout << "Элементы из первой очереди" << endl;
	MyFuncWithPointer(&d1);
	cout << "Элементы из второй очереди" << endl;
	MyFuncWithPointer(&d2);
	cout << "Вызов функции с аргументом ссылки" << endl;
	cout << "Элементы из первой очереди" << endl;
	MyFuncWithReference(d1);
	cout << "Элементы из второй очереди" << endl;
	MyFuncWithReference(d2);


	return 0;
}