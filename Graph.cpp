#include "Graph.h"

using namespace std;

vector<int> ret;

Graph::Graph(const vector<int> &starts, const vector<int> &ends)
{
	if (starts.size() == ends.size())
	{
		this->beg = starts; // copia los vectores de inicio
		this->endp = ends; // final
	}
}

int Graph::numOutgoing(const int nodeID) const //los bordes con nodeID como el punto de inicio
{
	int num = 0;
	for (int i = 0; i < beg.size(); ++i)
	{
		if (beg[i] == nodeID)
		{
			++num;
		}
	}
	return num;
}

const vector<int> &Graph::adjacent(const int nodeID) const // agrega a un vector los vertices finales osea adyacentes
{
	for (int i = 0; i < beg.size(); ++i)
	{
		if (beg[i] == nodeID)
		{
			ret.push_back(endp[i]);
		}
	}
	return ret;
}
