/*min1=uneenii saagdaagui hamgiin ih hugatsaa
max1=uneenii ulgeljluulen saagdsan hamgiin ih hugatsaa
max2=hamgiin suuld uneenii saagdsan hugatsaa
min2=hamgiin ehlej saagdaj ehlesen hugatsaa
*/
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
int coox,cooy,ilt,temp=0,p;
int a[10000000]={0};
main(){
	queue <int> fqx,fqy;
	int b,c,d,ft,max1=0,min1=0,min2=1000000000,max2=0;
	scanf("%d",&ft);
	for(b=0;b<ft;b++){
		scanf("%d %d",&c,&d);
		if(c<min2){
			min2=c;
		}
		if(d>max2){
			max2=d;
		}
		fqx.push(c);
		fqy.push(d);
	}
	coox=min2;
	while(fqx.size()>0){
		for(b=fqx.front();b<=fqy.front()-1;b++){
		    a[b]=1;
	    }
	    fqx.pop();
	    fqy.pop();
	}
	while(1){
		if(coox>=max2){
			break;
		}
		ilt=a[coox];
		if(ilt==1){
			cooy=coox;
			while(a[coox]==a[coox+1]){
				coox++;
			}
			max1=max(coox-cooy+1,max1);
			coox++;
		}
		if(ilt==0){
			cooy=coox;
			while(a[coox]==a[coox+1]){
				coox++;
			}
			min1=max(coox-cooy+1,min1);
			coox++;
		}
		//printf("%d",coox);
	}
	printf("%d %d",max1,min1);
}
