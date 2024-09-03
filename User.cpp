#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
    this->id = id;
    this->username = username;
    this->age = age;
    DeviceList *list = new DeviceList();
    list.init();
    this->list = list;
}

void User::clear()
{
    this->list.clear();
}

unsigned int User::getID()
{
    return this->id;
}

std::string User::getUserName()
{
    return this->username;
}

unsigned int User::getAge()
{
    return this->age;
}

DeviceList& User::getDevices()
{
    return this->list;
}

void User::addDevice(Device newDevice)
{
    this->list.add(newDevice);
}

bool User::checkIfDevicesAreOn()
{
    DeviceNode* temp = this->list.get_first ();
    while(temp)
    {
        if(!(temp->isActive))
            return false;
        temp = temp.get_next();
    }
    return true;
}
