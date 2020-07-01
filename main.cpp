#include "queue.h"
#include "queue.cpp"
#include <iostream>
#include <string>
#include <list>

int main(int argc, char** argv)
{
	std::list<std::string> queue;
	std::string element = "";
	std::string priority = "";
	int del = 0;
	int x = 0;

	QueuePriority<std::string, int> queuePriority(priority, del);

	do
	{
		std::cout << "\n 1.Add" << "\n 2.Del" << "\n 3.Print" << "\n 0.Exit" << "\n\n Select an action: ";
		std::cin >> x;
		system("cls");
		switch (x)
		{
		case 1:
			std::cout << " Enter the item:\n -> ";
			std::cin >> element;
			std::cout << " Enter priority(NO, YES):\n -> ";
			std::cin >> priority;
			if (queuePriority.addPriority() == "NO" || queuePriority.addPriority() == "no")
			{
				if (element.size() > 0)
				{
					queue.push_back(element);
				}
			}
			else
			{
				if (element.size() > 0)
				{
					queue.push_front(element);
				}
			}
			break;
		case 2:
			std::cout << "\n 1.Delete item" << "\n 2.Delete priority item" << "\n\n Select an action: ";
			std::cin >> del;
			if (queuePriority.del() == 1)
			{
				queue.pop_back();
			}
			else
			{
				queue.pop_front();
			}
			break;
		case 3:
			for (auto iter = queue.begin(); iter != queue.end(); iter++)
			{
				std::cout << *iter << std::endl;
			}
			break;
		default:
			//std::cout << " Error!" << std::endl;
			break;
		}

	} while (x != 0);

	return 0;
}