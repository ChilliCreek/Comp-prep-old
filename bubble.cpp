#include<cstdio>
#include<algorithm>
using namespace std;

void bubble(int u[],int b){
 	int q,a,i = 0;
	while(1>0){
	 	q = 0;
 		for(a=0;a<b-1;a++){
 		    if(u[a]>u[a+1]){
 			    swap(u[a],u[a+1]);
 			    q=1;
 			}
 		i++;
 		}
 		if(q==0){
 			break;
		}
 	}
}
/* void selection(int a,int u[],int b,int min){
 	for(a=0;a<b;a++){
 	    for(a=0;a<b;a++){
 	        u[a]=u[a+1];
 	        i
	    }
	}
 }*/
main(){
 	int a,b,c,min,d=0,t,l=0;
 	int u[1000];
 	scanf("%d",&b);
 	for(a=0;a<b;a++){
 	    scanf("%d",&u[a]);
	}
	bubble(u,b);
	
    for(a=0;a<b;a++){
 	    printf("%d ",u[a]);
	}
	for(;;);
 }
