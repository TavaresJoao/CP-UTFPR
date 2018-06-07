/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface.h"


void
somasub_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	operandos  soma_1_arg;
	int  *result_2;
	operandos  sub_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SOMASUB_PROG, SOMASUB_VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = soma_1(&soma_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = sub_1(&sub_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	somasub_prog_1 (host);
exit (0);
}
