#pragma once
#include <iostream>
#include "UserInfo.h"

using namespace std;

class UserInfoKlas :
	public UserInfo
{
public:
	UserInfoKlas();
	~UserInfoKlas();

	void enterData(string klas);
};

