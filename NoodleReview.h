/*
 * NoodleReview.h
 *
 *  Created on: Oct 8, 2021
 *      Author: aihongyin
 */

#ifndef NOODLEREVIEW_H_
#define NOODLEREVIEW_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


class NoodleReview;
//this is the global method
void display_noodle_reviews(std::vector<NoodleReview> vec_nr);



using namespace std;


class NoodleReview{

private:
	int Review;
	string Brand;
	string Variety;
	string Style;
	string Country;
	double Stars;
	string TopTen;


public:

	int get_review_number();
	string get_brand();
	string get_variety();
	string get_style();
	string get_country();
	double get_stars();
	string get_top_ten();

	//constructor
	NoodleReview(int Review, string Brand, string Variety, string Style, string Country,
			double Stars, string TopTen);


	//this is the global method
	 void display_noodle_reviews(std::vector<NoodleReview> vec_nr);

	//this is the friend method
	friend string assemble_noodle_review(NoodleReview& noodle_r);


};





#endif /* NOODLEREVIEW_H_ */




