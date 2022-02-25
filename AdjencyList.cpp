#include <iostream>
#include <list>
using namespace std;
class Graph{
	int v;
	list<int> *adj; //adjanecy list
	public:
		//constructor to initalize the data members
		Graph(int v){
			this->v=v;
			adj = new list<int>[v];
			
			
		}
		void addedge(int u, int v){
			adj[u].push_back(v);
			adj[v].push_back(u);
			 //will occur for bothof them becoz it is undirected graph
		}
		void print(){
			for(int v=0; v<4; v++){
				cout<<v;
				for(auto it=adj[v].begin(); it!=adj[v].end();it++){
					cout<<(*it);
				}
				cout<<endl;
				}
			}
		
		
	
};
int main(){
	Graph g(4);
	
	g.addedge(0,2);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,0);
	g.print();
	
	
	
	return 0;
}
