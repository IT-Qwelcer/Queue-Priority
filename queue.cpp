#include "queue.h"

template<typename T1, typename T2>
inline QueuePriority<T1, T2>::QueuePriority( T1 priority, T2 deleted)
{
	this->priority = priority;
	this->deleted = deleted;
}

template<typename T1, typename T2>
QueuePriority<T1, T2>::~QueuePriority()
{
}

template<typename T1, typename T2>
T1 QueuePriority<T1, T2>::addPriority()
{
	return priority;
}

template<typename T1, typename T2>
T2 QueuePriority<T1, T2>::del()
{
	return deleted;
}

template<typename T1, typename T2>
void QueuePriority<T1, T2>::print()
{
}
