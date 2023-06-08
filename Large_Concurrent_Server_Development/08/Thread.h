#ifndef _THREAD_H_
#define _THREAD_H_

#include <pthread.h>

class Thread
{
public:
	Thread();
	virtual ~Thread();	// 纯虚析构函数

	void Start();		// 线程启动函数
	void Join();		

	void SetAutoDelete(bool autoDelete);

private:
	static void* ThreadRoutine(void* arg);
	virtual void Run() = 0;
	pthread_t threadId_;		// 线程 id
	bool autoDelete_;
};

#endif // _THREAD_H_