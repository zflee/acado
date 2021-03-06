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
 *    \file include/acado/integrator/integrator_runge_kutta23.hpp
 *    \author Boris Houska, Hans Joachim Ferreau
 */


#ifndef ACADO_TOOLKIT_INTEGRATOR_RUNGE_KUTTA23_HPP
#define ACADO_TOOLKIT_INTEGRATOR_RUNGE_KUTTA23_HPP


#include <acado/integrator/integrator_fwd.hpp>


BEGIN_NAMESPACE_ACADO


/** 
 *	\brief Implements the Runge-Kutta-23 scheme for integrating ODEs.
 *
 *	\ingroup NumericalAlgorithms
 *
 *  The class IntegratorRK23 implements the Runge-Kutta-23 scheme
 *	for integrating ordinary differential equations (ODEs).
 *
 *	\author Boris Houska, Hans Joachim Ferreau
 */
class IntegratorRK23 : public IntegratorRK{


//
// PUBLIC MEMBER FUNCTIONS:
//

public:

    /** Default constructor. */
    IntegratorRK23( );

    /** Default constructor. */
    IntegratorRK23( const DifferentialEquation &rhs_ );

    /** Copy constructor (deep copy). */
    IntegratorRK23( const IntegratorRK23& arg );

    /** Destructor. */
    virtual ~IntegratorRK23( );

    /** Assignment operator (deep copy). */
    virtual IntegratorRK23& operator=( const IntegratorRK23& arg );

    /** The (virtual) copy constructor */
    virtual Integrator* clone() const;


protected:

    /** This routine initializes the coefficients of the Butcher Tableau. */
    virtual void initializeButcherTableau();

};


CLOSE_NAMESPACE_ACADO



#include <acado/integrator/integrator_runge_kutta23.ipp>


#endif  // ACADO_TOOLKIT_INTEGRATOR_RUNGE_KUTTA23_HPP

// end of file.
