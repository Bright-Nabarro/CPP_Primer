#include"fm.h"

message::message(const message& msg):
	contents(msg.contents), folders(msg.folders)
{
	copyAddToFolder(msg);
}

message::~message()
{
	removeFromFolders();
}

message& message::operator=(const message& msg)
{
	removeFromFolders();
	contents = msg.contents;
	folders = msg.folders;
	copyAddToFolder(msg);
	return *this;
}

void message::copyAddToFolder(const message& msg)
{
	for(auto fl: msg.folders)
		fl->msgs.insert(this);
}

void message::removeFromFolders()
{
	for(auto fl: folders)
		fl->msgs.erase(this);
}
