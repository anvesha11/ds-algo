Asked In: Adobe Amazon Apple Belzabar D-E-Shaw Facebook Flipkart 
Google Intuit Microsoft Morgan Stanley Ola Cabs Oracle Samsung SAP Labs Yahoo

void FindMedian::insertHeap(int &x)
{
    // insert in minheap or maxheap
	if (max.empty()) 
		max.push(x);
	else if (x > max.top()) 
		min.push(x);

	else
		max.push(x);
	balanceHeaps();
}

// Function to balance heaps
void FindMedian::balanceHeaps()
{
	if (abs(max.size() - min.size()) > 1) //Heaps are not balanced
	{
		if (max.size() > min.size())
		while(abs(max.size() - min.size()) > 1)
		{
			min.push(max.top());
			max.pop();
		}
		
		else
		{
		    while(abs(min.size() - max.size()) > 1)
			{max.push(min.top());
			min.pop();}
		}
	}
}

// Function to return getMedian
double FindMedian::getMedian()
{
    // if total size is even
	if ((max.size() + min.size()) % 2 == 0)
	{
		median = (max.top() + min.top());
		median /= 2;
	}
	else // if total size is odd
	{
		if (min.empty())
			median = max.top();
		else if (min.size() < max.size())
			median = max.top();
		else
			median = min.top();
	}
	
	return median;
}