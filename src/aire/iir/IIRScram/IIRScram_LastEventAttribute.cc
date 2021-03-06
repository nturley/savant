// Copyright (c) 1996-2000 The University of Cincinnati.  
// All rights reserved.

// UC MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE SUITABILITY OF 
// THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
// TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE, OR NON-INFRINGEMENT.  UC SHALL NOT BE LIABLE
// FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING,
// RESULT OF USING, MODIFYING OR DISTRIBUTING THIS SOFTWARE OR ITS
// DERIVATIVES.

// By using or copying this Software, Licensee agrees to abide by the
// intellectual property laws, and all other applicable laws of the
// U.S., and the terms of this license.


// You may modify, distribute, and use the software contained in this package
// under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE" version 2,
// June 1991. A copy of this license agreement can be found in the file
// "LGPL", distributed with this archive.

// Authors: Philip A. Wilsey	phil.wilsey@uc.edu
//          Dale E. Martin	dmartin@cliftonlabs.com
//          Timothy J. McBrayer tmcrbaye@ece.uc.edu
//          Krishnan Subramani  skrish@ece.uc.edu
//          Malolan Chetlur     mal@ece.uc.edu
//          Radharamanan Radhakrishnan  ramanan@ece.uc.edu
//          Umesh Kumar V. Rajasekaran  urajasek@ece.uc.edu

//---------------------------------------------------------------------------

#include "IIRScram_DesignFile.hh"
#include "IIRScram_FunctionDeclaration.hh"
#include "IIRScram_LastEventAttribute.hh"
#include "IIRScram_PhysicalSubtypeDefinition.hh"
#include "IIRScram_SignalDeclaration.hh"
#include "StandardPackage.hh"
#include "set.hh"
#include "symbol_table.hh"


IIR_Boolean 
IIRScram_LastEventAttribute::_is_readable(){
  return _get_prefix()->_is_readable();
}

// Used in State::initialize for attribute[#].value.time
IIRScram *
IIRScram_LastEventAttribute::_clone() {
  IIRScram_LastEventAttribute *clone = new IIRScram_LastEventAttribute;
  IIRScram_Attribute::_clone( clone );
  return clone;
}

visitor_return_type *
IIRScram_LastEventAttribute::_accept_visitor( node_visitor *visitor,
					      visitor_argument_type *arg ){
  ASSERT(visitor != NULL);
  return visitor->visit_IIR_LastEventAttribute(this, arg);
}
