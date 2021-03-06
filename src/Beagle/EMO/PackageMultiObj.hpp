/*
 *  Open BEAGLE
 *  Copyright (C) 2001-2007 by Christian Gagne and Marc Parizeau
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact:
 *  Laboratoire de Vision et Systemes Numeriques
 *  Departement de genie electrique et de genie informatique
 *  Universite Laval, Quebec, Canada, G1K 7P4
 *  http://vision.gel.ulaval.ca
 *
 */

/*!
 *  \file   Beagle/PackageMultiObj.hpp
 *  \brief  Definition of the class PackageMultiObj.
 *  \author Christian Gagne
 *  $Revision: 1.2 $
 *  $Date: 2007/08/17 18:09:13 $
 */

#ifndef Beagle_EMO_PackageMultiObj_hpp
#define Beagle_EMO_PackageMultiObj_hpp

#include <map>
#include <string>

#include "Beagle/config.hpp"
#include "Beagle/macros.hpp"
#include "Beagle/Core/System.hpp"
#include "Beagle/Core/Evolver.hpp"
#include "Beagle/Core/Package.hpp"


namespace Beagle
{
namespace EMO
{

/*!
 *  \class PackageMultiObj Beagle/PackageMultiObj.hpp "Beagle/PackageMultiObj.hpp"
 *  \brief Package for adding objects related to multiobjective optimization.
 *  \ingroup ECF
 *  \ingroup MultiObj
 */
class PackageMultiObj : public PackageAbstract
{

public:

	//! PackageMultiObj allocator type.
	typedef AllocatorT< PackageMultiObj, PackageAbstract::Alloc > Alloc;
	//! PackageMultiObj handle type.
	typedef PointerT< PackageMultiObj, PackageAbstract::Handle > Handle;
	//! PackageMultiObj bag type.
	typedef ContainerT< PackageMultiObj, PackageAbstract::Bag > Bag;

	PackageMultiObj(void);
	virtual ~PackageMultiObj()
	{ }

	virtual void         configure(System& ioSystem);
	virtual PackageAbstract::Bag listDependencies(void);
};

}
}

#endif // Beagle_PackageMultiObj_hpp
