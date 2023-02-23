typedef struct{
	int data[20];
	int length;
}sqlist;
int insertPost_seq(sqlist* palist,int p,int x){
	if(palist->length==20){
		return 0;
	}else{
		int i=palist->length;
		int a=palist->data[p+1];
		i++;
		for(;i>p;i--){
			palist->data[i]=palist->data[i-1];
		}
		palist->data[p+1]=x;
		palist->length++;
		return 1;
	}
}
