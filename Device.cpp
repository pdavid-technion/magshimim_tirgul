#include "Device.h"

void Device::init(unsigned int id, DeviceType device_type, std::string os) {
	_id = id;
	_device_type = device_type;
	_os = os;
	_is_active = false;
}


Device::~Device(){}

unsigned int Device::getId() const {
	return _id;
}

DeviceType Device::getType() const{
	return _device_type;
}

bool Device::isActive() const {
	return _is_active;
}

void Device::activate() {
	_is_active = true;
}

void Device::deactivate(){
	_is_active = false;
}

std::string Device::getOS() const {
	return _os;
}
