/**
    CS 219 Section 1001 Programming Project 1
    @file driver.cpp
    @author Jessica Nam
    @version 2.0 1/26/2022
*/
#include <iostream>
#include <sstream> //string stream
#include <fstream> //input file stream
#include <cstdint> //for the unsigned type uint32_t

using namespace std;

int main(){

        ifstream file;
        char temp;

        cout<< "Please enter the text file: ";
	      string textfile;
        cin>> textfile; // user inputs name of text file they would like to test
        cout<< endl;

        file.open(textfile); // opens the file

        if(file){

                while(file.good()){
                        stringstream ss1, ss2;

			string num;
			uint32_t num1;
			uint32_t num2;
			uint32_t sum;
			string command; // ADD

			// file format
      file >> command >> temp >> temp >> num;
                        ss1 << hex << num;
			                  ss1 >> num1;
      file >> temp >> temp >> num;
                      	ss2 << hex << num;
			                  ss2 >> num2;
      
                        if(command == "ADD"){ // Read ADD function from file
                                sum = num1 + num2;
                                cout<< "The sum of 0x" << num1 << " + 0x" << num2 << " = " << "0x" << hex << sum << endl;
                        }

                }

                file.close();   
        }
        else{
		// if filename is incorrect or nonexistent 
                cout<< "\nFile does not exist!!!" << endl; 
        }

        return 0;

}
