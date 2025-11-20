#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
		Node* prev;
		Node(int k,int d){
			key=k;
			data=d;
			next=NULL;
			prev=NULL;
		}
};
class LFU{
	public:
	map<int, pair<int,int> > keyValFreq;
	map<int, list<int> > freqList;
	int capacity;
    int minFreq;
    map<int, list<int>::iterator> keyIter;
	LFU(int cap) {
        capacity = cap;
        minFreq = 0;
    }
    int get(int key){
    	if (keyValFreq.find(key) == keyValFreq.end())
            return -1;

        int val = keyValFreq[key].first;
        int freq = keyValFreq[key].second;
        freqList[freq].erase(keyIter[key]);
        
        if (freqList[freq].empty()) {
            freqList.erase(freq);
            if (minFreq == freq)
                minFreq++;
        }
        keyValFreq[key].second++;

        int newFreq = freq + 1;
        freqList[newFreq].push_front(key);
        keyIter[key] = freqList[newFreq].begin();

        return val;
	}
	void put(int key,int value){
		if (capacity == 0)
            return;
         if (get(key) != -1) {
            keyValFreq[key].first = value;
            return;
        }
        if (keyValFreq.size() == capacity) {
            int oldKey = freqList[minFreq].back();
            freqList[minFreq].pop_back();

            if (freqList[minFreq].empty())
                freqList.erase(minFreq);

            keyValFreq.erase(oldKey);
            keyIter.erase(oldKey);
        }
        keyValFreq[key] = {value, 1};
        freqList[1].push_front(key);
        keyIter[key] = freqList[1].begin();
        minFreq = 1;
	}
};
int main(){
	LFU c(3);
	c.put(1,10);
	c.put(2,20);
	c.put(3,30);
	c.put(4,30);
	cout<<c.get(3)<<endl;
	cout<<c.get(2)<<endl;
	cout<<c.get(4)<<endl;
	c.put(5,50); 
	cout<<c.get(4)<<endl;
	cout<<c.get(3)<<endl; 
	cout<<c.get(4)<<endl; 
}
