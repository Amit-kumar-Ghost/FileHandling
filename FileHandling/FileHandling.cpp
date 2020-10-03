// file handling in c++
#include<iostream>
#include<fstream>
#include<string >
using namespace std;
int main() {
	
	// create output streM TO send the data into file 
	ofstream os;
	os.open(" Codex.txt"); // open the file i.e copy the file from secondary memory to main memory 

	// send the data into file 
	os << " Hi, I am Amit TODAY i AM THINKING ABOUT HOW TO USE OUR KNOWLEGE IN THE REAL LIFE PROBLEM THEN IN MIND THIS IDEA POPED OUT IN MY MIND";

	os.close();
	// retrieve the data form created file 
	string name; // if we will  retrieve the data from file > I will stroe here  name variable 

	// create input stream to retrieve the data from file 
	ifstream receive;
	receive.open(" Codex.txt");
	// here i want to retrieve the data form the with space 
	while (getline(receive, name)) { 
		receive >> name; // it is just like increment operator 
		cout << name;
	}
	receive.close();
	return 0;
		

}