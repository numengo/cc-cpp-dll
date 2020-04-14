#ifndef _{{cookiecutter.library_name}}Exports_h
#define _{{cookiecutter.library_name}}Exports_h
/*******************************************************************************
   FILE DESCRIPTION
*******************************************************************************/
/*!
@file {{cookiecutter.library_name}}Exports.h
@author {{cookiecutter.full_name}} - {{cookiecutter.email}}
@date {{cookiecutter.year}}
@brief File containing defines for exports in case of dynamic libraries
 */

/*******************************************************************************
   LICENSE
*******************************************************************************
 Copyright (C) {{cookiecutter.year}} Numengo (admin@numengo.com)

 This document is released under the terms of the numenGo EULA.  You should have 
 received a copy of the numenGo EULA along with this file; see  the file 
 LICENSE.TXT. If not, write at admin@numengo.com or at NUMENGO, 27 rue JB Magnet, 
 42153 RIORGES - FRANCE 
 You are not allowed to use, copy, modify or distribute this file unless you  
 conform to numenGo EULA license.
*/


/*******************************************************************************
   REVISIONS
*******************************************************************************/

/*******************************************************************************
   INCLUDES
*******************************************************************************/

/*******************************************************************************
   DEFINES / TYPDEFS / ENUMS
*******************************************************************************/
#ifdef {{cookiecutter.macro_prefix}}_USE_DYN
   #ifdef  _MSC_VER
   	#ifndef {{cookiecutter.macro_prefix}}_EXPORT
   		#ifdef {{cookiecutter.macro_prefix}}_MAKE_DLL
   			#define {{cookiecutter.macro_prefix}}_EXPORT __declspec( dllexport )
   		#else
   			#define {{cookiecutter.macro_prefix}}_EXPORT __declspec( dllimport )
   		#endif
   	#endif
   	#pragma warning( disable: 4251 )
   	#pragma warning( disable: 4275 )
   	#pragma warning( disable: 4996 )
   	#pragma warning( disable: 4661 )
   #else
   	#ifndef {{cookiecutter.macro_prefix}}_EXPORT
   		#ifdef {{cookiecutter.macro_prefix}}_MAKE_DLL
   			#define {{cookiecutter.macro_prefix}}_EXPORT
   		#else
   			#define {{cookiecutter.macro_prefix}}_EXPORT
   		#endif
   	#endif
   #endif
#else
	#define {{cookiecutter.macro_prefix}}_EXPORT
#endif


#endif
