#include <iostream>
using namespace std;
int queue[1000], n = 1000, front = - 1, rear = - 1;
void Insert() {
   int var;
   if (rear == n - 1)
   cout<<"Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>var;
      rear++;
      queue[rear] = var;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Underflow ";
      return ;
   } else {
      cout<<"Element removed from queue = "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Empty Queue"<<endl;
   else {
      cout<<"Queue elements = ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element in queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements in queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice -> "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
