/*
 * IoRunner.h
 *
 *  Created on: Oct 13, 2021
 *      Author: aihongyin
 */

#ifndef IORUNNER_H_
#define IORUNNER_H_
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "FileIO.h"
#include "NoodleReview.h"



class IoRunner:public FileIO{


public:
IoRunner ();
std::vector<NoodleReview> read_from_file(std::string file_name);
int write_to_file(std::string file_name, std::vector<NoodleReview> input_data);

};

#endif /* IORUNNER_H_ */
