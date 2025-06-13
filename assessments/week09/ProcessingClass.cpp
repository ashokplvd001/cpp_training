#pragma once
#include <iostream>
#include <iostream>
#include <unordered_map>
#include <string>
#include "CustomersDatabase.h"
#include "Customer.h"
#include "Operator.h"
#include "OperatorDatabase.h"
#include "getDatafromFile.h"
#include "Credential.h"
#include "ProcessingClass.h"

using namespace std;


bool ProcessingClass::processingFun(OperatorsDatabase& OpDb, CustomersDatabase& cDb) {
	char opt;
	cout << "1. customerBill\n2. InterOperatorBill\n3. Exit\n";

	do
	{
		cin >> opt;
		switch (opt)
		{
		case '1':
			processCustomerbill(cDb);
			break;
		case '2':
			processInterOperatorbill(cDb);
			break;
		case '3':
			break;
		}
	} while (opt != '3');
	return true; 
}


bool ProcessingClass::printCustomerBillToscreen(  string msisdn ,  Customer& c)
{
	auto data1 = c.getData("local");
	cout << "Customer ID : " << msisdn; // << " (" << JIO << ")\n";
	cout << " * Services within the mobile operator *";
	cout << "Incoming voice call durations : " << data1["MTC"] << endl;
	cout << "Outgoing voice call durations : " << data1["MOC"] << endl;
	cout << "Incoming SMS messages : " << data1["SMS-O"] << endl;
	cout << "Outgoing SMS messages : " << data1["SMS-MT"] << endl;
		auto data2 = c.getData("outside");
		cout << "* Services outside the mobile operator * ";
		cout << "Incoming voice call durations : " << data2["MTC"] << endl;
		cout << "Outgoing voice call durations : " << data2["MOC"] << endl;
		cout << "Incoming SMS messages : " << data2["SMS-O"] << endl;
		cout << "Outgoing SMS messages : " << data2["SMS-MT"] << endl;
		cout << "* Internet use *" << endl;
		auto data3 = c.getData("intenet");
		cout << "MB downloaded : " << data3["GPRSD"] << " | MB uploaded : " << " | MB uploaded : "
			<<data3["GPRSU"] << endl;

		return true;
}

bool ProcessingClass::processCustomerbill( CustomersDatabase& cDb)
{
	char opt ;
	cin >> opt; 
	string msisdn;
	cout << "1. Bill for MSISDN\n2. All Bills to file : ";
	switch (opt)
	{
		case '1' :
			cout << "Enter the MSISDN :";
			cin>> msisdn; 
			auto it = cDb.getDb().find(msisdn);
			if (it == cDb.getDb().end())
				cout << "The msisdn is not found\n";
			else
				printCustomerBillToscreen(msisdn , it->second );
			break;

	}
	return true;
}


bool ProcessingClass::processInterOperatorbill(CustomersDatabase& cDb)
{
	return true;
	}

