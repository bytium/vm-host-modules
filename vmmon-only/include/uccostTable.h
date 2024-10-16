/*********************************************************
 * Copyright (C) 1998-2014,2020 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 *********************************************************/

#define INCLUDE_ALLOW_VMCORE
#define INCLUDE_ALLOW_VMMON
#include "includeCheck.h"

UC(CALL_START,             FALSE)
UC(BEGIN_BACK_TO_HOST,     FALSE)
UC(SWITCHED_TO_MODULE,     TRUE)
UC(VMX_HANDLER_START,      FALSE)
UC(SWITCHING_TO_MONITOR,   TRUE)
UC(DONE_BACK_TO_HOST,      FALSE)
UC(CALL_END,               FALSE)

#undef UC
