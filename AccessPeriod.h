
#ifndef _ACCESSPERIOD_HH_
#define _ACCESSPERIOD_HH_

#include <string>

class AccessPeriod
{
	public:
		AccessPeriod();
		AccessPeriod(std::string p_startDate, std::string p_endDate);
		~AccessPeriod();

		void SetAccessPeriod(std::string p_startDate, std::string p_endDate);
		void SetStartDate(std::string p_startDate);
		void SetEndDate(std::string endDate);

		AccessPeriod GetAccessPeriod();
		std::string GetStartAccess();
		std::string GetEndAccess();

	private:
		std::string m_startAccess; // DD/MM/RRRR
		std::string m_endAccess;
};

#endif // _ACCESSPERIOD_
