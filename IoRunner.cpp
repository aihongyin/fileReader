/*
 * IoRunner.cpp
 *
 *  Created on: Oct 8, 2021
 *      Author: aihongyin
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "IoRunner.h"


	IoRunner::IoRunner (){
		cout << "FileIO class object has started." << endl;
	}

std::vector<NoodleReview> IoRunner::read_from_file(std::string file_name){


	//this is an instance of my vector that holding all the NoodleReview object
	vector<NoodleReview> myVector;


	//the name of the file would be assigned here
	std::string DATA_FILE_NAME =file_name;



	std::ifstream read_file(DATA_FILE_NAME);
	std::string rdata;



	if(!read_file.is_open()){
		std::cout<<"File is not open" <<std ::endl;
		read_file.open(DATA_FILE_NAME);
		read_file.clear();
		read_file.seekg(0);
	}

	std::string comma_token(",");

   std::getline(read_file, rdata);  //skip the first line
	while(getline(read_file, rdata)){
		std::size_t found = rdata.find(comma_token);


		 if(found !=std::string::npos){
				   std::stringstream  s_stream(rdata);
				   std::vector<std::string> vec_data;

				   //To check if the steam is ready to work
				   //this function will check if the stream has raised errors or not
				   while(s_stream.good()){
					   std::string sub_string;
					   getline(s_stream, sub_string, ',');
					   vec_data.push_back(sub_string);
				   }



				   //Here, form the object, and put it in a vector
				   int Review=0;
				   string ReviewString = vec_data.at(0);
				   stringstream myTool(ReviewString);
			       myTool >> Review;




				   string Brand = vec_data.at(1);
				   string Variety = vec_data.at(2);
				   string Style = vec_data.at(3);
				   string Country = vec_data.at(4);


				   double Stars=0.0;
				   string StarsString = vec_data.at(5);
				   stringstream myToolSe(StarsString);
				   			       myToolSe >> Stars;

				   string TopTen = vec_data.at(6);;


				   //form a NoodleReview object
				   NoodleReview thisNoodle(Review, Brand,Variety,Style,Country,Stars,TopTen);

				   //form a vector of NoodleReview objects
				   myVector.push_back(thisNoodle);





			   }

	}

	read_file.close();
	return myVector;

	}



//This is the writing method
int IoRunner::write_to_file(std::string file_name, std::vector<NoodleReview> input_data){

	 char data[100];
	 int n;
	 cout << endl << "Writing to the file, and enter the number of items you want to add: " << endl;
	 cin >> n;
	 cin.ignore();


   std::ofstream outfile(file_name, ios_base::app);
   cout << "Starts writing to file: " << endl;


   for(int i=0; i<n; i++){

   cout << "Enter Review: ";
   cin.getline(data,100);
   outfile << data << ",";

   cout << "Enter Brand: ";
   cin.getline(data, 100);
   outfile << data << ",";



      cout << "Enter Variety: ";
      cin.getline(data, 100);
      outfile << data << ",";

      cout << "Enter Style: ";
      cin.getline(data, 100);
      outfile << data << ",";


      cout << "Enter Country: ";
      cin.getline(data, 100);
      outfile << data << ",";


       cout << "Enter Stars: ";
       cin.getline(data, 100);
       outfile << data << ",";


       cout << "Enter TopTen: ";
       //cin.getline(data, 100);
       cin>>data;
       cin.ignore();
       outfile << data<<endl;


   }
   // close the opened file.
   outfile.close();
   return 0;

   }




