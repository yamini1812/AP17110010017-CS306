#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int state=0;
char mystr[100];
scanf("%s",mystr);
int m=strlen(mystr);
int count=0;
int flag=0;
int i=0;

while(i<m){

if(mystr[i] == '0'){
	state=state+1;
	count=count+1;
}	
else if(mystr[i] == '1'){
	if(state==0){
	state=3;
	}
	else{
	state=state+1;
	}
	flag=flag+1;
}

i=i+1;
}
if(count%2==0 && flag%2==0){
printf("Accepted");
}
else printf("Rejected");
}