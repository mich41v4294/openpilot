/*
 *    This file is part of ACADO Toolkit.
 *
 *    ACADO Toolkit -- A Toolkit for Automatic Control and Dynamic Optimization.
 *    Copyright (C) 2008-2014 by Boris Houska, Hans Joachim Ferreau,
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
 *    \file include/acado/transfer_device/sensor.ipp
 *    \author Hans Joachim Ferreau, Boris Houska
 *    \date 24.08.2008
 */



BEGIN_NAMESPACE_ACADO



//
// PUBLIC MEMBER FUNCTIONS:
//



inline uint Sensor::getNY( ) const
{
	return getDim( );
}



inline Noise* Sensor::getOutputNoise(	uint idx
										) const
{
	if ( ( idx >= getNY( ) ) || ( additiveNoise == 0 ) || ( additiveNoise[idx] == 0 ) )
		return 0;
	else
		return additiveNoise[ idx ]->clone( );
}



inline double Sensor::getOutputDeadTime(	uint idx
											) const
{
	if ( ( idx >= getNY( ) ) || ( idx >= deadTimes.getDim() ) )
		return 0.0;
	else
		return deadTimes( idx );
}


inline DVector Sensor::getOutputDeadTimes( ) const
{
	return deadTimes;
}


CLOSE_NAMESPACE_ACADO

/*
 *	end of file
 */
