#ifndef __QUEUE_H_
#define __QUEUE_H_

template<typename T1, typename T2>
class QueuePriority
{
public:
	QueuePriority(T1 priority, T2 deleted);
	~QueuePriority();

	T1 addPriority();
	T2 del();
	void print();

private:
	T1 priority;
	T2 deleted;
};

#endif // !__QUEUE_H_
