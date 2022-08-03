int minEle;
void push(stack<int>& s, int a){
	// Your code goes here
	if (s.empty())
	{
	    minEle =a;
	    s.push(a);
	   // cout<< a<<"\n";
	    return;
	}
	else 
	{
	   minEle = min(a, minEle);
	   s.push(a);
	}
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	else{
	    return false;
	}
	
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0){
	    return true;
	}
	else{
	    return false;
	}
}

int pop(stack<int>& s){
	// Your code goes here
	if(!s.empty()){
	    int popElement = s.top();
	    s.pop();
	    return popElement;
	}
	return -1;
}

int getMin(stack<int>& s){
	// Your code goes here
	return minEle;
}