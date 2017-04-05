```c
typedef struct{
	Elemtype *base[2];
	Elemtype *top[2];
}BDStacktype;

//初始化一个大小为m的双向栈tws
Status Init_Stack(BDStacktype &tws,int m){
	tws.base[0]=(Elemtype*)malloc(sizeof(Elemtype));
	tws.base[1]=tws.base[0]+m;
	tws.top[0]=tws.base[0];
	tws.top[1]=tws.base[1];
	return OK;
}

//x入栈,i=0表示低端栈,i=1表示高端栈
Status push(BDStacktype &tws,int i,Elemtype x){
	if(tws.top[0]>tws.top[1])
		return OVERFLOW;
	else if(i==1)
			*tws.top[1]--=x;
		else
			return ERROR;
	return OK;
}

//x出栈,i=0表示低端栈,i=1表示高端栈
Status pop(BDStacktype &tws,int i,Elemtype &x)
{
	switch(i){
		case 0:
			if(tws.top[0]==tws.base[0])
				return OVERFLOW;
			x=*--tws.top[0];
			break;
		case 1:
			if(tws.top[1]==tws.base[1])
				return OVERFLOW;
			x=*++tws.top[1];
			break;
		default:
			return ERROR;
	}
	return OK;
}
```

