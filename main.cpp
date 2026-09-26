#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void convertLine(std::string line);
void outputLine(int a, int b, std::string word);

int main(){
  std::ifstream data("data.csv");
  std::string line;

  while (getline(data, line)) {
    convertLine(line);
  } // end while

  data.close();

  return 0;
} // end main

void convertLine(std::string line){
    int fileA = 0;
    int fileB = 0;
    std::string word;
    std::stringstream ss(line);

    while (getline(ss, word, ',')) {
        std::cout << word << std::endl;
    }
    std::cout << '\n';
    
} // end convertLine

void outputLine(int a, int b, std::string word){
  // empty for now
} // end outputLine