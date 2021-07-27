#include "log.h"
void init_log()
{
	PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT(LOG4CPLUS_CONF_FILE));
}

void write_log(Logger logger , int level, const char *file_name, 
 				const char *func_name, int line, 
				const char *fmt,...)
 {
	//eg:[test.cpp] - [main] : 28--
	char str[4096];
	sprintf(str, "%d", line);
	string msg = "[" + (string)file_name + " : " + (string)str + "] - [" + (string)func_name + "]" +  + " -- " ;
	char buf[4096];
	int i;
	va_list ap;
	va_start(ap, fmt);
	i = vsnprintf(buf, 4096, fmt, ap);
	char * tmp = buf;
	string s = msg + string(tmp);
	va_end(ap);
	switch (level)
	{
		case 1:
			LOG4CPLUS_TRACE(logger, s);
			break;
		case 2:
			LOG4CPLUS_DEBUG(logger, s);
			break;
		case 3:
			LOG4CPLUS_INFO(logger, s);
			break;
		case 4:
			LOG4CPLUS_WARN(logger, s);
			break;
		case 5:
			LOG4CPLUS_ERROR(logger, s);
			break;	
		case 6:
			LOG4CPLUS_FATAL(logger, s);
			break;
		default:
			break;
	}
 }