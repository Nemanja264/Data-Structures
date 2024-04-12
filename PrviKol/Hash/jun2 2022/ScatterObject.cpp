#include "ScatterObject.h"



ScatterObject::ScatterObject():HashObject()
{
	status = 0;
}


ScatterObject::ScatterObject(char* k, char* i, char* p, double avg) :HashObject(k, i, p, avg)
{
	status = 0;
}

ScatterObject::ScatterObject(ScatterObject const& obj):HashObject(obj)
{
	status = obj.status;
}

ScatterObject& ScatterObject::operator = (ScatterObject const& obj)
{
	if (this != &obj)
	{
		(HashObject&)(*this) = obj;
		status = obj.status;
	}
	return *this;
}

