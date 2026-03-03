	#include <iostream>
	#include <string>
	#include <cctype>
	
	using namespace std;
	
	void SentencaDancante (string text){
		
		int cont = 0; 
		
		for(int i=0; i<text.length(); i++){
			if(text[i]!=32){
				if(cont%2!=0){
					text[i]=tolower(text[i]);
				}else{ 
					text[i]=toupper(text[i]);				}
				
				cont++;
			}
		}
		
		cout << text;
		

	}
	
	int main(){
		string text4;
		getline(cin,text4);
		SentencaDancante(text4);
		return 0;
	}

