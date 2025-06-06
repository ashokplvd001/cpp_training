#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <set>
#include <tuple>
#include <list>
#include <chrono>

using namespace std;

class fileManager
{
	map < int, pair< string, string >> files_list;		// f_id , fileName , ownership
	map < string, vector<int, string> > owner_ship_wise_list;		// ownership -> owner ,vector< f_id, fileName >
	set< tuple<int, int> > fileId_accessCount;// f_id , frequency
	set < tuple< int , int , string >> listByMostAccessed;		// frequence , f_id , f_name 
	deque <  tuple < string , int , pair < string, string >>> recent_list;	// recentlist // time / f_id / user , access_mode
	set < string, int  >  listbyFileName;
	string getTime()
	{
		
	}

public :
	void addFile( int id  , string fName , string ownership)
	{
		files_list[id] = { fName, ownership };
		owner_ship_wise_list[ownership].emplace_back(id, fName);
		fileId_accessCount.insert({ id, 0 });
		listByMostAccessed.insert({ 0, id, fName });
		recent_list.push_back({})
	}


};



int main()
{
	
}
