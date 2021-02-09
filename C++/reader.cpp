#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	fstream file;
	file.open("B2.html",ios::in);
	if(!file){
		cout << "FILE DOES NOT EXIST" << endl;
	}else{
		char ch;
		int i = 0, j = 0;
		string needed = "pre>", needed2 = "</pre>";
		string data;
		while(!file.eof()){
			file >> ch;
			if(i < 3){
				if(ch == needed[i]){
					i++;
				}else{
					i = 0;
				}
			}else{
				if(j < 5){
					cout << ch;
				}
			}
		}
		cout << data;
	}
	return 0;
}