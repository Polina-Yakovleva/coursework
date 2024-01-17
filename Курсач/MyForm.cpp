#include "MyForm.h"
#include "Class.h" 


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics; 




void itProgerWinApp::MyForm::Pole(int n) {
	this->dataGridViewMas->ColumnCount = n + 1;
	this->dataGridViewMas->RowCount = n + 1;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			this->dataGridViewMas->Rows[i]->Cells[j]->Value = "";
		}
	}

	for (int i = 1; i <= n; i++) {
		this->dataGridViewMas->Rows[0]->Cells[i]->Value = i;
		this->dataGridViewMas->Rows[i]->Cells[0]->Value = i;
		this->dataGridViewMas->Rows[i]->Cells[i]->Value = 0;
	}
}
bool Graf::bfs(vector<vector<int>>& rGraph, int s, int t, vector<int>& parent) {
	int V = element-> N;
	vector<bool> visited(V, false);

	queue<int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int v = 0; v < V; v++) {
			if (!visited[v] && rGraph[u][v] > 0) {
				q.push(v);
				parent[v] = u;
				visited[v] = true;
			}
		}
	}

	return visited[t];
}
int Graf::EdmondsKarp() {
	int V = element->N;
	vector<vector<int>> rGraph(V, vector<int>(V, 0));
	for (int u = 0; u < V; u++)
		for (int v = 0; v < V; v++)
			rGraph[u][v] = element->mas[u][v];

	vector<int> parent(V);
	int max_flow = 0;

	while (bfs(rGraph, element->source-1, element->sink-1, parent)) {
		int path_flow = INT_MAX;
		for (int v = element->sink-1; v != element->source-1; v = parent[v]) {
			int u = parent[v];
			path_flow = min(path_flow, rGraph[u][v]);
		}

		for (int v = element->sink-1; v != element->source-1; v = parent[v]) {
			int u = parent[v];
			rGraph[u][v] -= path_flow;
			rGraph[v][u] += path_flow;
		}

		max_flow += path_flow;
	}

	return max_flow;
}

void Graf::AddLast() {
	
	element->prev = Tail;
	element->next = nullptr;
	if (Tail)
		Tail->next = element;
	Tail = element;
	if (!Head)
		Head = Tail; // этот элемент – первый
}

bool Graf::Find(string name) {
	Node *q = Head;
	while (q && (q->name != name))
		q = q->next;
	if (q == nullptr)
		return 0;
	else return 1;
}
PNode Graf::Find_2(string name) {
	PNode q = Head;
	while (q && (q->name != name))
		q = q->next;
	return q;
}
////Удаление узла
void Graf::DelGraf(Node* OldNode) {
	if (Head == OldNode)
	{
		Head = OldNode->next; // удаляем первый элемент
		if (Head)
			Head->prev = NULL;
		else Tail = NULL; // удалили единственный элемент
	}
	else
	{
		OldNode->prev->next = OldNode->next;
		if (OldNode->next)
			OldNode->next->prev = OldNode->prev;
		else
			Tail = OldNode->prev; // удалили последний элемент
	}
	delete OldNode;
}

void Graf::Story() 
{
	Node *p = Head;
	

	ofstream fin("story.txt", ios::out);
	fin.close();
	while (p)
	{
		ofstream fin("story.txt", std::ios_base::out | std::ios_base::app);
		string str;
		str = p->name + " ";
		fin << str;
		str = to_string(p->N) + " ";
		fin << str;
		str = to_string(p->source) + " ";
		fin << str;
		str = to_string(p->sink) + " ";
		fin << str;
		for (int i = 0; i < p->N; i++)
			for (int j = 0; j < p->N; j++)
			{
				str = to_string(p->mas[i][j]) + " ";
				fin << str;
			}
		str = to_string(p->result);
		fin << str << "\n";
		p = p->next;
	}
}

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	itProgerWinApp::MyForm form;
	Application::Run(% form);
}

