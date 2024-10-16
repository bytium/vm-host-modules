/*********************************************************
 * Copyright (C) 2009-2016 VMware, Inc. All rights reserved.
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

/*
 * community_source.h --
 *
 *    Macros for excluding source code from community.
 */

#ifndef _COMMUNITY_SOURCE_H_
#define _COMMUNITY_SOURCE_H_

#define INCLUDE_ALLOW_USERLEVEL

#define INCLUDE_ALLOW_MODULE
#define INCLUDE_ALLOW_VMMON
#define INCLUDE_ALLOW_VMKERNEL
#define INCLUDE_ALLOW_VMKDRIVERS
#define INCLUDE_ALLOW_VMK_MODULE
#define INCLUDE_ALLOW_DISTRIBUTE
#define INCLUDE_ALLOW_VMCORE
#include "includeCheck.h"

/* 
 * Convenience macro for COMMUNITY_SOURCE
 */
#undef EXCLUDE_COMMUNITY_SOURCE
#ifdef COMMUNITY_SOURCE
   #define EXCLUDE_COMMUNITY_SOURCE(x) 
#else
   #define EXCLUDE_COMMUNITY_SOURCE(x) x
#endif

#undef COMMUNITY_SOURCE_AMD_SECRET
#if !defined(COMMUNITY_SOURCE) || defined(AMD_SOURCE)
/*
 * It's ok to include AMD_SECRET source code for non-Community Source,
 * or for drops directed at AMD.
 */
   #define COMMUNITY_SOURCE_AMD_SECRET
#endif

#undef COMMUNITY_SOURCE_INTEL_SECRET
#if !defined(COMMUNITY_SOURCE) || defined(INTEL_SOURCE)
/*
 * It's ok to include INTEL_SECRET source code for non-Community Source,
 * or for drops directed at Intel.
 */
   #define COMMUNITY_SOURCE_INTEL_SECRET
#endif

#endif
