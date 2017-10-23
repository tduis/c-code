/* Using signals */
#include <stdio.h>
#include <signal.h>
#include <errno.h>

void handler(int sigtype)
{

}

main()
{
	struct sigaction action;
	action.sa_handler = handler;
	sigemptyset(&action.sa_mask);
	action.sa_flags = SA_RESTART;
	sigaction(SIGINT, &action, NULL);
}
