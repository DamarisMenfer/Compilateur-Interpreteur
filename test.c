int main(int arg, int arg2) {
	int i, j,k,r;
	int q;
	i =3;
	q = 1;
	j=4;
	k=8;
	r = 0;
	r++;
	k = r +1;


	if(i < j){
		k += 2;
	}
	else if(q == i){
		j++;
	}
	else{
		i = 0;
	}
	

	while(k < j){
		k++;
		j=k;
	}
}
