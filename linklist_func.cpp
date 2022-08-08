//link-list
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
};
class link :public node{
public:
int element;
int cnt=0;
int var=0;
bool indicator=false;
node* head=NULL;
node* p=head;
node* r=p;
int insertion(int input_data) {
if (element>=1&&cnt<1){
cnt++;
head=new node();
head->data=input_data;
}
else if (element>=2&&cnt>=1){
cnt++;
if ((cnt%2)==0){
var++;
p=new node();
if (var==1){
head->next=p;
}
if (indicator==true){
r->next=p;
}
p->data=input_data;
indicator=false;
}
else if((cnt%2)!=0){
indicator=true;
r=new node();
p->next=r;
r->data=input_data;
}
}
}
void display() {
p=head;
while(p!=NULL){
cout << p->data<< " ";
p=p->next;
}
}
};

int main () {
link obj;
cout << "enter no of elemnts you want to insert: ";
cin >> obj.element;
for (int i=0;i<obj.element;i++) {
cin >> obj.data;
obj.insertion(obj.data);
}
cout << endl;
cout << "elements of the linked list are: ";
obj.display();
return 0;
}
