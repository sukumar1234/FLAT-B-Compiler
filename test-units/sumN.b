declblock{
	int data[100];
	int i, sum;
}

codeblock{
	for i = 1, 3 {
		data[i] =data[i]+ i; 
	}
	goto I1 if (i<12);
	println "data is :",data[2];
I1 :	data[10]=2*(2+3);
	i=i+1;
	if(i == 12){
		i = i+4;
	}
	println "value of i :" , i;
	read data[4];
	println "data :" , i,data[1],data[2],data[3],data[4];
	
}

