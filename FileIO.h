/*
 * FileIO.h
 *
 *  Created on: Oct 13, 2021
 *      Author: aihongyin
 */

#ifndef FILEIO_H_
#define FILEIO_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "NoodleReview.h"
using namespace std;


class FileIO{

public:

	    virtual std::vector<NoodleReview> read_from_file(std::string file_name) = 0;
	    virtual int write_to_file(std::string file_name, std::vector<NoodleReview> input_data) = 0;
	    // return of 0 means success, and return 1 or greater means some failure.
	    // For now, return 0 (we'll assume that any write is okay)

};



#endif /* FILEIO_H_ */
