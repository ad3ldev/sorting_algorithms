#ifndef MACRO_FUNCTIONS_H
#define MACRO_FUNCTIONS_H


/*-------------------------------------------------*/
#define SWAP(VAR_A, VAR_B, TYPE)	\
	do				\
	{				\
		TYPE TEMP = VAR_A;	\
		VAR_A = VAR_B;		\
		VAR_B = TEMP;		\
	}while(0)			\
/*-------------------------------------------------*/


#endif /* MACRO_FUNCTIONS_H */
