/*
 *  BEEP.C - beep command.
 *
 *  Comments:
 *
 * 16 Jul 1998 (Hans B Pufal)
 *   started.
 *
 * 16 Jul 1998 (John P Price)
 *   Seperated commands into individual files.
 *
 * 27-Jul-1998 (John P Price <linux-guru@gcfl.net>)
 * - added config.h include
 *
 *
 */

#include "config.h"

#ifdef INCLUDE_CMD_BEEP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "command.h"
#include "batch.h"

#pragma argsused
int cmd_beep(char *param)
{
/*
 * Perform BEEP command.
 *
 */

  beep();

	return 0;
}

#endif
