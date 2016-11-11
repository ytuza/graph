#ifndef _GRAPH_H_
#define _GRAPH_H_ 0
#include <iostream>
#include <vector>

using namespace std;
class Graph
{
	private:
		vector<int> beg, endp;
	public:
		Graph(const std::vector<int> &starts, const std::vector<int> &ends);
		int numOutgoing(const int nodeID) const;
		const vector<int> &adjacent(const int nodeID) const;

};

#endif
