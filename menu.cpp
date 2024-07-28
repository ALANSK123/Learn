#include <iostream>
using namespace std;
#define MAXSIZE 10
int stack[MAXSIZE], top=-1;
void push();
void pop();
void display();
int main() {
     int choice;
       system("cls");
    do{
    printf("\n\n..........STACK.............");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
                push();
                break;
        case 2: 
               pop();
               break;
        case 3:
               display();
               break;
        default : printf("Invalid choice");    
         // system("cls");          
    }
    }while (choice!=4);
    


return 0;
}
void push(){
    int n;
    if(top==MAXSIZE-1){
        cout<<"Stack is overflow";
    }
    else{
           printf("Enter an element: ");
           cin>>n;
           top++;
           stack[top]=n;
    }
  
}
void pop(){
    int n;
    if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        n=stack[top];
        top--;
        cout<<"Element is poped";
    }
}

void display(){
         if(top==-1){
            cout<<"Stack is empty";
         }
         else{
            cout<<"Elements of Stack: ";
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
         }
}