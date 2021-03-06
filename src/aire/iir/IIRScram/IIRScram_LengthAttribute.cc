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
//          Umesh Kumar V. Rajasekaran urajasek@ece.uc.edu
//          Malolan Chetlur     mal@ece.uc.edu

//---------------------------------------------------------------------------

#include "IIRScram_ConstantDeclaration.hh"
#include "IIRScram_DesignFile.hh"
#include "IIRScram_IntegerSubtypeDefinition.hh"
#include "IIRScram_Identifier.hh"
#include "IIRScram_LengthAttribute.hh"
#include "symbol_table.hh"
#include "resolution_func.hh"
#include "set.hh"
#include "StandardPackage.hh"

void
IIRScram_LengthAttribute::_resolve_suffix_special(){
  _resolve_suffix_local_static_int();
}

IIRScram *
IIRScram_LengthAttribute::_clone(){
  IIRScram_LengthAttribute *my_clone = new IIRScram_LengthAttribute();
  my_clone->_set_suffix( _get_suffix() );
  IIRScram_Attribute::_clone( my_clone );

  return my_clone;
}

visitor_return_type *
IIRScram_LengthAttribute::_accept_visitor( node_visitor *visitor,
					   visitor_argument_type *arg ){
  ASSERT(visitor != NULL);
  return visitor->visit_IIR_LengthAttribute(this, arg);
}

