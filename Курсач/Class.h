#pragma once
#include <iostream>
#include <limits.h>
#include <string.h> 
#include <queue>
#include <vector>
#include "MyForm.h"
using namespace std;
 
struct Node {
	string name;
	int N;
	int source;
	int sink;
	vector<vector<int>> mas;
	int result;
	Node* next, * prev;
};
typedef Node* PNode;


class Graf
{
	PNode Head, Tail;
public:
	PNode element;
	Graf() {
		element = 0; Head = NULL; Tail = NULL;
	}
	void DelGraf(Node* wer);
	bool bfs(vector<vector<int>>& rGraph, int s, int t, vector<int>& parent);
	int EdmondsKarp();
	PNode Find_2(string name);
	
	void AddLast();
	bool Find( string s);
	void Story();
	
};

