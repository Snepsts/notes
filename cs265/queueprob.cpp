#include <queue>
#include <iostream>

using namespace std;

void moveNthfront(queue<int>& q, int n);

int main()
{
	int n = 3;
	queue<int> q;

	q.push(5);
	q.push(11);
	q.push(34);
	q.push(67);
	q.push(43);
	q.push(55);

	moveNthfront(q, n);

	while(!q.empty())
	{
		cout << q.front() << '\n';
		q.pop();
	}

	return 0;
}

void moveNthfront(queue<int>& q, int n)
{
	int newfront;
	queue<int> newqueue = q;

	for(int i = 1; i < n; i++)
		newqueue.pop();

	newfront = newqueue.front();

	while(!newqueue.empty())
		newqueue.pop();

	newqueue.push(newfront);

	for(int i = 1; !q.empty(); i++)
	{
		if(i != n)
			newqueue.push(q.front());
			q.pop();
	}

	q = newqueue;
}
