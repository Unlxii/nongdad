#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

//string func3(string x){
	//int i = 0, L = x.size();
	//string y = "";
	//while(i < L){
		//y += tolower(x[i]);
		//i++;
	//}
	//return y;	
//}

string Palindrome(string x, string y){
	int i = 0, L = x.size();
	string z = "";
	while(i<L){
		if(x[i] == y[i]){
			return z = "Yes";
		}else{
			return z = "No";
 		}
		i++;
	} 
    return z;

}


int main(){

	string n ;

    cout << "Input text: ";
	cin >> n;
    cout << "Reversed text: " << func1(n) <<endl;
    cout << "Palindrome: " << Palindrome(func2(n),func2(func1(n))) ;
    return 0;
}
