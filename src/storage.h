//
// Euan Williams: 01/11/2024
//
// Functions for interfacing with files on the local disk
//
#include <string>
#include <vector>
#include <fstream>

// Reads all lines from file and returns them as a vector of strings
std::vector<std::string> read_lines_from_file(std::string &filename) 
{
  std::string file_text;
  std::vector<std::string> line_list;
  std::ifstream line_list_file(filename);
  if (line_list_file.is_open())
  {
      while (getline(line_list_file, file_text))
      {
          line_list.push_back(file_text);
      }
  }
  else
  {
    std::cout << "Unable to open file" << std::endl;
  }
  line_list_file.close();
  return line_list;
}
