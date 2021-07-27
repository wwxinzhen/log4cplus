/*
 * @ : wuxz
 * @Description: 
 * @Version: 1.0
 * @Author: huzhenhong
 * @Date: 2021-07-25 12:46:35
 * @LastEditors: huzhenhong
 * @LastEditTime: 2021-07-25 12:46:36
 * @FilePath: /log_test/log.h
 * Copyright (C) 2021 huzhenhong. All rights reserved.
 */
#ifndef __LOG__H
#define __LOG__H

#include <iostream>
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>
#include <log4cplus/helpers/stringhelper.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/asyncappender.h>
#include <string>
#include <stdarg.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace log4cplus;
using namespace log4cplus::helpers;

static Logger logger = Logger::getRoot();

#define LOG4CPLUS_CONF_FILE "./log4cplus.conf"
 
#define log4cplus_trace(fmt, args...)  	    write_log(logger, 1, __FILE__, __FUNCTION__, __LINE__, fmt, ##args)
#define log4cplus_debug(fmt, args...)  	    write_log(logger, 2, __FILE__, __FUNCTION__, __LINE__, fmt, ##args)
#define log4cplus_info(fmt, args...)   	    write_log(logger, 3, __FILE__, __FUNCTION__, __LINE__, fmt, ##args)
#define log4cplus_warning(fmt, args...)	    write_log(logger, 4, __FILE__, __FUNCTION__, __LINE__, fmt, ##args)
#define log4cplus_error(fmt, args...)  	    write_log(logger, 5, __FILE__, __FUNCTION__, __LINE__, fmt, ##args)
#define log4cplus_fatal(fmt, args...)  	    write_log(logger, 6, __FILE__, __FUNCTION__, __LINE__, fmt, ##args)
//#define log4cplus_bare(lvl, fmt, args...)   write_log(logger, lvl, NULL, NULL, 0, fmt, ##args)

extern void write_log(Logger, int, const char *, 
 				const char *, int, 
				const char *,...);

extern void init_log();



#endif