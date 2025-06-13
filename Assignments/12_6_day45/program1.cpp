#include <iostream>
#include <thread>
#include <mutex>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <queue>

using namespace std; 

class User
{
	string name; 
public : 
	User( string name );
	virtual ~User() = 0;
	string getName() { return name; }
};

class Buyer : public User
{
public :
	Buyer(string name) :User(name){}
	~Buyer() = default; 
};

class seller : public User
{
public :
	seller(string name) :User(name) {}
	~seller() = default;
};

class Bid
{
	string bidder; 
	int amount; 
public : 
	Bid(string bidder ,	int amount) : 
		bidder(bidder) , amount(amount) {}
	~Bid() = default; 

	bool operator<(Bid& other){
		return amount < other.amount;	}
};

class Logger 
{
	ostream file; 
	void getTime();
public :
	Logger(string fileName);
	~Logger();
	void logWrite(string message);

};

class Auction
{
	string product; 
	priority_queue <Bid> bids;
	int minAmt;
	int timing;
	mutex m;
	condition_variable auctionCV;
	bool auctionStatus;
public:
	Auction(int minAmt, int timng, priority_queue <Bid>& bids)
	{
		this->bids = bids;
		this->minAmt = minAmt;
		this->timing = timing;
		this->auctionStatus = true;
	}

	void runTheAuction();
	//timming delay
	// actionCv.wait( lock , [this] () { return  actionStatus ;}
	void declareWinner();
		//	actionCv.notify()

};








