#include <istream>
#include <unordered_map>
#include <array>

using namespace std; 

int main()
{
	unordered_map <string, array<int ,6  > > marksList;			// sem , marks

	marksList["sem1"][0] = 234; 
	marksList["sem1"][6] = 34;
	
	auto it  = marksList.equal_range("sem3");



}

