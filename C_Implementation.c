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

void addVertex(char label){ //add vertex to vertex array
  struct Vertex* vertex = (struct Vertex*) malloc(sizeof(struct Vertex));
  vertex->label = label;
  vertex->visited = false;
  listVerticies[vertexCount++] = vertex;
}

void addEdge(int start, int end){ // add edge to edge array
  adjMatrix[start][end] = 1;
  adjMatrix[start][end] = 1;
}

void displayVertex(int vertexIndex){ //displays know verticies
  printf("%c ", listVerticies[vertexIndex] -> label);
}

void adjUnvisitedVertex(int vertexIndex){ //shows any adjacent unvisited verticies
  int i;
  
  for(i = 0; i < vertexIndex; i++){
      if(adjMatrix[vertexIndex][i] == 1 && listVerticies[i] -> visited == false)
          return i;
  }
  
  return -1;
}

void breadthFirstSearch(){ //performs the breadthfirst search
  int i;
  
  //mark first node as visited
  listVerticies[0] -> visited = true;
  
  //display the vertex
  displayVertex(0);
  
  //insert the vertex index in queue
  enqueue(0);
  int unvisitedVertex;
  
  while(!isEmpty()){
    //get the unvisited vertex of the vertex at the front of the queue
    int tempVertex = dequeue();
    
    //no adjacent vertex found
    while( (unvisitedVertex = getadjUnvisitedVertex(tempVertex) ) != -1 ){
      listVerticies[unvisitedVertex] -> visited = true;
      displayVertex(unvisitedVertex);
      enqueue(unvisitedVertex);
    }
  
  }
  
  //queue is empty, search is completed, reset the visited flag for all nodes 
  for(i = 0; i < vertexCount; i++){
     listVerticies[i] -> visited = false;
  }
  
  
}
  

int main(){

}
