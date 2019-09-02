#include <iostream>
#include <list>

#define MAX 5

using namespace std;

struct Vertex{
  char label;
  bool visited;
};

//Queue functions
class Queue{

  private:
    vector <int> queue;  
    int queueSize = 0;
  
  public:
  
    void enqueue(int data){
      queue.push_back(data);
      queueSize++;
    }
  
    Vertex dequeue(){
      queue.erase( queue.begin() );
      queueSize--;
    }
  
    Vertex frontQueue(){
      return queue.front();
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
    Graph(int vertices){ // constructor
      numVertices = vertices;
      adjLists = new list[vertices];
    }
  
    void addEdge(int src, int dest); // add edge to edge array
  
    void breadthFirstSearch(); //perform the breadth first search using queue functions as well
    
}


int main(){

}
