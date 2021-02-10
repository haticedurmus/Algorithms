#include<stdio.h>
#define size 100
int main(){
	int array[size];
  	int i,j = 0;
    //A controller to control the continuity of the increase or decrease
    int controller = 0; 
  	scanf("%d",&i);
    while(i!=-1){
		array[j]=i;
		j++;
		scanf("%d",&i);
   	}
	array[j] = 0;
	array[j+1] = 0;
	for(i=0;i<j;i++){
		if(array[i]>array[i+1] && controller == 0) { 
			printf("%d ",array[i]);
 			if(array[i+1]>array[i+2] ){
 				controller = 0;
 			}else {
 				controller = 1;
			}
		}
		else if(array[i]<array[i+1] && controller == 0) {
			printf("%d ",array[i]);
			if(array[i+1]<array[i+2] ){
				controller = 0;
 			}else {
 			controller = 1;
			}
		}
		else {
			printf("%d\n",array[i]);
			controller = 0;
		}
	}
}
