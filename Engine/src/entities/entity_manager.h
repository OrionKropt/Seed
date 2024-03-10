#pragma once

#include <iostream>
#include "generate_id.h"
#include "entity.h"


class EntityManager
{
public:
	EntityManager();
	
	
private:
	class Queue
	{
	public:
		Queue() : arr(nullptr), size(0), start(0) {}
		Queue(unsigned int Size) : size(Size) { arr = new unsigned int[Size]; }
		void push(const unsigned int data) { arr[start++] = data; }
		unsigned int pop() { return arr[start--]; }
		void SetSize(unsigned int size)
		{
			if (arr != nullptr)
			{
				unsigned int* pTemp = new unsigned int[size];
				unsigned int sizeInBytes = sizeof(unsigned int) * this->size;
				memcpy_s(pTemp, sizeInBytes, arr, sizeInBytes);
				this->size = size;
			}
			else this->size = size;
		}
		~Queue() { delete[] arr; }
	private:
		unsigned int* arr;
		unsigned int size = 0;
		unsigned int start = 0;
	};
	const unsigned int MAX_ENTITIES = 10^000;
	unsigned int LivingEntityCount = 0;
	Queue AvalibalEnities = Queue(MAX_ENTITIES);
	
};