#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

class MyStack {
    private:
	Node *head=NULL;
	
	public:
    bool isEmpty(){
        if(head==NULL){
        	return 1;}
        	else return 0;
		}

    void push(int input){
			Node *temp= new Node;
	    	temp->data=input;
	        temp->next=head;
	        head=temp;
	        cout<<"Berhasil Ditambahkan";
	}
	    
    void pop(){
    	if(isEmpty()==1){
    		Node *temp= new Node;
    		temp=head;
			head=head->next;
			delete temp;
			cout<<"Berhasil Dihapuskan"<<endl;
        } else {
            cout<<"Stack Kosong"<<endl<<endl;
        }
    }
    
    void print(){
    	Node *var;
    	var=head;

        if (isEmpty()==0){
            while(var!=NULL){
            	cout<<var->data<<endl;
            	var=var->next;
			}
        } else {
            cout<<"Stack Kosong"<<endl<<endl;
        }
    }
    
    int Top(){
    	Node *top=head;
        return top->data;
    }
};

int main()
{	
	
    MyStack a;
    int menu;
	int input;
	char huruf;
	do{
		cout<<"1.Add Data"<<endl;
		cout<<"2.Remove Data(Top)"<<endl;
		cout<<"3.Data Paling Atas(Top)"<<endl;
		cout<<"4.Data yang Diinputkan"<<endl;
		cout<<"5.Keluar"<<endl;
		cout<<"\nPilihan : ";
		cin>>menu;
		switch(menu){
			case 1:cout<<endl;
			cout<<"Masukkan angka : ";
			cin>>input;
			cout<<endl;
			a.push(input);break;

			case 2:
			cout<<endl;
			a.pop();
			break;

			case 3:
			cout<<endl;
			if(a.isEmpty()==0){
			cout<<a.Top()<<endl;
			}else{
				cout<<"Stack kosong"<<endl<<endl;
				}
			cout<<endl;break;

			case 4:
			cout<<endl;
			a.print();
			break;
			
			
			default:
				cout<<"Terima Kasih Telah Menggunakan Program Ini..."<<endl;
				
		}
		
	}
	while (menu<=4&&menu!=0&&menu!=huruf);
	
	return 0;
}
