#include <queue>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct alpha{
	bool operator()(const string &s1, const string& s2){
		return(s1.length() < s2.length());
	}
};

int main()
{
	priority_queue<string, vector<string>, alpha> pq;
	priority_queue<string, vector<string>, greater<string>> pqg;

	pq.push("Hello");
	pq.push("this");
	pq.push("is");
	pq.push("a");
	pq.push("priority");
	pq.push("queue");
	pqg.push("Hello");
	pqg.push("this");
	pqg.push("is");
	pqg.push("a");
	pqg.push("priority");
	pqg.push("queue");

	cout << "ALPHA: \n";
	while(!pq.empty()){
		cout << pq.top() << '\n';
		pq.pop();
	}

	cout << "GREATER: \n";
	while(!pqg.empty()){
		cout << pqg.top() << '\n';
		pqg.pop();
	}

	return 0;
}

/*
if(s1.length() == s2.length())
{
	for(int i = 0; i < s1.length(); i++)
	{
		if(s1[i] == s2[i])
			continue;
		else{
			return(s1[i] > s2[i]);
			break; //make sure it ends
		}
	}
}
else
	return(s1 < s2);
	*/
