//
// Euan Williams: 01/11/2024
//
// Collection of functions for manipulating strings
//
#include <string>
#include <vector>



// Finds the location(s) of a given delimiter within a string.
std::vector<int> find_location_of_delimiter(std::string line, char delimiter)
{
  std::vector<int> delimiter_locations = {};
  for (int i = 0; i < line.size(); i++)
  {
      if (line[i] == delimiter)
      {
          delimiter_locations.push_back(i);
      }
  }
  return delimiter_locations;
}
