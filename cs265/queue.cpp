Queue ModifiedQueue::MergeQueue(Queue P)
{
	Queue backupq, thisq, mergeq;

	while(!m_Queue.empty())
	{
		backupq.enqueue(m_Queue.front()); //back up private queue
		thisq.enqueue(m_Queue.front()); //putting private queue in a usable queue
		m_Queue.dequeue();
	}

	while(!P.empty() && !thisq.empty()) //safety check
	{
		mergeq.enqueue(P.front());
		mergeq.enqueue(thisq.front());
		P.dequeue();
		thisq.dequeue();
	}

	while(!backupq.empty())
	{
		m_Queue.enqueue(backupq.front()); //put the backed up private queue back
		backupq.dequeue();
	}

	return mergeq;
}

Queue ModifiedQueue::SplitQ()
{
	Queue backupq, thisq, splitq;

	while(!m_Queue.empty())
	{
		backupq.enqueue(m_Queue.front()); //back up private queue
		thisq.enqueue(m_Queue.front()); //putting private queue in a usable queue
		m_Queue.dequeue();
	}

	for(int i = 0; i < backupq.size(); i += 2)
	{
		splitq.enqueue(thisq.front());

		thisq.dequeue();
		thisq.dequeue();
	}


	while(!backupq.empty())
	{
		m_Queue.enqueue(backup.front()); //put the backed up private queue back
		backup.dequeue();
	}

	return splitq;
}
