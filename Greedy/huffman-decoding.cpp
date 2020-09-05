string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
{
	string ans = "";
	struct MinHeapNode* curr = root;
	for (int i=0; i<binaryString.size(); i++)
	{
		if (binaryString[i] == '0')
		curr = curr->left;
		else
		curr = curr->right;
		if (curr->left==NULL and curr->right==NULL)
		{
			ans += curr->data;
			curr = root;
		}
	}
	return ans+'\0';
}