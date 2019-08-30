#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 10
#define MAX 5

struct Vertex{
  char label;
  bool visited;
};

//queue functions
int A[MAX_SIZE];
int rear = -1
int front = 0;
int queueSize = 0;

void enqueue(Vertex data){
  A[rear++] = data;
  queueSize++;
}
    
Vertex dequeue(){
  data = A[front++];
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


//graph functions
int adjMatrix[MAX][MAX];
struct Vertex* listVerticies[MAX];

void addVertex(); //add vertex to vertex array

void addEdge(); // add edge to edge array

void displayVertex(); //displays know verticies

void adjUnvisitedVertex(); //shows any adjacent unvisited verticies

void breadthFirstSearch(); //performs the breadthfirst search


int main(){

}
