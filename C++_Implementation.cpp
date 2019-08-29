#include <iostream>

#define MAX_SIZE 30
#define MAX 5

using namespace std;

struct Vertex{
  char label;
  bool visited;
};

//Queue functions
class Queue{

  private:
    int A[MAX_SIZE];
    int rear = -1
    int front = 0;
    int queueSize = 0;
  
  public:
  
    void enqueue(Vertex data){
      A[rear++] = data;
      queueSize++;
    }
    
    Vertex dequeue(){
      data = A[front];
      front++;
      queueSize--;
      return data;
    }
    
    Vertex front(){
      return A[front];
    }
  
    bool isEmpty(){
       if(queueSize == 0)
         return true;
       else
         return false;
    }
      
}

//graph functions

int adjMatrix[MAX][MAX]; // adjacency matrix of values
struct Vertex* listVerticies[MAX]; //creating list of verticies and branches
  
class Graph{
  private:
  
  public:
  
    void addVertex(); //add vertex to vertex array
  
    void addEdge(); // add edge to edge array
    
    void displayVertex(); //display the vertex
  
    void getAdjUnvistedVertex(); // get the adjacent unvisted vertex
  
    void breadthFirstSearch(); //perform the breadth first search using queue functions as well
    
}


int main(){

}
