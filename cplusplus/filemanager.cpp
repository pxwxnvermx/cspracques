#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



int fileSize(char fileName[25]){
	int size = 0;
	streampos begin,end;
  	ifstream myfile (fileName, ios::binary);
  	begin = myfile.tellg();
  	myfile.seekg (0, ios::end);
  	end = myfile.tellg();
  	myfile.close();
  	size = (end-begin);
  	return size;
}

void fileCheck(){
	ifstream fileC("files.txt");
	string name;
	int sz;
	cout << "_________________________________\n";
	while( !fileC.eof() ){
		fileC >> name >> sz;
		cout << name << endl;
	}
	cout << "_________________________________";
}

void fileSave(char fileName[25]){
	int size = 0;
	ofstream fileS("files.txt",ios::app);
	size = fileSize(fileName);
	fileS << endl << fileName << "\t" << size;
}

void read(char fileName[25]){
	ifstream fileRead(fileName);
	
	if(!fileRead){
		cout << "Cannot open " << fileName << "\nFile Does not exists.";
	}
	
	char data;
	
	while(fileRead.get(data)){
		cout << data;
	}
	
	fileRead.close();
}

void write(char fileName[25],string data){
	ofstream fileWrite(fileName);
	
	if(!fileWrite){
		cout << "Cannot open " << fileName << "\nFile Does not exists.";		
	}
	
	fileWrite << data;
	
	fileWrite.close();
}

void edit(char fileName[25],string data){
	ofstream fileEdit;
	fileEdit.open(fileName,ios_base::app);
	if(!fileEdit){
		cout << "Cannot open " << fileName << "\nFile Does not exists.";		
	}
	
	fileEdit << endl << data;
}

int main(){
	int ch;
	cout << "Enter your choice.\n";
	cout << "Read File Press 1.\n";
	cout << "Write to File Press 2.\n";
	cout << "To edit file Press 3.\n";
	cout << "To see the files Press 4.\n";
	cout << "Exit Press 0.\n";
	cin >> ch;
	
	char fileName[25];
	string data;
	
	switch(ch){
		case 0:
			return 1;
			break;
		case 1:
			cout << "Enter the name of file to be read : ";
			cin >> fileName;
			strcat(fileName,".txt");
			read(fileName);		
			break;
		case 2:
			cout << "Enter the name of file to be created : ";
			cin >> fileName;
			strcat(fileName,".txt");
			cout << "Enter the data to be entered : ";
			cin.ignore();
			getline(cin,data);
			if((data.size())>40000){
				cout << "File size is greater than 40kb";
			}else{
				write(fileName,data);
				fileSave(fileName);	
			}
	
			break;
		case 3:
			cout << "Enter the name of file to be edited : ";
			cin >> fileName;
			strcat(fileName,".txt");
			
			cout << "Enter the data to be added : ";
			cin.ignore();
			getline(cin,data);
			
			if((data.size())>40000){
				cout << "File size is greater than 40kb";
			}else{
				edit(fileName,data);
			}

			break;
		case 4: 
			cout << "Files\n";
			fileCheck();
			break;
		default:
			cout << "Wrong Choice entered.";				
	}
	
	
	return 0;
}
