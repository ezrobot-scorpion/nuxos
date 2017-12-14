/*!
********************************************************************************
* @file     : nxdef.h
*
* @brief    :
*
* @version  : V0.0.1
*
* @copyright: All Rights Reserved.
********************************************************************************
* @changelog: L.H.T 2017-12-14 first version
*******************************************************************************/
#ifndef INCLUDE_NX_DEF_H
#define INCLUDE_NX_DEF_H

/*!
********************************************************************************
* INCLUDES
*******************************************************************************/
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
********************************************************************************
* CONTANTS
*******************************************************************************/
#ifndef FORCEINLINE
#define FORCEINLINE	static inline
#endif

//
// boolean macro defines.
//
#ifndef TRUE
	#define TRUE	1
#endif
#ifndef FALSE
	#define FALSE	0
#endif

//
// null macro define.
//
#ifndef NULL
	#ifdef __cplusplus
		#define	NULL		0
	#else
		#define	NULL		((void *)0)
#endif

/*!
********************************************************************************
* TYPE DEFINES
*******************************************************************************/
//
// base data type defines.
//
typedef				int				INT;
typedef				void			VOID;
typedef				char			CHAR;
typedef	unsigned	char			BOOL;
typedef	  signed	int				SINT;
typedef	unsigned	int				UINT;

typedef	  signed	char			SINT08;
typedef	unsigned	char			UINT08;
typedef   signed	short			SINT16;
typedef	unsigned	short			UINT16;
typedef	  signed	int				SINT32;
typedef	unsigned	int				UINT32;
typedef	  signed	long	long	SINT64;
typedef	unsigned	long	long	UINT64;

//
// kernel common data type defines.
//
typedef	unsigned	char			KIRQL;
typedef	unsigned	char			KPRIORITY;

//
// double list data type define.
//
struct _KLIST_ELEM
{
	struct _KLIST_ELEM *Flink;
	struct _KLIST_ELEM *Blink;
};
typedef struct _KLIST_ELEM KLIST_HEAD, KLIST_ELEM;

/*!
********************************************************************************
* PUBLIC FUNCTIONS
*******************************************************************************/

#ifdef __cplusplus
}
#endif
#endif /* INCLUDE_NX_DEF_H */
