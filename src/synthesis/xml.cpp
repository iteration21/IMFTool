// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "xml.h"

namespace namespace_
{
  // Space
  // 

  Space::
  Space (Value v)
  : ::xml_schema::Ncname (_xsd_Space_literals_[v])
  {
  }

  Space::
  Space (const char* v)
  : ::xml_schema::Ncname (v)
  {
  }

  Space::
  Space (const ::std::string& v)
  : ::xml_schema::Ncname (v)
  {
  }

  Space::
  Space (const ::xml_schema::Ncname& v)
  : ::xml_schema::Ncname (v)
  {
  }

  Space::
  Space (const Space& v,
         ::xml_schema::Flags f,
         ::xml_schema::Container* c)
  : ::xml_schema::Ncname (v, f, c)
  {
  }

  Space& Space::
  operator= (Value v)
  {
    static_cast< ::xml_schema::Ncname& > (*this) = 
    ::xml_schema::Ncname (_xsd_Space_literals_[v]);

    return *this;
  }
}

#include <xsd/cxx/xml/dom/wildcard-source.hxx>

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace namespace_
{
  // Space
  //

  Space::
  Space (const ::xercesc::DOMElement& e,
         ::xml_schema::Flags f,
         ::xml_schema::Container* c)
  : ::xml_schema::Ncname (e, f, c)
  {
    _xsd_Space_convert ();
  }

  Space::
  Space (const ::xercesc::DOMAttr& a,
         ::xml_schema::Flags f,
         ::xml_schema::Container* c)
  : ::xml_schema::Ncname (a, f, c)
  {
    _xsd_Space_convert ();
  }

  Space::
  Space (const ::std::string& s,
         const ::xercesc::DOMElement* e,
         ::xml_schema::Flags f,
         ::xml_schema::Container* c)
  : ::xml_schema::Ncname (s, e, f, c)
  {
    _xsd_Space_convert ();
  }

  Space* Space::
  _clone (::xml_schema::Flags f,
          ::xml_schema::Container* c) const
  {
    return new class Space (*this, f, c);
  }

  Space::Value Space::
  _xsd_Space_convert () const
  {
    ::xsd::cxx::tree::enum_comparator< char > c (_xsd_Space_literals_);
    const Value* i (::std::lower_bound (
                      _xsd_Space_indexes_,
                      _xsd_Space_indexes_ + 2,
                      *this,
                      c));

    if (i == _xsd_Space_indexes_ + 2 || _xsd_Space_literals_[*i] != *this)
    {
      throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
    }

    return *i;
  }

  const char* const Space::
  _xsd_Space_literals_[2] =
  {
    "default",
    "preserve"
  };

  const Space::Value Space::
  _xsd_Space_indexes_[2] =
  {
    ::namespace_::Space::default_,
    ::namespace_::Space::preserve
  };
}

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

namespace namespace_
{
  ::std::ostream&
  operator<< (::std::ostream& o, Space::Value i)
  {
    return o << Space::_xsd_Space_literals_[i];
  }

  ::std::ostream&
  operator<< (::std::ostream& o, const Space& i)
  {
    return o << static_cast< const ::xml_schema::Ncname& > (i);
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace namespace_
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace namespace_
{
  void
  operator<< (::xercesc::DOMElement& e, const Space& i)
  {
    e << static_cast< const ::xml_schema::Ncname& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const Space& i)
  {
    a << static_cast< const ::xml_schema::Ncname& > (i);
  }

  void
  operator<< (::xml_schema::ListStream& l,
              const Space& i)
  {
    l << static_cast< const ::xml_schema::Ncname& > (i);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

