#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char name[30];
	char pro_name[50];
	int hr;
	struct node*next;
}*head;

struct secnode{
	char pro[30];
	int th;
	struct node*next;
}*head1;
void insert(){
	
	char name[20];
	char pro_name[30];
	int h;
	printf("enter the values for node:\n");
	printf("enter the name:\n");
	scanf("%s",name);
	printf("enter the project name:\n");
	scanf("%s",pro_name);
	printf("enter the hours:\n");
	scanf("%d",&h);
	 
	 struct node*newnode;
	 struct node*temp;
	 
	 newnode=malloc(sizeof(struct node));
	 
	 printf("insertion at first\n");
	 strcpy(newnode->name,name);
	 strcpy(newnode->pro_name,pro_name);
	 newnode->hr=h;
	 newnode->next=NULL;
	 
	 struct node*temp;
	 if(head==NULL){
	 	head=newnode;
	 }
	 else{
	 	temp=head;
	 	while(temp->next!=NULL){
	 		temp=temp->next;
		 }
		 temp->next=newnode;
	 }
	 
	 
}
void secondlink(){
	struct node*temp;
	struct secnode*temp1;
	temp1=malloc(sizeof(struct secnode));
	char a[20];
	temp1=head1;
	int b,result;
	strcpy(a,temp->pro_name);
	b=temp->hr;
	while(temp!=NULL){
		if(a==temp->pro_name){
			strcpy(temp1->pro,temp->pro_name);
			strcpy(a,temp1->pro);
			result=b+temp->hr;
			temp1->th=result;
			temp=temp->next;
		}
	}
	
	while(temp1!=NULL){
		    printf("%s",temp1->pro);
			printf("%d",temp1->th);
			temp1->next;
	}
}

void printlist(){
	struct secnode*temp;
	//struct secnode*sec1;
	temp=head1;
/*	sec1=head1;
	while(temp!=NULL){
		printf("(%s,%s,%d)->",temp->name,temp->pro_name,temp->hr);
		temp=temp->next;
	} */
	
	
}
int main(void){
	int c=1;
	struct node*temp;
	struct secnode*temp1;
	head=NULL;
	do{
	
		printf("continue(yes/no)");
		printf("1----->insertion\n");
		printf("2----->print the stored list\n");
		printf("3----->secondlink");
	  scanf("\n%d",&c);
	  if(c==1){
	  	insert();
	  }
	  else if (c==2){
	  	printlist();
	  }
	  else if(c==3){
	  	secondlink();
	  }
	  
	}while(c<=3);
	
	
	
	
	return 0;
}
