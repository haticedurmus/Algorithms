#include <stdio.h>
int findTwoBaseLogarithm(int number);
int powerTwo(int num);
int powerTwo(int num){
	int result=1;
	int i;
	for(i=1;i<=num;i++){
		result*=2;
	}
	return result;
}
int findTwoBaseLogarithm(int number){
	int i=1;
	//lg0 is indefinite
	if(number==0){       
		return -1;
	}
	//lg1 equals 0
	else if(number==1){  
		return 0;
	}
	//if lgn doest equal integer value then number floor manually 
	else{
		while(powerTwo(i) <= number){
			if(powerTwo(i+1) > number){
				return i;
			}else{
				i++;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int result=findTwoBaseLogarithm(n);
	if(result==-1){
		printf("INDEFINITE");
	}else{
		printf("%d ",result);
	}
}
