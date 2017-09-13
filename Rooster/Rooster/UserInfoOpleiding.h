#pragma once
#include "UserInfo.h"

// child class of UserInfo
class UserInfoOpleiding :
	public UserInfo
{
public:
	UserInfoOpleiding();
	~UserInfoOpleiding();

	void enterData(char opleidingInitials[]);
};

