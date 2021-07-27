#include "log.h" 
void test1()
{
    printf("hello\n");
    log4cplus_trace("hello world");
}
void test2()
{
    log4cplus_debug("hello world");
}
void test3()
{
    log4cplus_info("hello world");
}
void test4()
{
    log4cplus_warning("hello world");
}
void test5()
{
    log4cplus_error("hello world");
}
void test6()
{
    LOG4CPLUS_FATAL(logger,"hello world");
}
int main()
{
    //int n = 19;
   	init_log();
    printf("test\n");
    test6();
    test1();
    test2();
    test3();
    test4();
    test5();

    Logger::shutdown ();
	return 0;
}
