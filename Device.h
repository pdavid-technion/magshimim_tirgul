#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		     //
													     //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
													     //
/// ///////////////////////////////////////////////////////
#include <string>

class Device
{
private:
	unsigned int _id;
	DeviceType _device_type;
	std::string _os;
	bool _is_active;

public:
	void init(unsigned int id, DeviceType device_type, std::string os);
	~Device();
	unsigned int getId() const;
	DeviceType getType() const;
	std::string getOS() const;
	bool isActive() const;
	void activate();
	void deactivate();

};

