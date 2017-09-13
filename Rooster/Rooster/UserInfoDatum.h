#pragma once
#include "UserInfo.h"

// child class of UserInfo
class UserInfoDatum :
	public UserInfo
{
public:
	UserInfoDatum();
	~UserInfoDatum();

	void enterData(int day, int month, int year);
};

