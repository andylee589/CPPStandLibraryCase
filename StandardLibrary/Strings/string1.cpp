#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
	string fileName, baseName, extName, tmpName;
	const string suffix("tmp");
	// for each command-line argument
	for (int i = 1; i < argc; ++i){
		fileName = argv[i];
		string::size_type position = fileName.find('.');
		if (position == string::npos){
			tmpName = fileName + '.' + suffix;
		}
		else {
			// split file name into base name and extension
			// base name containers all characters before the period
			// extension name containers all characters after the period
			baseName = fileName.substr(0, position);
			extName = fileName.substr(position + 1);
			if (extName.empty()){
				tmpName = fileName;
				tmpName += suffix;
			}
			else if (extName == suffix){
				tmpName = fileName;
				tmpName.replace(position + 1, string::npos, "xxx");
			}
			else {
				tmpName = fileName;
				tmpName.replace(position + 1, string::npos, suffix);
			}
		}

		cout << fileName << " => " << tmpName << endl;
	}
}