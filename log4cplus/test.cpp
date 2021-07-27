
// #include <iostream>
// #include <log4cplus/logger.h>
// #include <log4cplus/configurator.h>
// #include <log4cplus/helpers/stringhelper.h>
// #include <log4cplus/loggingmacros.h>
// #include <log4cplus/asyncappender.h>
// #include <string>
// #include <stdarg.h>
// #include <cstring>

// using namespace std;
// using namespace log4cplus;
// using namespace log4cplus::helpers;
 
// #define LOG4CPLUS_CONF_FILE "./log4cplus.conf"
 
// #define log4cplus_trace(fmt,args...)  	write_log(logger,1,__FILE__,__FUNCTION__,__LINE__,fmt,##args)
// #define log4cplus_debug(fmt,args...)  	write_log(logger,2,__FILE__,__FUNCTION__,__LINE__,fmt,##args)
// #define log4cplus_info(fmt,args...)   	write_log(logger,3,__FILE__,__FUNCTION__,__LINE__,fmt,##args)
// #define log4cplus_warning(fmt,args...)	write_log(logger,4,__FILE__,__FUNCTION__,__LINE__,fmt,##args)
// #define log4cplus_error(fmt,args...)  	write_log(logger,5,__FILE__,__FUNCTION__,__LINE__,fmt,##args)

//  void write_log(Logger logger , int level, const char *file_name, 
//  				const char *func_name, int line, 
// 				const char *fmt,...)
//  {
// 	//eg:[test.cpp] - [main] : 28--
// 	string msg = "[" + (string)file_name + "] - [" + (string)func_name + "] : " + std::to_string(line) + "--" ;
// 	char buf[256];
// 	int i;
// 	va_list ap;
// 	va_start(ap, fmt);
// 	i = vsnprintf(buf, 4096, fmt, ap);
// 	char * tmp = buf;
// 	string s = msg + string(tmp);
// 	va_end(ap);
// 	switch (level)
// 	{
// 	case 1:
// 		LOG4CPLUS_TRACE(logger, s);
// 		break;
// 	case 2:
// 		LOG4CPLUS_DEBUG(logger, s);
// 		break;
// 	case 3:
// 		LOG4CPLUS_INFO(logger, s);
// 		break;
// 	case 4:
// 		LOG4CPLUS_WARN(logger, s);
// 		break;
// 	case 5:
// 		LOG4CPLUS_ERROR(logger, s);
// 		break;	
// 	default:
// 		break;
// 	}
//  }
// int main()
// {
// 	const char * str = "helloworld";
// 	int n = 10;
// 	int m = 20;
// 	PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT(LOG4CPLUS_CONF_FILE));
// 	Logger logger = Logger::getRoot();

// 	log4cplus_trace("this is debug test %s" , str);
// 	log4cplus_debug("this is debug test %s %d" , str, n);
// 	log4cplus_info("this is debug test %s %d %d" , str, n, m);
// 	log4cplus_warning("this is debug test %s %d %d" , str, n, m);
// 	log4cplus_error("this is debug test %s %d %d" , str, n, m);
//     Logger::shutdown ();
// 	return 0;
// }
