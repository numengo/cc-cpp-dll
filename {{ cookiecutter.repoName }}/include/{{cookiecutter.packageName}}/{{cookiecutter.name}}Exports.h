#ifndef _{{cookiecutter.name}}Exports_h
#define _{{cookiecutter.name}}Exports_h
/*******************************************************************************
   FILE DESCRIPTION
*******************************************************************************/
/*!
@file {{cookiecutter.name}}Exports.h
@author {{cookiecutter.authorName}} - {{cookiecutter.authorEmail}}
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
#ifdef {{cookiecutter.macroPrefix}}_USE_DYN
   #ifdef  _MSC_VER
   	#ifndef {{cookiecutter.macroPrefix}}_EXPORT
   		#ifdef {{cookiecutter.macroPrefix}}_MAKE_DLL
   			#define {{cookiecutter.macroPrefix}}_EXPORT __declspec( dllexport )
   		#else
   			#define {{cookiecutter.macroPrefix}}_EXPORT __declspec( dllimport )
   		#endif
   	#endif
   	#pragma warning( disable: 4251 )
   	#pragma warning( disable: 4275 )
   	#pragma warning( disable: 4996 )
   	#pragma warning( disable: 4661 )
   #else
   	#ifndef {{cookiecutter.macroPrefix}}_EXPORT
   		#ifdef {{cookiecutter.macroPrefix}}_MAKE_DLL
   			#define {{cookiecutter.macroPrefix}}_EXPORT
   		#else
   			#define {{cookiecutter.macroPrefix}}_EXPORT
   		#endif
   	#endif
   #endif
#else
	#define {{cookiecutter.macroPrefix}}_EXPORT
#endif


#endif
