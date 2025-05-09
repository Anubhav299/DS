int greatest(int ht[],int&cc)
{
	int max = 0;
	for(int i=0;i<SIZE;i++)
	{
	if(ht[i]>max)
	{
		max=ht[i];
		cc=i+1;
	}
	}	
	return max;
}
