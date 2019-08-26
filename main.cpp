#include <iostream>

#define MAX_SIZE 30

class Queue{

  public:
    int A[MAX_SIZE];
    int rear = -1
    int front = -1;
    
  private:
  
    void enqueue(int data){
      A[rear++] = data ;
    }
    
    int dequeue(){
      A[front++];
    }
    
    int front(){
      return A[front];
    }
  
    bool isEmpty(){
       if(front == rear){
         return true;
       else
         return false;
    }
      
}



int main(){

}
