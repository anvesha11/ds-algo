

string largestNumber(int n, int sum){
    if(sum > 9*n)
		return "-1";
    
    int temp;
    string str = "";
	for(int i=0;i<n;i++){
	    temp = 0;
		if(sum!=0)
			temp = sum>9? 9 : sum;
		str += (char)(temp + '0');
		sum -= temp;
	}
	return str;
}