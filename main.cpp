#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include "output.h"

int main(){
	input input;
	input.cetak();
	input.tofile();
	
	proses proses;
	proses.getData();
	proses.toFile();
	
	output output;
	output.getData();
	output.cetak();
	
	return 0;
	
}
