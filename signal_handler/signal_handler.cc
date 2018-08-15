/* User code: This file will not be overwritten by TASTE. */

#include "signal_handler.h"
#include <csignal>
#include <unistd.h>
#include <iostream>

void handle_signal( int signum )
{
	std::cout << "Interrupt signal (" << signum << ") received.\n"<<std::endl;
	signal_handler_RI_RI1();
	signal_handler_RI_RI2();
	signal_handler_RI_RI3();
	sleep(1);
	std::cout << "Terminating..."<<std::endl;
	exit(0);
}

void signal_handler_startup()
{
    signal(SIGINT, handle_signal);
}

void signal_handler_PI_trigger()
{
    /* Write your code here! */
}

