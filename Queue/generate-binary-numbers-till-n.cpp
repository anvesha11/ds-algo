Asked In: Amazon OYO Rooms

vector<string> generate(ll n)
{
	// Your code here
	queue<string> nums;
	vector<string> result;
	nums.push("1");
	for(ll i=1;i<=n;i++)
	{
	    string temp = nums.front();
	    result.push_back(temp);
	    nums.pop();
	    nums.push(temp+"0");
	    nums.push(temp+"1");
	}
	return result;
}