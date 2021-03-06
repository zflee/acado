/*
 *    This file is part of ACADO Toolkit.
 *
 *    ACADO Toolkit -- A Toolkit for Automatic Control and Dynamic Optimization.
 *    Copyright (C) 2008-2013 by Boris Houska, Hans Joachim Ferreau,
 *    Milan Vukov, Rien Quirynen, KU Leuven.
 *    Developed within the Optimization in Engineering Center (OPTEC)
 *    under supervision of Moritz Diehl. All rights reserved.
 *
 *    ACADO Toolkit is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    ACADO Toolkit is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with ACADO Toolkit; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/**
 *    \file include/acado/code_generation/export_auxiliary_functions.hpp
 *    \author Milan Vukov
 *    \date 2013
 */

#ifndef ACADO_TOOLKIT_EXPORT_AUXILIARY_FUNCTIONS_HPP
#define ACADO_TOOLKIT_EXPORT_AUXILIARY_FUNCTIONS_HPP

#include <acado/code_generation/export_templated_file.hpp>

BEGIN_NAMESPACE_ACADO

/**
 *	\brief A class for generating some helper functions.
 *
 *	\ingroup AuxiliaryFunctionality
 *
 *	\author Milan Vukov
 */
class ExportAuxiliaryFunctions
{
public:

	/** Default constructor.
	 *
	 *	@param[in] _moduleName		    Module name for customization.
	 *	@param[in] _commonHeaderName	Name of common header file to be included.
	 *	@param[in] _realString			String to be used to declare real variables.
	 *	@param[in] _intString			String to be used to declare integer variables.
	 *	@param[in] _precision			Number of digits to be used for exporting real values.
	 *	@param[in] _commentString		String to be used for exporting comments.
	 *
	 *	\return SUCCESSFUL_RETURN
	 */
	ExportAuxiliaryFunctions(	const String& _headerFileName,
								const String& _sourceFileName,
								const String& _moduleName = "acado",
								const String& _commonHeaderName = "",
								const String& _realString = "double",
								const String& _intString = "int",
								int _precision = 16,
								const String& _commentString = emptyConstString
								);

	/** Destructor. */
	virtual ~ExportAuxiliaryFunctions()
	{}

	/** Configure the template
	 *
	 *  \return SUCCESSFUL_RETURN
	 */
	returnValue configure(	);

	/** Export the interface. */
	returnValue exportCode();

private:

	ExportTemplatedFile source;
	ExportTemplatedFile header;
	String moduleName;
};

CLOSE_NAMESPACE_ACADO

#endif  // ACADO_TOOLKIT_EXPORT_AUXILIARY_FUNCTIONS_HPP
