#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
	stack<char> _stack;
	queue<char> _queue;

public:
	void pushCharacter(char character) {
		_stack.push(character);
	}

	char popCharacter() {
		char c = _stack.top();
		_stack.pop();
		return c;
	}

	void enqueueCharacter(char character) {
		_queue.push(character);
	}

	char dequeueCharacter() {
		char c = _queue.front();
		_queue.pop();
		return c;
	}
};

int main() {
	// read the string s.
	string s;
	getline(cin, s);
	
	// create the Solution class object p.
	Solution obj;
	
	// push/enqueue all the characters of string s to stack.
	for (int i = 0; i < s.length(); i++) {
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}
	
	bool isPalindrome = true;
	
	// pop the top character from stack.
	// dequeue the first character from queue.
	// compare both the characters.
	for (int i = 0; i < s.length() / 2; i++) {
		if (obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;
			
			break;
		}
	}
	
	// finally print whether string s is palindrome or not.
	if (isPalindrome) {
		cout << "The word, " << s << ", is a palindrome.";
	} else {
		cout << "The word, " << s << ", is not a palindrome.";
	}
	
	return 0;
}