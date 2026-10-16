#include <iostream>
using namespace std;

class Graph{
	private:
		int size;
		int **matrix;
	public:
		Graph(int size){
			this->size = size;
			matrix = new int*[size];
			for(int i = 0; i < size; ++i){
				matrix[i] = new int[size];	
				for(int j = 0; j < size; ++j){
					matrix[i][j] = 0;
				}
			}
		}
		void connect(int from, int to){
			matrix[from][to] = 1;
			cout << "Connecting node " << from << " to node " << to << "\n";
		}
		void print(){
			for(int i = 0; i < size; i++){
				for(int j = 0; j < size; j++){
					cout << matrix[i][j] << " ";
				}
				cout << "\n";
			}
		}
};

int main(){
	int n, m;
	n = m = 4;
	Graph graph(n);
	graph.connect(0, 1);
	graph.connect(3, 0);
	graph.connect(0, 3);
	graph.print();
	return 0;
}