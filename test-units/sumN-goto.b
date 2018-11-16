declblock{
	int i,sum,data[100],j,n;
}

codeblock{
	i = 0;
	sum = 4;
	for i = 1,2,3{
	if i==2{j=4;}
	}
	i=0;
L1:	data[i] = i+i ;
	i = i + 1;
	print i;
	goto L1 if i < 13;
if	i>3{  }
	sum = 0;
	i = 0;
L2:	sum = sum + data[i];
	i = i + 1;
	goto L2 if i < 3;
	read data[i],i,n;

	println "Sum value: ", sum;
}
