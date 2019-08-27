#include <iostream>

#define MAX_SIZE 30

//Queue functions

struct Vertex{
  char label;
  bool visited;
};

class Queue{

  public:
    int A[MAX_SIZE];
    int rear = -1
    int front = 0;
    
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

//graph functions
  
class Graph{
  public:
  
  private:
  
    void addVertex(); //add vertex to vertex array
  
    void addEdge(); // add edge to edge array
    
    void displayVertex(); //display the vertex
  
    void getAdjUnvistedVertex(); // get the adjacent unvisted vertex
  
    void breadthFirstSearch(); //perform the breadth first search using queue functions as well
    
}


int main(){

}
