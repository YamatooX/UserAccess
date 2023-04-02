#ifndef _ACCESSPOINT_
#define _ACCESSPOINT_

#include<string>
#include<cstdint>

#include "AccessPeriod.h"

class AccessPoint
{
	public:
		// TODO how to make easier constructor
		AccessPoint();
		~AccessPoint();

		uint16_t GetClassNumber();
		uint16_t GetCapacity();
		std::string getIpAdress();
		bool IfNeedsFix();
		AccessPeriod GetAccessPeriod();

		void SetNeedToFix(bool isFixNeeded);
		void SetIpAdress(std::string ipAdress);
		void SetAccessPeriod(AccessPeriod accessPeriod);

	private:
		uint16_t m_classNumber;
		uint16_t m_capacity;
		std::string m_ipAdress;
		bool m_needTofix;
		AccessPeriod m_accessPeriod;
};

#endif // _ACCESSPOINT_
