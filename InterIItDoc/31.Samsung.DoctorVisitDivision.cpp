#include <iostream>
using namespace std;

int N,E,T,start;
float adj_mat[1000][1000];
float copy_adj_mat[1000][1000];

void solution()
{
	cin>>N>>E>>T;
	for (int i=0;i<1000;i++)
	{
		for (int j=0;j<1000;j++)
		{
			adj_mat[i][j] = 0;
			copy_adj_mat[i][j] = 0;
		}
	}

	for (int i=0;i<E;i++)
	{
		int U,V;
		float probab;

		cin>>U>>V>>probab;
		adj_mat[U][V] = probab;
		copy_adj_mat[U][V] = probab;
	}

	cin >> start;

	int num_traversals = T/10;
	int curr_node = start;

	while (num_traversals > 0)
	{
		int next_node = -1;
		int max_probab = 0;

		for (int i=0;i<N:i++)
		{
			if (adj_mat[curr_node][i] > max_probab)
			{
				max_probab = adj_mat[curr_node][i];
				next_node = i;
			}
		}

		if (next_node == -1)
		{
			cout<<" Exited the last lab"<<endl;
			return;
		}

		curr_node = next_node;
		num_traversals--;
	} 

	cout<<" After "<<T<<" minutes , at node : "<<curr_node<<endl;
}

int main()
{
	cout<<" Samsung 31 question :- "<<endl;
	cout<<" Doctor divsion visiting problem :- "<<endl;
	cout<<endl;

	// A Doctor travels from a division to other division where 
	// divisions are connected like a graph(directed graph) and the 
	// edge weights are the probabilities of the doctor going from that
	// division to other connected division but the doctor stays 10mins 
	// at each division now there will be given time and had to find the 
	// ivision in which he will be staying by that time and is determined 
	// by finding division which has high probability. Input is number of 
	// test cases followed by the number of nodes, edges, time after which 
	// e need to find the division in which he will be there, the edges
	 // starting point, end point, probability. Note: If he reaches a point 
	// where there are no further nodes then he leaves the lab after 10 mins 
	// and the traveling time is not considered and during that 10min at
	 // 10th min he will be in next division, so be careful.

	int test_cases;
	cin>>test_cases;

	while (test_cases > 0)
	{
		test_cases--;
		solution();
	}
}