#include<iostream>
#include<cstdlib>
void insert_at_begin(int);
void insert_at_end(int);
void search(int);
void del_end();
void  disp();
using namespace std;
struct Node{
	int data;
	Node *next;
};
struct Node *start=NULL;
void insert_at_begin(int a)
{
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	if(start==NULL){
	start=new_node;
	new_node->data=a;
	new_node->next=NULL;
}
else{
	new_node->next=start;
	new_node->data=a;
	start=new_node;
}
cout<<endl;
}
void insert_at_end(int b){
	struct Node *temp;
	temp=start;
struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
if(start==NULL){
	start=new_node;
	start->data=b;
	start->next=NULL;
}

else{
	while(temp->next!=NULL){
		temp=temp->next;
	}
		temp->next=new_node;
		new_node->data=b;
		new_node->next=NULL;
		
	}	
}
void disp(){
	struct Node *temp;
	temp=start;
	if(temp==NULL){
		cout<<"List is empty"<<endl;
	}
	else{
		cout<<"Elements in List are:"<<endl;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
}
void del_end(){
	struct Node *temp;
	temp=start;
	start=start->next;
	free(temp);
}
void search(int c){
	struct Node *ptr;
	ptr=start;
	while(ptr->data!=c){
			ptr=ptr->next;
		if(ptr->data==c){
			cout<<ptr->data;
		}	
}
} 
main(){
	int no,list,insert,m,n;
	char user;
	do{
	cout<<"***---Wellcome---***"<<endl;
	cout<<"Press 1 for insert data at begin"<<endl;
    cout<<"Press 2 for insert data at end"<<endl;
    cout<<"Press 3 for Print No in list"<<endl;
    cout<<"Press 4 for delete element form end"<<endl;
    cout<<"Press 5 for delete element for start"<<endl;
    cin>>insert;
	if(insert==1){
		cout<<"Enter Total no of numbers"<<endl;
		cin>>m;
		cout<<"Enter No:"<<endl;
	for(int i=0;i<m;i++){
	cin>>no;
		insert_at_begin(no);
	}
}
	else if(insert==2){
		cout<<"Enter Total no of numbers"<<endl;
		cin>>n;
		cout<<"Enter No:"<<endl;
	for(int i=0;i<n;i++){
	cin>>no;
		insert_at_end(no);
	}
}
	else if(insert==3){
		disp();
	}
	else if(insert==4){
		void del_end();
	}
	else if(insert==5){
		void del_start();
	}
	else{
		cout<<"Invaid input"<<endl;
	}
cout<<endl;
cout<<"Press Y for again or Press N for exit"<<endl;
cin>>user;
}while(user=='Y'||user=='y');
}
