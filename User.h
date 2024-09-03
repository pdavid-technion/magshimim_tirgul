#include "DeviceList.h"

class User
{
    public:
        void init(unsigned int id, std::string username, unsigned int age);
        void clear();
        unsigned int getID();
        std::string getUserName();
        unsigned int getAge();
        DevicesList& getDevices();
        void addDevice(Device newDevice);
        bool checkIfDevicesAreOn();
    private:
        unsigned int id;
        std::string username;
        unsigned int age;
        DevicesList list;
};
