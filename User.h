#ifndef _USER_
#define _USER_

#include <cstdint>
#include <string>
#include <vector>

#include "AccessPoint.h"

using namespace std;

// TODO
// move to class 
class User
{
    public:
        User();
        ~User();
        // TODO Builder(!) do ogarniêcia

    private:
        uint8_t m_Id;
        string m_Iame;
        string m_LastName;
        uint8_t m_Age;
        vector<AccessPoint> m_accessPoint;
        AccessPeriod m_AccessPeriod;
};

#endif // !_USER_